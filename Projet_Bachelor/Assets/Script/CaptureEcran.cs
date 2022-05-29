using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class CaptureEcran : MonoBehaviour
{

    public int FileCounter = 0;
    public GameObject plane;
    public Material mat;// = new Material(Shader.Find("Specular"));

    private void LateUpdate()
    {
        if (Input.GetKeyDown(KeyCode.C))
        {
            CamCapture();
        }
    }

    public void CamCapture()
    {
        Debug.Log("Capture de l'image");
        Camera Cam = GetComponent<Camera>();

        RenderTexture currentRT = RenderTexture.active;
        RenderTexture.active = Cam.targetTexture;

        Cam.Render();

        Texture2D Image = new Texture2D(Cam.targetTexture.width, Cam.targetTexture.height);
        Image.ReadPixels(new Rect(0, 0, Cam.targetTexture.width, Cam.targetTexture.height), 0, 0);
        Image.Apply();
        RenderTexture.active = currentRT;

        var Bytes = Image.EncodeToPNG();
        Destroy(Image);
        
        File.WriteAllBytes(Application.dataPath + "/Photo/Image"+ FileCounter + ".png", Bytes);

        // Load photo from persistent data folder
        byte[] bytesPNG = System.IO.File.ReadAllBytes(Application.dataPath + "/Photo/Image" + FileCounter + ".png");
        Texture2D texture = new Texture2D(1, 1);
        texture.LoadImage(bytesPNG);

        mat.mainTexture = texture;

        plane.GetComponent<MeshRenderer>().material = mat;
        FileCounter++;
    }

}