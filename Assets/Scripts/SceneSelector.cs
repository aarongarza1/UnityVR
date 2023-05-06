using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
public class SceneSelector : MonoBehaviour
{
    public void LoadLevel()
    {
        switch(this.gameObject.name)
        {
            case "First":
                SceneManager.LoadScene("FriendScene1");
                break;
            case "Second":
                SceneManager.LoadScene("FriendScene2");
                break;
            case "Third":
                SceneManager.LoadScene("FriendScene3");
                break;
            default:
                break;
        }
    }
}
