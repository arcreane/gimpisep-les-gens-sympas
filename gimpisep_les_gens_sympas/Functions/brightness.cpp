#include "../Header.h"

int LGS::brightness()
{
    int value;

    string userResponse;
    cout << "Please enter a brightness value [-100 ; +100]" << endl;
    cin >> userResponse;
    //Checking if the input is a number
    std::istringstream iss (userResponse);
    iss >> value;
    if (iss.fail()) {
        // something wrong happened
        std::cerr << "This is not a number as we expect!\n";
        iss.clear();
        brightness();
    }

    /*< Simple brightness control */
    if (value > 100) {
        value = 100;
    }
    else if (value < -100) {
        value = -100;
    }

    image.convertTo(image, -1, 1, value);
    std::cout << "LGS::brightness has been executed !\n";

    return 0;
}