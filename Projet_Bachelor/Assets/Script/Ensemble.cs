using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ensemble : MonoBehaviour
{
    public List<GameObject> goList = new List<GameObject>();


    private void OnTriggerEnter(Collider coll)
    {
        if (coll.tag == "Sliceable")
            if (coll.gameObject)
                goList.Add(coll.gameObject);
    }

    private void OnTriggerExit(Collider coll)
    {
        if (coll.tag == "Sliceable")
            if (coll.gameObject)
                goList.Remove(coll.gameObject);
    }
}
