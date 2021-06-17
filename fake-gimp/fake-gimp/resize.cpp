#include "header.h"

void LGS::resize()
{

	Mat imgResize;

	string xInput;
	string yInput;

	//if fail to read the image
	if (image.empty())
	{
		cout << "Error loading the image" << endl;
	}

	bool done = true;
	do {
		cout << "enter the scale factor along the horizontal axis";
		cin >> xInput;

		int count = 0;

		for (int i = 0; i < xInput.length(); i++) {
			int count = 0;
			if (isdigit(xInput[i]) == 0) {
				if (ispunct(xInput[i]) != 0) {
					count++;
					count > 1 ? done = false : done = true;
				}
				else {
					done = false;
				}
			}
		}
	} while (done == false);

	done = true;
	do {
		cout << "enter the scale factor along the vertical axis";
		cin >> yInput;

		int count = 0;

		for (int i = 0; i < yInput.length(); i++) {
			int count = 0;
			if (isdigit(yInput[i]) == 0) {
				if (ispunct(yInput[i]) != 0) {
					count++;
					count > 1 ? done = false : done = true;
				}
				else {
					done = false;
				}
			}
		}
	} while (done == false);

	double retVal = stod(xInput.c_str());
	double retVal2 = stod(yInput.c_str());

	cv::resize(image, image, cv::Size(), retVal, retVal2);

    std::cout << "LGS::resize have been executed !\n";
}