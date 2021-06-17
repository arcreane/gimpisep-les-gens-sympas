#include "../Header.h"

using namespace std;
using namespace cv;

int LGS::faceDetection()
{
    // First we load the cascade from the OpenCV files
    CascadeClassifier cascade;
    cascade.load(samples::findFile("data/haarcascades/haarcascade_frontalface_alt.xml"));

    vector<Rect> faces; // Used to store the faces
    Mat gray;
    cvtColor(image, gray, COLOR_BGR2GRAY);
    cascade.detectMultiScale(gray, faces, 1.1, 2,0 | cv::CASCADE_SCALE_IMAGE,
                             Size(30, 30)); // Detection of the faces
    for (size_t i = 0; i < faces.size(); i++)
    {
        Rect r = faces[i];
        Scalar color = Scalar(255, 0, 0); // Color of the square ; here it is blue
        // Wee add a rectangle around the face
        rectangle(image,
                  cv::Point(cvRound(r.x), cvRound(r.y)),
                  cv::Point(cvRound(r.x + r.width - 1),cvRound(r.y + r.height - 1)),
                  color, 3, 8, 0);
    }

    std::cout << "LGS::faceDetection has been executed !\n";
    return 0;
}


