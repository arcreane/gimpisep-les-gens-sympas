//#include "opencv2/highgui/highgui.hpp"
//#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char* argv[])
{
    // open the video file for reading
    

    // if not success, exit program
    
    
     //define original and rotate window name
    
    

    int iAngle = 180;
    
    //create track bar
    

    while (true)
    {
        

 // read a new frame from video
        

 //if not success, break loop
        if (!bSuccess)
 {
                       cout << "Cannot read the frame from video file" << endl;
                       break;
        }

        //show the two video
       
 //get the affine transformation matrix 2D

 // Rotate the image using warpAffine
        
 //show the rotate frame



 //wait for 'esc' key press for 30 ms. If 'esc' key is pressed, break loop
  
    }

    return 0;
}
