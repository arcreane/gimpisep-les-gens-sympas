

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;

int main(void) {

    Mat image = imread("mark.jpg");

    // Draw a line
    // We are making a copy of image because we don't want to draw all the shapes on one image
    Mat imageLine = image.clone();
    line(imageLine, Point(322, 179), Point(400, 183), Scalar(0, 255, 0), 1, CV_AA);
    imshow("line", imageLine);
    imwrite("imageLine.jpg", imageLine);


    // Draw a circle
    Mat imageCircle = image.clone();
    circle(imageCircle, Point(350, 200), 150, Scalar(0, 255, 0), 1, CV_AA);
    imshow("circle", imageCircle);
    imwrite("imageCircle.jpg", imageCircle);

    // Draw an ellipse
    Mat imageEllipse = image.clone();
    ellipse(imageEllipse, Point(360,200), Size(100, 170), 45, 0, 360, Scalar(255, 0, 0), 1, 8);
    ellipse(imageEllipse, Point(360,200), Size(100, 170), 135, 0, 360, Scalar(0, 0, 255), 1, 8);
    imshow("ellipse", imageEllipse);
    imwrite("imageEllipse.jpg", imageEllipse);

    // Draw a rectangle 
    Mat imageRectangle = image.clone();
    rectangle(imageRectangle, Point(208, 55), Point(450, 355), Scalar(0, 255, 0), 1, 8);
    imshow("rectangle", imageRectangle);
    imwrite("imageRectangle.jpg", imageRectangle);



    waitKey(0);
    return 0;
}
