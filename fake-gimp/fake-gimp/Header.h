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

		void resize();
		void brightness(int val);
		void dilateErode(int dilation_elem, int dilation_size, int dilatOrErod);
		void CannyThreshold(int lowThreshold, int max_lowThreshold, int kernel_size);
		void Stitching();
};