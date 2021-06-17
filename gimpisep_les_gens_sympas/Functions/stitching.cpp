#include <opencv2/opencv.hpp>
#include "../Header.h"
using namespace std;
using namespace cv;

int LGS::stitching()
{
    bool isDone = false;
    do {
        std::string path;
        std::cout << "Please, copy the exact path of the image file that you want to stitch to other: " << std::endl;
        std::cout << "If you are done, please enter '0'. " << std::endl;
        std::cin >> path;
        if (path == "0") {
            isDone = true;
        } else {
            addToImageArray(path);
            isDone = false;
        }
    } while (!isDone);

    Mat stitchedImage;

    Ptr<Stitcher> stitcher = Stitcher::create(Stitcher::PANORAMA);

    // Stitch all the images present in the image array
    Stitcher::Status status = stitcher->stitch(imageArray, stitchedImage);

    if (status != Stitcher::OK) // Check if images could not be stiched
    {
        cout << "Can't stitch images\n";
    }

    namedWindow("Stitched Image", WINDOW_AUTOSIZE);
    cout << "Click on the displayed image and press anything on the keybord to continue..." << endl;
    imshow("Stitched Image", stitchedImage);
    cv::waitKey(0);

    std::cout << "LGS::stitching have been executed !\n";

    // Ask user for saving this new stitched image
    bool choice = false;
    do {
        cout << "Do you want to save this new stitched image? (yes/no)" << endl;
        string answer;
        cin >> answer;
        if (answer == "yes") {
            cout << "Please enter the name file of your new stitched image..." << endl;
            string nameFile;
            cin >> nameFile;
            cout << "You are saving your new stitched image..." << endl;
            imwrite("../newData/" + nameFile + ".jpg", stitchedImage);
            cout << "You have saved your modified image successfully! You will see it when you will have quit the app."<< endl;
            choice = true;
        } else {
            cout << "You are about to avoid saving this new stitched image, are you sure ? (yes/no)" << endl;
            string confirmation;
            cin >> confirmation;
            if (confirmation == "yes") {
                cout << "You did not save this new stitched image..." << endl;
                choice = true;
            } else {
                choice = false;
            }
        }
    } while (!choice);

    //destroy all open windows
    destroyAllWindows();

    return 0;
}


