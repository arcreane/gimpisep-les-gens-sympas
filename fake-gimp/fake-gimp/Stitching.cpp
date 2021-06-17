#include <opencv2/opencv.hpp>
#include "opencv2/stitching.hpp"
#include "header.h"
using namespace std;
using namespace cv;

void LGS::Stitching()
{
	vector<Mat> sourceImages;

	Mat result;

	// Reading the images
	sourceImages.push_back(imread("S1.jpg"));
	sourceImages.push_back(imread("S2.jpg"));
	sourceImages.push_back(imread("S3.jpg"));
	sourceImages.push_back(imread("S4.jpg"));
	sourceImages.push_back(imread("S5.jpg"));





	Ptr<Stitcher> stitcher = Stitcher::create(Stitcher::PANORAMA);

	// Stitch all the images present in the image array
	Stitcher::Status status = stitcher->stitch(sourceImages, result);

	if (status != Stitcher::OK) // Check if images could not be stiched
	{
		cout << "Can't stitch images\n";
	}


	imwrite("panorama.jpg", result);
	namedWindow("stitched_image", WINDOW_AUTOSIZE);
	imshow("stitched_image", result);

	waitKey(0);
}
