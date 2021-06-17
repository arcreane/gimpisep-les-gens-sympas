#include "header.h"

void LGS::cannyThreshold(int lowThreshold, int maxLowThreshold, int kernelSize)
{
	Mat srcGray, detectedEdges, cannyDst;
	cvtColor(image, srcGray, COLOR_BGR2GRAY);

	blur(srcGray, detectedEdges, Size(3, 3));
	Canny(detectedEdges, detectedEdges, lowThreshold, maxLowThreshold, kernelSize);

	cannyDst = Scalar::all(0);

	image.copyTo(cannyDst, detectedEdges);
	image = cannyDst;

	std::cout << "LGS::cannyThreshold have been executed !\n";
}


