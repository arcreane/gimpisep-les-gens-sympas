#include <opencv2/opencv.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main( int argc, char** argv )
{
                           /*< Simple contrast control */
                                     /*< Simple brightness control */
    //reading the image and creating a new image matrix
   
    
    
    
    //asking for alpha [1.0-3.0] and beta values [0-100]
    
    
    for( .... ) {
        for( .... ) {
            for( .... ) {
                new_image.at<Vec3b>(y,x)[c] =
                  saturate_cast<uchar>( alpha*( image.at<Vec3b>(y,x)[c] ) + beta );
           }
        }
    }
    
    //create windows
    
    //show original and new image
 
    
    
    waitKey();
    return 0;
}
