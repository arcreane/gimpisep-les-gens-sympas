#include "header.h"

void LGS::stitching()
{
	Mat result;


	Ptr<Stitcher> stitcher = Stitcher::create(Stitcher::PANORAMA);

	// Stitch all the images present in the image array
	Stitcher::Status status = stitcher->stitch(image, result);

	if (status != Stitcher::OK) // Check if images could not be stiched
	{
		cout << "Can't stitch images\n";
	}

	std::cout << "LGS::stitching have been executed !\n";
}
