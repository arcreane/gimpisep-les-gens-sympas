
#include <opencv2/opencv.hpp>
#include <vector>
#include <iostream>
#include <math.h>

using namespace cv;
using namespace std;

/*This program shows how highgui enables us to take mouse inputs.
In this code we use mouse input to draw a circle on an image.
The mouse is dragged from the center to one of the points on the
circumference. 'c' can be pressed to remove the drawn circles. */

// Points to store the center of the circle and a point on the
//circumference

......

// Source image
....

/*drawCircle the callback function is called when there is a mouse event
like left click ( indicated by EVENT_LBUTTONDOWN ). The coordinates
relative to the namedWindow is captured by this function in the
variables (x,y). The function records the points of the circle's center
and a point on the circumference, hence allowing us to draw the desired
circle on the image.*/

// function which will be called on mouse input
void drawCircle(.....)
{
  // Action to be taken when left mouse button is pressed
  if( ...... )
  {
    // Mark the center
  	center = Point(x,y);
  	// define the circle
  	....

  }
  // Action to be taken when left mouse button is released
  else if( .....)
  {

  	circumference = Point(x,y);
  	// Calculate radius of the circle
  	float radius = sqrt(pow(center.x-circumference.x,2)+
        pow(center.y-circumference.y,2));
  	// Draw the circle
  	.....
  }
}
int main()
{
.....
  // Make a clone image, will be useful to clear the drawing
....

  // highgui function called when mouse events occur
....
  int k=0;
  // loop until escape character is pressed
  while(k!=27)
  {
  	imshow("Window", source );
  	putText(source,"Choose center, and drag, Press ESC to exit and c to clear" ,Point(10,30), FONT_HERSHEY_SIMPLEX, 0.7, Scalar(255,255,255), 2 );
  	k= waitKey(20) & 0xFF;
  	if(k== 99)
  		// Another way of cloning
  		dummy.copyTo(source);
  }
  return 0;
}
