#include "../Header.h"

int LGS::resize()
{
	string X_input;
	string Y_input;

	bool done = true;
	do {
		cout << "Please enter the scale factor along the horizontal axis X: ";
		cin >> X_input;


		int count;

		for (char i : X_input) {
			count = 0;
			if (isdigit(i) == 0) {
				if (ispunct(i) != 0) {
					count++;
					count > 1 ? done = false : done = true;
				}
				else {
					done = false;
				}
			}
		}
	} while (!done);

	done = true;
	do {
		cout << "Please enter the scale factor along the vertical axis Y: ";
		cin >> Y_input;

		int count;

		for (char i : Y_input) {
			count = 0;
			if (isdigit(i) == 0) {
				if (ispunct(i) != 0) {
					count++;
					count > 1 ? done = false : done = true;
				}
				else {
					done = false;
				}
			}
		}
	} while (!done);

	double retVal = stod(X_input);
	double retVal2 = stod(Y_input);

	cv::resize(image, image, cv::Size(), retVal, retVal2);

    std::cout << "LGS::resize has been executed !\n";

    return 0;
}