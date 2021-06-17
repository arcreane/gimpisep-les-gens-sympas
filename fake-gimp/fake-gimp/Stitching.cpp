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

	namedWindow("Stitched Image", WINDOW_AUTOSIZE);
	imshow("Stitched Image", result);

	std::cout << "LGS::stitching have been executed !\n";
}
