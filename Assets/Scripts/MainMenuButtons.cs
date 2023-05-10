using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class MainMenuButtons : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    void LoadGame()
    {
        
    }
    public void StartGame()
    {
        SceneManager.LoadScene("DemoScene");
    }
    public void QuitGame()
    {
        Application.Quit();
    }
}
