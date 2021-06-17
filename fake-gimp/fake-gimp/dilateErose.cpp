#include "header.h"

void LGS::dilateErode(int dilationElem, int dilationSize, int dilatOrErod)
{
	int dilationType;

	if (dilationElem == 0) { dilationType = MORPH_RECT; }
	else if (dilationElem == 1) { dilationType = MORPH_CROSS; }
	else if (dilationElem == 2) { dilationType = MORPH_ELLIPSE; }

	Mat element = getStructuringElement(dilationType,
		Size(2 * dilationSize + 1, 2 * dilationSize + 1),
		Point(dilationSize, dilationSize));

	if(dilatOrErod == 0) dilate(image, image, element);
	else if(dilatOrErod == 1) erode(image, image, element);


	std::cout << "LGS::dilate have been executed !\n";
}


