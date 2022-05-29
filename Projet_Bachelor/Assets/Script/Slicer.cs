using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EzySlice;
public class Slicer : MonoBehaviour
{
    public Material materialAfterSlice;
    public bool isTouched; 
	public List<Collider> objectsToBeSliced = new List<Collider>();
    public GameObject photo;
    // public GameObject deleteObj;
    public GameObject currentObj;
    public GameObject[] up = null;
    //private int i = 0;
    //private int j = 0;
    public GameObject decoupage;
    
    public void OnTriggerEnter(Collider coll)
    {
        if (coll.tag == "Sliceable")
            objectsToBeSliced.Add(coll);
    }

    public void OnTriggerExit(Collider coll)
    {
        if (coll.tag == "Sliceable")
            objectsToBeSliced.Remove(coll);
    }

    private void MakeItPhysical(GameObject obj)
    {
        obj.AddComponent<MeshCollider>().convex = true;
        obj.AddComponent<Rigidbody>();
    }

	private SlicedHull SliceObject(GameObject obj, Material crossSectionMaterial = null)
    {
        return obj.Slice(transform.position, transform.up, crossSectionMaterial);
    }

    public List<GameObject> Decoupage(List<GameObject> sousEnsemble)
    {
        List<GameObject> keptSlicedObject = new List<GameObject>();

        if(sousEnsemble.Count != 0)
        {
            int iteration = 0;
            foreach (GameObject objectToBeSliced in sousEnsemble)
            {
                SlicedHull slicedObject = SliceObject(objectToBeSliced, materialAfterSlice);

                GameObject upperHullGameobject = slicedObject.CreateUpperHull(objectToBeSliced, materialAfterSlice);
                GameObject lowerHullGameobject = slicedObject.CreateLowerHull(objectToBeSliced, materialAfterSlice);
                Destroy(lowerHullGameobject);

                upperHullGameobject.transform.position = objectToBeSliced.transform.position;

                MakeItPhysical(upperHullGameobject);

                //objectToBeSliced.SetActive(false);

                upperHullGameobject.transform.SetParent(photo.transform);
                upperHullGameobject.GetComponent<Rigidbody>().isKinematic = true;
                upperHullGameobject.GetComponent<Rigidbody>().useGravity = false;
                upperHullGameobject.tag = "Sliceable";
                upperHullGameobject.name = "obj";//+ iteration;
                iteration++;

                keptSlicedObject.Add(upperHullGameobject);
            }
        }
        return keptSlicedObject;
    }

    public List<GameObject> CollidersToGameObjects(List<Collider> colliderList)
    {
        List<GameObject> list = new List<GameObject>();

        foreach (Collider collider in colliderList)
            if (collider.gameObject)
                list.Add(collider.gameObject);

        return list;
    }
}

