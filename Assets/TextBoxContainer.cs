using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TextBoxContainer : MonoBehaviour
{
    [SerializeField] public List<GameObject> TextBoxes;
    public static TextBoxContainer inst;
    
    // Start is called before the first frame update
    void Awake()
    {
        if(inst == null)
        {
            inst = this;
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void Clear()
    {
        foreach(GameObject textbox in TextBoxes)
        {
            textbox.SetActive(false);
        }
    }
    public void WinCon()
    {
        Invoke("DisplayFinal", 2.0f);
    }
    void DisplayFinal()
    {
        Clear();
        TextBoxes[4].SetActive(true);

    }
}
