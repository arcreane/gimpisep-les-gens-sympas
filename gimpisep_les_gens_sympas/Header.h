#pragma once
#include <iostream>
#include <opencv2/opencv.hpp>
#include <cctype>
using namespace std;
using namespace cv;

class LGS
{
	public:

        cv::Mat image;

		int getImageFromPath(const string& path) {
            // Read the image file
            Mat source(imread("../ImagesTest/" + path, IMREAD_COLOR));
            // Check for failure
            if(source.empty()) {
                cout << "Could not find the proper file. Please check and try again." << endl;
                return -1;
            }
            image = source;
            displayMenu();
			return 0;
		};

		int showImage() {
            namedWindow("Your current image", WINDOW_AUTOSIZE);
            cout << "Click on the displayed image and press anything on the keybord to continue..." << endl;
			cv::imshow("Your current image", image);
			cv::waitKey(0);
			return 0;
		};

		void displayMenu() {
		    int menuResponse = 0;
		    string userResponse;
		    cout << "\n What would you like to modify on your image ? " << endl;
		    cout << "Enter '1' if you want to modify your image size. " << endl;
            cout << "Enter '2' if you want to modify your image brightness. " << endl;
            cout << "Enter '3' if you want to modify your image contrast. " << endl;
            cout << "Enter '4' if you want to dilate or erode your image. " << endl;
            cout << "Enter '5' if you want to cannyThreshold your image. " << endl;
            cout << "Enter '6' if you want to use the face detection function on your image. " << endl;
            cout << "Enter '7' if you want to use the stitching function. " << endl;
            cout << "Enter '99' if you want to save your modified image. " << endl;
            cout << "Enter '100' if you want to see what your current modified image looks like. " << endl;
            cout << "Enter '101' if you want to quit. " << endl;

            cin >> userResponse;

            //Checking if the input is a number
            std::istringstream iss (userResponse);
            iss >> menuResponse;
            if (iss.fail()) {
                // something wrong happened
                std::cerr << "This is not a number as we expect!\n";
                iss.clear();
                displayMenu();
            }

            cin.clear();
            goToFunction(menuResponse);
		}

		void goToFunction(int response) {
            switch(response) {
                case 0:
                    displayMenu();
                case 1:
                    goToFunction(resize());
                    break;
                case 2:
                    goToFunction(brightness());
                    break;
                case 3:
                    goToFunction(contrast());
                    break;
                case 4:
                    goToFunction(dilateErode());
                    break;
                case 5:
                    goToFunction(cannyThreshold());
                    break;
                case 6:
                    goToFunction(faceDetection());
                    break;
                case 7:
                    goToFunction(stitching());
                    break;
                case 99:
                    goToFunction(saveNewImage());
                    break;
                case 100:
                    goToFunction(showImage());
                    break;
                case 101:
                    quitFunction();
                    break;
                default:
                    cout << "Something wrong happened... Please try again." << endl;
                    displayMenu();
                    break;
            }
		};

        int saveNewImage() const {
            cout << "Please enter the name file of your new image..." << endl;
            string nameFile;
            cin >> nameFile;
            cout << "You are saving your modified image..." << endl;
            cv::Mat newImage = image;
            imwrite("../newData/" + nameFile + ".jpg", newImage);
            cout << "You have saved your modified image successfully! You will see it when you will have quit the app." << endl;
            return 0;
        }

		static void quitFunction() {
		    cout << "You are shutting down the app... See you later!";
            exit(-1);
		}

		int resize();
		int brightness();
		int contrast();
		int dilateErode();
		int cannyThreshold();
		int faceDetection();
		int stitching();

		// For the stitching function
        vector<Mat> imageArray;
        int addToImageArray(const string& path) {
            // Read the image file
            Mat source(imread("../ImagesTest/" + path, IMREAD_COLOR));
            // Check for failure
            if(source.empty()) {
                cout << "Could not find the proper file. Please check and try again." << endl;
                return -1;
            }
            imageArray.push_back(source);
            return 0;
        }
};