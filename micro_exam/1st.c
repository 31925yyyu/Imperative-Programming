#include <stdio.h>

// Create a program which prints the area of a square and a circle

#define PI 3.14

int main(){
    int length, radius;
    float squareArea, circleArea;
    printf("Please entre the value of length: ");
    scanf("%d", &length);
    printf("Please entre the value of radius: ");
    scanf("%d", &radius);
    squareArea = (float) length * length;
    circleArea = (float) PI * radius * radius;
    printf("The area of square is %.2f.\n", squareArea);
    printf("The area of circle is %.2f.\n", circleArea);

    return 0;
}