//Code demo Group 05

//Bao g?m th? vi?n
#include<opencv2/opencv.hpp>
#include<iostream>
//Namespace vô hi?u hóa vi?c s? d?ng cv::function();
using namespace std;
using namespace cv;
int main() {

        
            Mat image = imread("C:\\Users\\84395\\Music\\MEmu Music\\XoaypictureOpenCV\\ptit.jpg");
        
        
            double angle = 45;
        

        
            Point2f center((image.cols - 1) / 2.0, (image.rows - 1) / 2.0);
        
            
            
            Mat rotation_matix = getRotationMatrix2D(center, angle, 1.0);
        

            
            
            
            Mat rotated_image;
        
            
            warpAffine(image, rotated_image, rotation_matix, image.size());
        
            imshow("Rotated image", rotated_image);
        
           
            
            waitKey(0);
        
            
            imwrite("rotated_im.jpg", rotated_image);
        

            
            return 0;
        
    }
