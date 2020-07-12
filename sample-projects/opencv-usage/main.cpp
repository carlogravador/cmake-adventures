#include <opencv2/opencv.hpp>

int main()
{
	cv::Mat image;
	image = cv::imread("sample.jpeg");
	cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);
	cv::imshow("Display Image", image);
	cv::waitKey(0);
}
