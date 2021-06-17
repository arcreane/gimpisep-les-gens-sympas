#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
    //open the video file for reading
    

    // if not success, exit program
    
    //Defining window names for above images
    

    //Create and open windows for above images
   

    while (true)
    {
         // read a new frame from video

         //Breaking the while loop at the end of the video
        if (bSuccess == false)
        {
            cout << "Found the end of the video" << endl;
            break;
        }

       //increase the contrast by 2

         //increase the contrast by 4

        //decrease the contrast by 0.5

         //decrease the contrast by 0.25

        //Show above images inside the created windows.
        

        //wait for for 10 ms until any key is pressed.
        //If the 'Esc' key is pressed, break the while loop.
        //If the any other key is pressed, continue the loop
        //If any key is not pressed withing 10 ms, continue the loop
        if (waitKey(10) == 27)
        {
            cout << "Esc key is pressed by user. Stoppig the video" << endl;
            break;
        }
    }

    return 0;
}
