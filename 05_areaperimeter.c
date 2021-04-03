//Program:Area and Perimeter of Circle, Square and Rectangle
//Date of creation: 18-03-2021
//Author: Aryan koul
#include <stdio.h>//preprocessor directive for standard input output
int main(){//int main means that are functon needs to return some integer value
int radiusofcircle, sideofsquare, lengthofrectangle, breadthofrectangle, areaofsquare, perimeterofsquare, areaofrectangle, perimeterofrectangle;//variable declaration of integer data type
float areaofcircle, perimeterofcircle;//variable declaration of float data type
scanf("%d %d %d %d", &radiusofcircle, &sideofsquare, &lengthofrectangle, &breadthofrectangle);
//from line 9 to 18 the values of variables are declared
areaofcircle=3.14*(radiusofcircle*radiusofcircle);
perimeterofcircle=2*3.14*(radiusofcircle);
areaofsquare=sideofsquare*sideofsquare;
perimeterofsquare=4*(sideofsquare);
areaofrectangle=lengthofrectangle*breadthofrectangle;
perimeterofrectangle=2*(lengthofrectangle+breadthofrectangle);
printf("Area of Circle=%f\n",areaofcircle);//printing the value of area of circle
printf("Circumfrence of Circle=%f\n",perimeterofcircle);//printing the value of circumfrence of circle
printf("Area of Square=%d\n",areaofsquare);//printing the value of area of square
printf("Perimeter of Square=%d\n",perimeterofsquare);//printing the value of perimeter of square
printf("Area of Rectangle=%d\n",areaofrectangle);//printing the value of area of rectangle
printf("Perimeter of Rectangle=%d\n",perimeterofrectangle);//printing the value of perimeter of rectangle
return 0;//return 0 means success
}