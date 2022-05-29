using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;
using nn.hid;
using UnityEngine.Purchasing;

public class activePolaroid : MonoBehaviour
{
    public CaptureEcran capture;
    public PlayableDirector polaroid;
    public PlayableDirector sortiePhoto;
    public PlayableDirector click;
    public Animator AnimPola;
    public bool active = false;
    public bool desactive = true;
    public bool pause = false;
    public bool photo = false;
    public bool end = false;
    public SliceListener decoupage;

    public GameObject pola;
    //switch
    private NpadId npadId = NpadId.Invalid;
    private NpadStyle npadStyle = NpadStyle.Invalid;
    private NpadState npadState = new NpadState();

    [HideInInspector]
    public bool isDecoupage = false;
    
    void Start()
    {
        //switch
        Npad.Initialize();
        Npad.SetSupportedIdType(new NpadId[] { NpadId.Handheld, NpadId.No1 });
        Npad.SetSupportedStyleSet(NpadStyle.FullKey | NpadStyle.Handheld | NpadStyle.JoyDual);
    }

    void Update()
    {

        if (UpdatePadState())
        {
            if (npadState.GetButton(NpadButton.B) && !active && desactive && !pause)
            {
                StartCoroutine("activation");
            }

            if (npadState.GetButton(NpadButton.B) && active && !desactive && pause)
            {
                StartCoroutine("desactivation");
            }

            if (npadState.GetButton((NpadButton.A)))
            {
                if (end)
                {
                    pola.SetActive(false);
                }
            }
        }

        if (polaroid.time > 1.3 && polaroid.time < 1.35 && active && !desactive)
        {
            polaroid.Pause();
            pause = true;
            //Debug.Log("2");

            if (npadState.GetButton(NpadButton.ZR) && !isDecoupage)
            {
                //isDecoupage = true;
                Debug.Log("ZR");
                click.Play();
                capture.CamCapture();
                decoupage.TriggerSlicer();
            }
        }

        
        if (click.time >= 0.4)
        { 
            StartCoroutine("desactivation2");
        }

        if (photo)
        {
            sortiePhoto.Play();
        }

        if (polaroid.time ==0)
        {
            active = false;
            desactive = true;
            end = true;
        }
    }


    IEnumerator activation()
    {
        polaroid.Play();
        active = true;
        desactive = false;
        yield return 1;
    }

    IEnumerator desactivation()
    {
        polaroid.Resume();
        active = false;
        desactive = true;
        pause = false;
        yield return 1;
    }

    IEnumerator desactivation2()
    {
        polaroid.Resume();
        active = false;
        desactive = true;
        pause = false;
        sortiePhoto.Play();
        if (polaroid.time >= 2.73f)
        {
            photo = true;
        }

        yield return 1;
    }

    private bool UpdatePadState()
    {
        NpadStyle handheldStyle = Npad.GetStyleSet(NpadId.Handheld);
        NpadState handheldState = npadState;
        if (handheldStyle != NpadStyle.None)
        {
            Npad.GetState(ref handheldState, NpadId.Handheld, handheldStyle);
            if (handheldState.buttons != NpadButton.None)
            {
                npadId = NpadId.Handheld;
                npadStyle = handheldStyle;
                npadState = handheldState;
                return true;
            }
        }

        NpadStyle no1Style = Npad.GetStyleSet(NpadId.No1);
        NpadState no1State = npadState;
        if (no1Style != NpadStyle.None)
        {
            Npad.GetState(ref no1State, NpadId.No1, no1Style);
            if (no1State.buttons != NpadButton.None)
            {
                npadId = NpadId.No1;
                npadStyle = no1Style;
                npadState = no1State;
                return true;
            }
        }

        if ((npadId == NpadId.Handheld) && (handheldStyle != NpadStyle.None))
        {
            npadId = NpadId.Handheld;
            npadStyle = handheldStyle;
            npadState = handheldState;
        }
        else if ((npadId == NpadId.No1) && (no1Style != NpadStyle.None))
        {
            npadId = NpadId.No1;
            npadStyle = no1Style;
            npadState = no1State;
        }
        else
        {
            npadId = NpadId.Invalid;
            npadStyle = NpadStyle.Invalid;
            npadState.Clear();
            return false;
        }
        return true;
    }
}
