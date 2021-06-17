#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace std;
using namespace cv;

//create your callback function to have left, right and middle mouse clicks and mouse movements with its coordinates
void CallBackFunc(................)
{
     if  ( ... )
     {
          cout << "Left button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;
     }
     else if  ( ... )
     {
          cout << "Right button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;
     }
     else if  ( ... )
     {
          cout << "Middle button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;
     }
     else if ( ... )
     {
          cout << "Mouse move over the window - position (" << x << ", " << y << ")" << endl;

     }
}

int main(int argc, char** argv)
{
     // Read image from file
     ...

     //if fail to read the image
     ...

     //Create a window
     ...

     //set the callback function for any mouse event
     ...

     //show the image
     ...

     // Wait until user press some key
     waitKey(0);

     return 0;

}
