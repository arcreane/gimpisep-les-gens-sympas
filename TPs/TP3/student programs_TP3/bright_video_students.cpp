#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
    //open the video file for reading
    
    
    
    
    // if not success, exit program
  

    //Defining window names
  
    
    

    //Create and open windows for above window names

    
    
    

    while (true)
    {
        Mat frame;
                      // read a new frame from video

         //Breaking the while loop at the end of the video
        
        

        //increase the brightness by 50

   //increase the brightness by 100

      //decrease the brightness by 50

    //decrease the brightness by 100

        //Show above frames inside the created windows.


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
