using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
//Aaron Garza
//aaronaagarza.kaz@gmail.com
public class SelectLevel : MonoBehaviour
{

    // Use this for initialization
    public void loadLevel()
    {
        switch (this.gameObject.name)
        {
            case "First":
                SceneManager.LoadScene("WayPointScenes/Pathfinder", LoadSceneMode.Single);
                break;
            case "Second":
                SceneManager.LoadScene("WayPointScenes/Pathfinder", LoadSceneMode.Single);
                break;
            case "Third":
                SceneManager.LoadScene("WayPointScenes/Pathfinder", LoadSceneMode.Single);
                break;
        }
    }
}
