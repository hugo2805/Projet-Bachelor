using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class SliceListener : MonoBehaviour
{
    public Ensemble ensembleMesh;
    public Slicer slicer1;
    public Slicer slicer2;
    public Slicer slicer3;
    public Slicer slicer4;
    public int i, slice;
    public GameObject photo;

    public List<GameObject> ensemble = new List<GameObject>();
    public void TriggerSlicer()
    {
        slice = 0;
        i = 0;
        // Reinstantier les objects
        ensemble = ensembleMesh.goList;

        SliceEnsemble(slicer1);
        SliceEnsemble(slicer2);
        SliceEnsemble(slicer3);
        SliceEnsemble(slicer4);

        if (slice == 4)
        {
            Debug.Log("Duplicate");
            foreach (GameObject go in ensemble)
            {
                if (go.name != "obj")
                {
                    GameObject obj = Instantiate(
                        go,
                        go.transform.position,
                        go.transform.rotation,
                        photo.transform
                    );

                    ensemble.Remove(go);
                    obj.name = "dup" + i;
                    i++;
                    obj.transform.localScale = new Vector3(1, 1, 1);
                }
            }
        }

        float t = .5f;
        //StartCoroutine(coolDown(t));
    }

    IEnumerator coolDown(float time)
    {
        yield return new WaitForSeconds(time);
        FindObjectOfType<activePolaroid>().isDecoupage = false;
    }

    public void SliceEnsemble(Slicer s)
    {
        // Creation des listes "sousEnsemble" et "ensembleCopy"
        // "sousEnsemble" est la liste dans laquelle on travail
        // "ensembleCopy" permet de faire le foreach tout en modifiant son contenu
        List<GameObject> sousEnsemble = new List<GameObject>();
        List<GameObject> ensembleCopy = new List<GameObject>();
        
        // Copie de "ensemble" vers "ensembleCopy"
        foreach (GameObject go in ensemble)
            ensembleCopy.Add(go);

        // Pour chaque obj de "ensembleCopy"
        foreach (GameObject goE in ensembleCopy)
        {
            // et chaque obj qui est dans le viseur
            foreach (GameObject goS in s.CollidersToGameObjects(s.objectsToBeSliced))
            {
                // Si l'obj de "ensembleCopy" est dans le viseur
                if (goE == goS)
                {
                    // on le met dans "sousEnsemble"
                    sousEnsemble.Add(goE);
                    // on l'enlève de "ensemble"
                    ensemble.Remove(goE);
                }
            }
        }

        // Pour chaque partie gardé après découpage, l'ajouter à ensemble
        foreach (GameObject goS in s.Decoupage(sousEnsemble))
            ensemble.Add(goS);

        slice++;
    }
}
