#include "header.h"

void LGS::dilateErode(int dilation_elem, int dilation_size, int dilatOrErod)
{
	int dilation_type;

	if (dilation_elem == 0) { dilation_type = MORPH_RECT; }
	else if (dilation_elem == 1) { dilation_type = MORPH_CROSS; }
	else if (dilation_elem == 2) { dilation_type = MORPH_ELLIPSE; }

	Mat element = getStructuringElement(dilation_type,
		Size(2 * dilation_size + 1, 2 * dilation_size + 1),
		Point(dilation_size, dilation_size));

	if(dilatOrErod == 0) dilate(image, image, element);
	else if(dilatOrErod == 1) erode(image, image, element);


	std::cout << "LGS::dilate have been executed !\n";
}


