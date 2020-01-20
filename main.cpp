#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

#include "simplestcolorbalance.h"
int main() {
//    cv::Mat im = cv::imread("/home/mad/Downloads/input.png", cv::IMREAD_GRAYSCALE);
//    cv::Mat result = simplestColorBalanceSingleChannel(im, 0.005 , 0.001, 1);
    cv::Mat im = cv::imread("/home/mad/Downloads/input.png");
    cv::Mat result = simplestColorBalance(im, 0.005 , 0.001, 1);
    cv::imshow("orig", im);
    cv::imshow("balanced", result);
    cv::waitKey(0);
    return 0;
}
