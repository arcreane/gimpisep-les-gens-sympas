#pragma once
#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

class LGS
{
	public:
		cv::Mat image;

		void getImageFromPath(string path) {
			cv::Mat img = cv::imread(path);
			image = img;
		};

		void showImage() {
			cv::imshow("IMAGE", image);
			cv::waitKey(0);
		};

		void dilate();
		void resize();
		void brightness(int val);
		void faceDetection(double scale);
};