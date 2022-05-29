using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using nn.hid;

public class deplacement3P : MonoBehaviour
{
    public Transform cam;

    public float vitesse = 5f;
    public float rotation_vitesse = 40f;

    Animator anim;
    Rigidbody rigidBody;

    int velocityHash;

    //switch
    private NpadId npadId = NpadId.Invalid;
    private NpadStyle npadStyle = NpadStyle.Invalid;
    private NpadState npadState = new NpadState();

    void Start()
    {
        //initialisation
        rigidBody = GetComponent<Rigidbody>();
        anim = GetComponent<Animator>();
        cam = Camera.main.transform;

        //amelioration performance
        velocityHash = Animator.StringToHash("Velocite");

        //switch
        Npad.Initialize();
        Npad.SetSupportedIdType(new NpadId[] { NpadId.Handheld, NpadId.No1 });
        Npad.SetSupportedStyleSet(NpadStyle.FullKey | NpadStyle.Handheld | NpadStyle.JoyDual);
    }
    

    void FixedUpdate()
    {
        //switch joycon
        if (UpdatePadState())
        {
            AnalogStickState lStick = npadState.analogStickL;

            methode3(lStick.fx, lStick.fy);
        }
    }


    void methode3(float horizontal, float vertical)
    {
        Vector3 dir = (cam.right * horizontal) + (cam.forward * vertical);//.normalized;  //right -> x et forward -> z
        dir.y = 0f;

        if (horizontal != 0 || vertical != 0)
        {
            rigidBody.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(dir), rotation_vitesse * Time.deltaTime);
            rigidBody.velocity = transform.forward * vitesse * dir.magnitude;
        }
        else
        {
            rigidBody.velocity = Vector3.zero;
        }

        //anim.SetFloat(velocityHash, (Mathf.Abs(horizontal) + Mathf.Abs(vertical))); //TEST POUR LE TREMBLEMENT
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
