#include "header.h"

void LGS::resize()
{

	Mat img_Resize;

	string X_input;
	string Y_input;

	//if fail to read the image
	if (image.empty())
	{
		cout << "Error loading the image" << endl;
	}

	bool done = true;
	do {
		cout << "enter the scale factor along the horizontal axis";
		cin >> X_input;

		int count = 0;

		for (int i = 0; i < X_input.length(); i++) {
			int count = 0;
			if (isdigit(X_input[i]) == 0) {
				if (ispunct(X_input[i]) != 0) {
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
		cin >> Y_input;

		int count = 0;

		for (int i = 0; i < Y_input.length(); i++) {
			int count = 0;
			if (isdigit(Y_input[i]) == 0) {
				if (ispunct(Y_input[i]) != 0) {
					count++;
					count > 1 ? done = false : done = true;
				}
				else {
					done = false;
				}
			}
		}
	} while (done == false);

	double retVal = stod(X_input.c_str());
	double retVal2 = stod(Y_input.c_str());

	cv::resize(image, image, cv::Size(), retVal, retVal2);

    std::cout << "LGS::resize have been executed !\n";
}