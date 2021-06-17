#include <opencv2/opencv.hpp>
#include "header.h"
using namespace std;
using namespace cv;

void LGS::Stitching()
{
	Mat result;


	Ptr<Stitcher> stitcher = Stitcher::create(Stitcher::PANORAMA);

	// Stitch all the images present in the image array
	Stitcher::Status status = stitcher->stitch(imageArray, result);

	if (status != Stitcher::OK) // Check if images could not be stiched
	{
		cout << "Can't stitch images\n";
	}


	imwrite("panorama.jpg", result);
	namedWindow("stitched_image", WINDOW_AUTOSIZE);
	imshow("stitched_image", result);

	waitKey(0);
}
