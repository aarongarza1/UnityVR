using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonManager : MonoBehaviour
{
    [SerializeField] public List<GameObject> ButtonList;
    public static ButtonManager inst;
   
    void Awake()
    {
        if(inst == null)
            inst = this;
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
        foreach(GameObject button in ButtonList)
        {
            button.SetActive(false);
        }
    }
    
}
