#include <opencv2/opencv.hpp>

// Define our callback which we will install for
// mouse events
//
....

// define the box
...

bool drawing_box = false;


// A little subroutine to draw a box onto an image

void draw_box( cv::Mat& img, cv::Rect box ) {
  cv::rectangle(
    .....

       /* red */
  );
}
void help(char** argv) {
  std::cout << "Program for using a mouse to draw boxes on the screen"
     << "\nCall:\n" << argv[0] <<
    "\n\nshows how to use a mouse to draw regions in an image. Esc to quit\n" << std::endl;
}
int main( int argc, char** argv ) {
  help(argv);

  box = cv::Rect(-1,-1,0,0);
  cv::Mat image(200, 200, CV_8UC3), temp;
  image.copyTo(temp);
  box   = cv::Rect(-1,-1,0,0);
  image = cv::Scalar::all(0);
  cv::namedWindow( "Box Example" );
 // Here is the crucial moment where we actually install
 // the callback. Note that we set the value of 'params' to
 // be the image we are working with so that the callback
 // will have the image to edit.
 //
....


 // The main program loop. Here we copy the working image
 // to the temp image, and if the user is drawing, then
 // put the currently contemplated box onto that temp image.
 // Display the temp image, and wait 15ms for a keystroke,
 // then repeat.
 //
 for(;;) {
    image.copyTo(temp);
    if( drawing_box ) draw_box( temp, box );
    cv::imshow( "Box Example", temp );
    if( cv::waitKey( 15 ) == 27 ) break;
  }
  return 0;
}

// This is our mouse callback. If the user
// presses the left button, we start a box.
// When the user releases that button, then we
// add the box to the current image. When the
// mouse is dragged (with the button down) we
// resize the box.
//
void my_mouse_callback(
......   )
{
  cv::Mat& image = *(cv::Mat*) param;
  switch( event ) {
    case cv::EVENT_MOUSEMOVE: {
      if( drawing_box ) {
        box.width  = x-box.x;
        box.height = y-box.y;
      }
    }
    break;
 case ....... {
      drawing_box = true;
      box = cv::Rect( x, y, 0, 0 );
    }
    break;
    case cv::EVENT_LBUTTONUP: {
      drawing_box = false;
      if( box.width < 0  ) {
        .....

      }
      if( box.height < 0 ) {
        ....
        
      }
      draw_box( image, box );
    }
    break;
  }

}
