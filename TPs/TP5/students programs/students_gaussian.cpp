#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
    // Read the image file
    ...

    // Check for failure
    ....

    //Blur the image with 3x3 Gaussian kernel
    ...
    //Blur the image with 5x5 Gaussian kernel
    ...

    //Define names of the windows
    ...

    // Create windows with above names
    ...

    // Show our images inside the created windows.
    ...

    ...// Wait for any keystroke in the window

    ... //destroy all opened windows

    
}
