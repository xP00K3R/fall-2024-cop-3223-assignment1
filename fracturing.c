#include <stdio.h>
#include <math.h>
#define PI 3.14159
//Parker Pratt - UCFID: 5659606

//helper function to make this less dumb

//only calculate distance to prevent extra print statements
double onlyCalculateDistance(int x1, int x2, int y1, int y2){
    double distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    return distance;
}

//get x & y statements cuz we cant use arguments in the fractures (frustrating)
int getx1(){
    int x1=0;
    printf("enter x1: ");
    scanf("%d", &x1);
    return x1;
}
int getx2(){
    int x2=0;
    printf("enter x2: ");
    scanf("%d", &x2);
    return x2;
}
int gety1(){
    int y1=0;
    printf("enter y1: ");
    scanf("%d", &y1);
    return y1;
}
int gety2(){
    int y2=0;
    printf("enter y2: ");
    scanf("%d", &y2);
    return y2;
}

//distance
double calculateDistance(){
    //get x & y
    int x1 = getx1();
    int x2 = getx2();
    int y1 = gety1();
    int y2 = gety2();

    //print
    printf("Point #1 entered: x1 = %d; y1 = %d \n",x1,y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n",x2,y2);

    //initialize and calculate distance
    printf("The distance between the two points is %f \n", onlyCalculateDistance(x1,x2,y1,y2));
    return onlyCalculateDistance(x1,x2,y1,y2);
}
//perimeter
double calculatePerimeter(){

    //get x & y
    int x1 = getx1();
    int x2 = getx2();
    int y1 = gety1();
    int y2 = gety2();
    
    //print 
    printf("Point #1 entered: x1 = %d; y1 = %d \n",x1,y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n",x2,y2);

    //initialize and calculate perimiter
    printf("The perimiter of the city encompassed by your request is %f \n", (PI*onlyCalculateDistance(x1,x2,y1,y2)));

    //return statement of how difficult the function was 1-5
    return 4.9;
}
//area
double calculateArea(){

    //get x & y
    int x1 = getx1();
    int x2 = getx2();
    int y1 = gety1();
    int y2 = gety2();
    
    //print 
    printf("Point #1 entered: x1 = %d; y1 = %d \n",x1,y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n",x2,y2);

    //initialize and calculate Area
    printf("The area of the city encompassed by your request is %f \n", (.25*PI*pow(onlyCalculateDistance(x1,x2,y1,y2),2)));

    //return statement of how difficult the function was 1-5
    return 4.9;
}
//width
double calculateWidth(){

    //get x & y
    int x1 = getx1();
    int x2 = getx2();
    int y1 = gety1();
    int y2 = gety2();
    
    //print 
    printf("Point #1 entered: x1 = %d; y1 = %d \n",x1,y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n",x2,y2);

    //initialize and calculate perimiter (perimiter of 2 points is distance)
    printf("The width of the city encompassed by your request is %f \n", onlyCalculateDistance(x1,x2,y1,y2));

    //return statement of how difficult the function was 1-5
    return 4.9;
}
//height
double calculateHeight(){

    //get x & y
    int x1 = getx1();
    int x2 = getx2();
    int y1 = gety1();
    int y2 = gety2();
    
    //print 
    printf("Point #1 entered: x1 = %d; y1 = %d \n",x1,y1);
    printf("Point #2 entered: x2 = %d; y2 = %d \n",x2,y2);

    //initialize and calculate perimiter (perimiter of 2 points is distance)
    printf("The height of the city encompassed by your request is %f \n", onlyCalculateDistance(x1,x2,y1,y2));

    //return statement of how difficult the function was 1-5
    return 4.9;
}

//main
int main(int argc, char **argv){

    //run functions
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    
    //return for autograder
    return 0;
}