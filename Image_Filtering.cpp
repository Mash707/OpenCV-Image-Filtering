#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>
#include<iostream>

using namespace cv;

void main()
{
	std::string path = "images/test.png";
	Mat img = imread(path);
	Mat imgGaussBlur,imgBoxFilter, imgDil,imgErode,imgMedian,imgfilter2d;
	Mat kernel = getStructuringElement(MORPH_RECT, Size(4, 4));
	Mat kernel2 = getStructuringElement(MORPH_RECT, Size(3, 3));
	int option;
	std::cout << "Image Filtering using OpenCV\nSelect an option\n";
	std::cout << "1.Gaussian Blur\n" << "2.Dilate\n" << "3.Erode\n" << "4.Median Blur\n" << "5.Filter2D\n";
	std::cin >> option;
	
	switch (option) {
		case 1:
			GaussianBlur(img, imgGaussBlur, Size(5, 5), 4, 4);
			imshow("Image Gaussian Blur", imgGaussBlur);
			break;
		case 2:
			dilate(img, imgDil, kernel);
			imshow("Image Dilate", imgDil);
			break;
		case 3:
			erode(img, imgErode, kernel);
			imshow("Image Erode", imgErode);
			break;
		case 4:
			medianBlur(img, imgMedian, (5, 5));
			imshow("Image Median Blur", imgMedian);
			break;
		case 5:
			filter2D(img, imgfilter2d, -1, kernel2, Point(-1, -1));
			imshow("Image Filter2D", imgfilter2d);
			break;
	}

	imshow("Image", img);
	waitKey(0);
}