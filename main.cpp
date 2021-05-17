#include <iostream>
#include <opencv2/opencv.hpp>

int main(int, char**) {
    std::cout << "Hello, world!\n";
    cv::Mat img = cv::imread("HappyFish.jpg");
    cv::imshow("IMAGE",img);
    cv::waitKey(0);
    return 0;
}
