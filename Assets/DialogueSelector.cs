using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DialogueSelector : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void SelectDialogue()
    {
        switch (this.gameObject.name)
        {
            case "Button1a":
                ButtonManager.inst.Clear();
                TextBoxContainer.inst.Clear();
                ButtonManager.inst.ButtonList[2].SetActive(true);
                ButtonManager.inst.ButtonList[3].SetActive(true);
                TextBoxContainer.inst.TextBoxes[1].SetActive(true);
                break;
            case "Button1b":
                ButtonManager.inst.Clear();
                TextBoxContainer.inst.Clear();
                TextBoxContainer.inst.TextBoxes[1].SetActive(true);
                break;
            case "Button2a":
                ButtonManager.inst.Clear();
                TextBoxContainer.inst.Clear();
                ButtonManager.inst.ButtonList[4].SetActive(true);
                ButtonManager.inst.ButtonList[5].SetActive(true);
                TextBoxContainer.inst.TextBoxes[1].SetActive(true);
                break;
            case "Button2b":
                ButtonManager.inst.Clear();
                TextBoxContainer.inst.Clear();
                TextBoxContainer.inst.TextBoxes[5].SetActive(true);
                break;
            case "Button3a":
                ButtonManager.inst.Clear();
                TextBoxContainer.inst.Clear();
                TextBoxContainer.inst.TextBoxes[5].SetActive(true);
                break;
            case "Button3b":
                ButtonManager.inst.Clear();
                TextBoxContainer.inst.Clear();
                TextBoxContainer.inst.TextBoxes[3].SetActive(true);
                FadeController.inst.fadeObject.SetActive(true);
                TextBoxContainer.inst.WinCon();
                break;
        }
    }
}
