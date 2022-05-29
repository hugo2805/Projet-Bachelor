/*--------------------------------------------------------------------------------*
  Copyright (C)Nintendo All rights reserved.

  These coded instructions, statements, and computer programs contain proprietary
  information of Nintendo and/or its licensed developers and are protected by
  national and international copyright laws. They may not be disclosed to third
  parties or copied or duplicated in any form, in whole or in part, without the
  prior written consent of Nintendo.

  The content herein is highly confidential and should be handled accordingly.
 *--------------------------------------------------------------------------------*/

using UnityEngine;
using nn.hid;

public class HidSinglePlayer : MonoBehaviour
{
    private UnityEngine.UI.Text textComponent;
    private System.Text.StringBuilder stringBuilder = new System.Text.StringBuilder();

    private NpadId npadId = NpadId.Invalid;
    private NpadStyle npadStyle = NpadStyle.Invalid;
    private NpadState npadState = new NpadState();

    void Start()
    {
       // textComponent = GameObject.Find("/Canvas/Text").GetComponent<UnityEngine.UI.Text>();

        Npad.Initialize();
        Npad.SetSupportedIdType(new NpadId[]{ NpadId.Handheld, NpadId.No1 });
        Npad.SetSupportedStyleSet(NpadStyle.FullKey | NpadStyle.Handheld | NpadStyle.JoyDual);
    }

    void Update()
    {
        stringBuilder.Length = 0;

        if (UpdatePadState())
        {
            if (npadState.GetButton(NpadButton.A))
            {
                AnalogStickState lStick = npadState.analogStickL;
                stringBuilder.AppendFormat(
                    "Press A Button\n<color=#ff8888ff>{0} {1} {2}\nanalogStickL({3}, {4})</color>",
                    npadId, npadStyle, npadState, lStick.fx, lStick.fy);
            }
            else
            {
                stringBuilder.AppendFormat(
                    "Press A Button\n{0} {1} {2}", npadId, npadStyle, npadState);
            }

            if (npadState.GetButtonDown(NpadButton.A))
            {
                Debug.Log("NpadButton.A Down");
            }
            else if (npadState.GetButtonUp(NpadButton.A))
            {
                Debug.Log("NpadButton.A Up");
            }
        }

      
        //textComponent.text = stringBuilder.ToString();
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
