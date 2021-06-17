#include "header.h"

using namespace std;
using namespace cv;

void LGS::faceDetection(double scale)
{
    CascadeClassifier cascade;
    cascade.load("haarcascade_frontalcatface.xml");
    vector<Rect> faces;
    Mat gray;
    cvtColor(image, gray, COLOR_BGR2GRAY);
    cascade.detectMultiScale(gray, faces, 1.1, 2, 0 | CASCADE_SCALE_IMAGE, Size(30, 30));
    for (size_t i = 0; i < faces.size(); i++)
    {
        Rect r = faces[i];
        Scalar color = Scalar(255, 0, 0);
        rectangle(image, cv::Point(cvRound(r.x * scale), cvRound(r.y * scale)), cv::Point(cvRound((r.x + r.width - 1) * scale), cvRound((r.y + r.height - 1) * scale)), color, 3, 8, 0);
    }
}