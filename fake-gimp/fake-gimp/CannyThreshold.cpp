#include "header.h"

void LGS::CannyThreshold(int lowThreshold, int max_lowThreshold, int kernel_size)
{
	Mat src_gray, detected_edges, canny_dst;
	cvtColor(image, src_gray, COLOR_BGR2GRAY);

	blur(src_gray, detected_edges, Size(3, 3));
	Canny(detected_edges, detected_edges, lowThreshold, max_lowThreshold, kernel_size);

	canny_dst = Scalar::all(0);

	image.copyTo(canny_dst, detected_edges);
	image = canny_dst;

	std::cout << "LGS::CannyThreshold have been executed !\n";
}


