#include "../Header.h"

int LGS::contrast()
{
    float value;

    string userResponse;
    cout << "Please enter a contrast value [0.01 ; 3.0]" << endl;
    cin >> userResponse;
    //Checking if the input is a number
    std::istringstream iss (userResponse);
    iss >> value;
    if (iss.fail()) {
        // something wrong happened
        std::cerr << "This is not a number as we expect!\n";
        iss.clear();
        contrast();
    }

    /*< Simple contrast control */
    if (value > 3.0) {
        value = 3.0;
    }
    else if (value <= 0.01) {
        value = 0.01;
    }

    image.convertTo(image, -1, value);

    std::cout << "LGS::contrast has been executed !\n";
    return 0;
}