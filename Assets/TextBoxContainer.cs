using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TextBoxContainer : MonoBehaviour
{
    [SerializeField] public List<GameObject> TextBoxes;
    [SerializeField] public GameObject Fader;
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
    public void LoseCon()
    {
        Invoke("ChangeScene", 5.0f);
    }
    public void WinCon()
    {
        //Fader.SetActive(true);
        Invoke("DisplayFinal", 2.0f);
        Invoke("ChangeScene", 12.0f);
    }
    void DisplayFinal()
    {
        Clear();
        TextBoxes[4].SetActive(true);

    }
    void ChangeScene()
    {
        SceneManager.LoadScene("DemoScene");
    }
}
