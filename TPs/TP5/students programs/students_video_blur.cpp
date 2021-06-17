
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char* argv[])
{
    //open the video file for reading
    ...

    // if not success, exit program
    ...



    //Define names of the window
    ...


    // Create a window with above names
    ...

    ... // read a new frame from video


        //Blur the frame with 5x5 kernel
        ...

        //show the frames in the created windows
        ...

        //wait for for 10 ms until any key is pressed.
        //If the 'Esc' key is pressed, break the while loop.
        //If the any other key is pressed, continue the loop
        //If any key is not pressed withing 10 ms, continue the loop
        ...

    return 0;

}
