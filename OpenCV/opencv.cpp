#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui/highgui.hpp"
using namespace cv;



int main()
{
    //이미지 파일을 불러와 그레이 이미지로 변환한다.  

    int a=-20;

    Mat input_gray_image = imread("C:\\Users\\User\\Desktop\\jochi_hadong\\jochi_hadong\\img_hadong_new\\invako_cctv_01-20210423-135324-145324_004771.png.", IMREAD_GRAYSCALE);

    //namedWindow("이진화된 이미지_G_1", WINDOW_AUTOSIZE);

    Mat result_binary_image_G_1;

    for (int i = 0; i < 5; i++) {

        adaptiveThreshold(input_gray_image, result_binary_image_G_1, 255, CV_ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY, 999, a);

        a += 10;
    }


    //imshow("이진화된 이미지_G_1", result_binary_image_G_1);

    imwrite("C:\\Users\\User\\Desktop\\jochi_hadong-AT\\G_3_3\\invako_cctv_01-20210423-135324-145324_005491_2499_-20.png", result_binary_image_G_1);


    while (cvWaitKey(0) < 0);

}