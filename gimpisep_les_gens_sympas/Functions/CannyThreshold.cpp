#include "../Header.h"

int LGS::cannyThreshold()
{
    double lowThreshold;
    double maxLowThreshold;
    bool isCorrect = false;
    do {
        string userResponse;
        cout << "Please enter the low value of the threshold (enter '0' to cancel): " << endl;
        cin >> userResponse;
        //Checking if the input is a number
        std::istringstream iss(userResponse);
        iss >> lowThreshold;
        if (iss.fail()) {
            // something wrong happened
            std::cerr << "This is not a number as we expect!\n";
            iss.clear();
            isCorrect = false;
        } else if (lowThreshold == 0) {
            // user choose to cancel
            displayMenu();
        }

        cout << "Please enter the high value of the threshold (enter '0' to cancel): " << endl;
        cin >> userResponse;
        //Checking if the input is a number
        std::istringstream iss2(userResponse);
        iss2 >> maxLowThreshold;
        if (iss2.fail()) {
            // something wrong happened
            std::cerr << "This is not a number as we expect!\n";
            iss2.clear();
            isCorrect = false;
        } else if (lowThreshold == 0) {
            // user choose to cancel
            displayMenu();
        } else {
            isCorrect = true;
        }
    } while (!isCorrect);

    //Choosing the kernel size
    int kernelSize;
    do {
        string userResponse;
        cout << "Please enter your kernel size (enter '0' to cancel). " << endl;
        cout << "Note that it must be a positive odd number: " << endl;
        cin >> userResponse;
        //Checking if the input is a number
        std::istringstream iss(userResponse);
        iss >> kernelSize;
        if (iss.fail()) {
            // something wrong happened
            std::cerr << "This is not a number as we expect!\n";
            iss.clear();
            isCorrect = false;
        } else if (lowThreshold == 0) {
            // user choose to cancel
            displayMenu();
        } if (kernelSize > 0 && kernelSize % 2 != 0) {
            isCorrect = true;
        } else {
            cout << "This is not an odd number ! Please try again..." << endl;
            isCorrect = false;
        }
    } while (!isCorrect);

    Mat srcGray, detectedEdges, cannyDst;

    // Change the image to shades of grey
    cvtColor(image, srcGray, COLOR_BGR2GRAY);

    //Blur this new grey image to make the edges more visible
    blur(srcGray, detectedEdges, Size(3, 3));

    //Apply the openCV canny function
    cv::Canny(detectedEdges, detectedEdges, lowThreshold, maxLowThreshold, kernelSize);

    cannyDst = Scalar::all(0);

    image.copyTo(cannyDst, detectedEdges);
    image = cannyDst;

	std::cout << "LGS::CannyThreshold has been executed !\n";
	return 0;
}


