using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using EzySlice;

/**
 * Cette classe est un exemple de configuration d'un plan de coupe à partir d'un GameObject
 * et comment travailler avec des systèmes de coordonnées.
 *
 * Lorsqu'un lieu coupe un maillage, le maillage est en coordonnées locales tandis que le plan
 * est en coordonnées mondiales. La première étape consiste à amener l'avion dans le système de coordonnées
 * du maillage que nous voulons trancher. Ce script montre comment faire cela.
 */
public class PlaneUsageExample : MonoBehaviour {

	
	/**
	 * Cette fonction découpera l'objet fourni par le plan défini dans ce
	 * GameObject. Nous utilisons le GameObject auquel ce script est attaché pour définir la position
	 * et direction de notre plan de coupe. Les résultats sont ensuite renvoyés à l'utilisateur.
	 */
	public SlicedHull SliceObject(GameObject obj, Material crossSectionMaterial = null) {
		// découpe l'objet fourni en utilisant les transformations de cet objet
		return obj.Slice(transform.position, transform.up, crossSectionMaterial);
	}

	#if UNITY_EDITOR
	/**
	 * This is for Visual debugging purposes in the editor 
	 */
	public void OnDrawGizmos() {
		EzySlice.Plane cuttingPlane = new EzySlice.Plane();


		// l'avion sera mis aux mêmes coordonnées que l'objet que ce
		// le script est attaché à
		// REMARQUE -> Le dessin Debug Gizmo ne fonctionne que si nous passons la transformation
		cuttingPlane.Compute(transform);

		// dessine des gizmos pour l'avion
		// REMARQUE -> Le dessin Debug Gizmo est UNIQUEMENT disponible en mode éditeur. N'essaye pas
		// pour l'exécuter dans la version finale ou vous aurez des plantages (le plus probable)
		cuttingPlane.OnDebugDraw();
	}

	#endif
}
