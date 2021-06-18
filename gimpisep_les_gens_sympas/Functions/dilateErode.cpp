#include "../Header.h"

int LGS::dilateErode()
{
    //Choosing between dilation and erosion
    string dilatOrErod;
    cout << "You can or dilate or erode your image. Please enter :  " << endl;
    cout << "   '1' if you want to dilate it; " << endl;
    cout << "   '2' if you want to erode it. " << endl;
    cin >> dilatOrErod;
    // Checking if this input is valid
    if (dilatOrErod != "1" && dilatOrErod != "2") {
        cout << "Your input is incorrect, please try again..." << endl;
        dilateErode();
    }

    //Choosing the shape of the modif
    string chosenShape;
    cout << "For the shape of your modification, please enter :  " << endl;
    cout << "   '1' if you want it as a rectangle; " << endl;
    cout << "   '2' if you want it as a cross; " << endl;
    cout << "   '3' if you want it as a ellipse... " << endl;
    cin >> chosenShape;
    // Checking if this input is valid
    if (chosenShape != "1" && chosenShape != "2" && chosenShape != "3") {
        cout << "Your input is incorrect, please try again..." << endl;
        dilateErode();
    }
    int shape = stoi(chosenShape);
    if (shape == 0) { shape = MORPH_RECT; }
    else if (shape == 1) { shape = MORPH_CROSS; }
    else if (shape == 2) { shape = MORPH_ELLIPSE; }

    //Choosing how many times you want to apply your modification
    int dilationSize = 0;
    bool isCorrect = false;
    do {
        string userResponse;
        cout << "Please enter how many times you want to apply your modification (enter '0' to cancel): " << endl;
        cin >> userResponse;
        //Checking if the input is a number
        std::istringstream iss(userResponse);
        iss >> dilationSize;
        if (iss.fail()) {
            // something wrong happened
            std::cerr << "This is not a number as we expect!\n";
            iss.clear();
            isCorrect = false;
        } else if (dilationSize == 0) {
            // user choose to cancel
            displayMenu();
        } else {
            isCorrect = true;
        }
    } while (!isCorrect);

    //Creating the kernel with the input parameters
	Mat kernel = getStructuringElement(shape,
		Size(2 * dilationSize + 1, 2 * dilationSize + 1),
		Point(dilationSize, dilationSize));

	if(stoi(dilatOrErod) == 1) dilate(image, image, kernel);
	else if(stoi(dilatOrErod) == 2) erode(image, image, kernel);

	std::cout << "LGS::dilate has been executed !\n";
	return 0;
}


