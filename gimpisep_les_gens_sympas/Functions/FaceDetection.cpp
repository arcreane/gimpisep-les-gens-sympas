#include "../Header.h"

using namespace std;
using namespace cv;

int LGS::faceDetection()
{
    // First we load the cascade from the OpenCV files
    CascadeClassifier cascade;
    cascade.load("../Data/haarcascade_frontalface_alt.xml");

    vector<Rect> faces; // Used to store the faces
    Mat gray;
    cvtColor(image, gray, COLOR_BGR2GRAY);
    cascade.detectMultiScale(gray, faces, 1.1, 2,0 | cv::CASCADE_SCALE_IMAGE,
                             Size(30, 30)); // Detection of the faces
    if (faces.empty()) {
        std::cout << "LGS::faceDetection has been executed ! But no face has been detected...\n";
        return 0;
    }

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

    namedWindow("Face Detected Image", WINDOW_AUTOSIZE);
    cout << "Click on the displayed image and press anything on the keybord to continue..." << endl;
    imshow("Face Detected Image", image);
    cv::waitKey(0);

    return 0;
}


