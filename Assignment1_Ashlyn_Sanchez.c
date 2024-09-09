// Fracturing.c
// Author: Ashlyn Sanchez
// Class: COP 3223, Professor Parra

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Function for calculating Distance
double calculateDistance () {
    int x1 = 0;
    int y1 = 0;
    printf ("Please enter x,y coordinates for point 1 separeted by a space: ");
    scanf ("%d%d", &x1,&y1);
    printf ("Point #1 entered: x1 =  %d; y1 = %d\n", x1, y1);

    int x2 = 0;
    int y2 = 0;
    printf ("Please enter x,y coordinates for point 2 separated by a space: ");
    scanf ("%d%d", &x2,&y2);
    printf ("Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);
    
    double distance = 0;
    distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    return distance;
}

//Function for calculating Perimeter
double calculatePerimeter(){
    double radius = 0;
    radius = calculateDistance() / 2;
    //printf ("%lf\n", radius);

    double perimeter = 0; 
    perimeter = (2 * PI * radius);
    printf ("The perimeter of the city encompassed by your request is %lf\n", perimeter);
    
    double difficulty = 3.5;
    return difficulty;
}

// Function for calculating Area. First calculates radius usuing the return of calculateDistance
double calculateArea(){
    double radius = 0;
    radius = calculateDistance() /2;
    double area = 0;
    area = PI * pow(radius,2);
    printf ("The area of the city encompassed by your request is %lf\n", area);
    
    double difficulty = 2.0;
    return difficulty;
}

//Function for calculating Width, ie, the distance between points x1 and x2
double calculateWidth(){
    int x1 = 0;
    int y1 = 0;
    printf ("Please enter x,y coordinates for point 1 separeted by a space: ");
    scanf ("%d%d", &x1,&y1);
    printf ("Point #1 entered: x1 =  %d; y1 = %d\n", x1, y1);

    int x2 = 0;
    int y2 = 0;
    printf ("Please enter x,y coordinates for point 2 separated by a space: ");
    scanf ("%d%d", &x2,&y2);
    printf ("Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);
    
    double width = (x2-x1);
    printf ("The width of the city encompased by your request is %lf\n", width);
   
    double difficulty = 3.5;
    return difficulty;
}

// Function for calculating Height ie, the distance between points y1 and y2
double calculatHeight(){
    int x1 = 0;
    int y1 = 0;
    printf ("Please enter x,y coordinates for point 1 separeted by a space: ");
    scanf ("%d%d", &x1,&y1);
    printf ("Point #1 entered: x1 =  %d; y1 = %d\n", x1, y1);

    int x2 = 0;
    int y2 = 0;
    printf ("Please enter x,y coordinates for point 2 separated by a space: ");
    scanf ("%d%d", &x2,&y2);
    printf ("Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);
    
    double height = (y2-y1);
    printf ("The height of the city encompased by your request is %lf\n", height);
    
    double difficulty = 3.0;
    return difficulty;
}

// Main function calling previously built funcitons for calculating Distnance, Perimeter, Area, Width, and Height
int main (int argc, char** argv) {
    double distance = calculateDistance();
    printf ("The distance between the two points is %lf\n", distance);
    calculatePerimeter ();
    calculateArea ();
    calculateWidth ();
    calculatHeight ();
    return 0;
}