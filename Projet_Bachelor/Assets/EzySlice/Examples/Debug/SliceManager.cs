using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SliceManager : MonoBehaviour
{
    public GameObject Slice1;
    public GameObject Slice2;
    public GameObject ots;
    public Material crossSectionMaterial;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            Debug.Log("av");
            Slice1.GetComponent<PlaneUsageExample>().SliceObject(ots, crossSectionMaterial = null);
            Debug.Log("ap");

        }
    }

    
}
