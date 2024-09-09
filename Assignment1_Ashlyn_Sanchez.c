// Assignment 1
// Author: Ashlyn Sanchez
// Class: COP 3223, Professor Parra

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Function for calculating Distance
double calculateDistance () {
    // Initiating variables for point 1 
    int x1 = 0;
    int y1 = 0;
    // Print statement asking for user input for Point 1
    printf ("Please enter x,y coordinates for point 1 separeted by a space, then press enter: ");
    // Scan statement to accept user input for Point 1
    scanf ("%d%d", &x1,&y1);
    // Print statement to print input from user for point 1
    printf ("Point #1 entered: x1 =  %d; y1 = %d\n", x1, y1);

    // Initiating variables for Point 2
    int x2 = 0;
    int y2 = 0;
    // Print statement asking user for input for Point 2
    printf ("Please enter x,y coordinates for point 2 separated by a space, then press enter: ");
    // Scan statement to accept user input for Point 2
    scanf ("%d%d", &x2,&y2);
    // Print statement to print input from user for Point 2
    printf ("Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);
    // Initiating Distance Variable
    double distance = 0;
    // Calculation for distance using Pythagorean Theorem
    distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    // Function returns the value for the distance variable
    return distance;
}

//Function for calculating Perimeter
double calculatePerimeter(){
    // Initiating radius variable to be used in calculations
    double radius = 0;
    // Calculation of radius using the value for distance
    radius = calculateDistance() / 2;
    //printf ("%lf\n", radius);

    // Initiating perimeter variable
    double perimeter = 0; 
    // Perimeter calulcation 2PI(R)
    perimeter = (2 * PI * radius);
    // Print Calculation for Perimeter
    printf ("The perimeter of the city encompassed by your request is %lf\n", perimeter);
    
    double difficulty = 3.5;
    return difficulty;
}

// Function for calculating Area. First calculates radius usuing the return of calculateDistance
double calculateArea(){
    // Initiating radius variable
    double radius = 0;
    // Calculating radius using Distance
    radius = calculateDistance() /2;
    // Initiating area variable
    double area = 0;
    // Calculation of area (PI)R^2
    area = PI * pow(radius,2);
    printf ("The area of the city encompassed by your request is %lf\n", area);
    
    double difficulty = 2.0;
    return difficulty;
}

//Function for calculating Width, ie, the distance between points x1 and x2
double calculateWidth(){
    int x1 = 0;
    int y1 = 0;
    printf ("Please enter x,y coordinates for point 1 separeted by a space, then press enter: ");
    scanf ("%d%d", &x1,&y1);
    printf ("Point #1 entered: x1 =  %d; y1 = %d\n", x1, y1);

    int x2 = 0;
    int y2 = 0;
    printf ("Please enter x,y coordinates for point 2 separated by a space, then press enter: ");
    scanf ("%d%d", &x2,&y2);
    printf ("Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);
    
    // Calculating width with assumption this is the distance between x coordinates
    double width = (x2-x1);
    printf ("The width of the city encompased by your request is %lf\n", width);
   
    double difficulty = 3.5;
    return difficulty;
}

// Function for calculating Height ie, the distance between points y1 and y2
double calculatHeight(){
    int x1 = 0;
    int y1 = 0;
    printf ("Please enter x,y coordinates for point 1 separeted by a space, then press enter: ");
    scanf ("%d%d", &x1,&y1);
    printf ("Point #1 entered: x1 =  %d; y1 = %d\n", x1, y1);

    int x2 = 0;
    int y2 = 0;
    printf ("Please enter x,y coordinates for point 2 separated by a space, then press enter: ");
    scanf ("%d%d", &x2,&y2);
    printf ("Point #2 entered: x2 = %d; y2 = %d\n", x2, y2);
    
    // Calculating height with the assumption that this is the distance between y coordinates
    double height = (y2-y1);
    printf ("The height of the city encompased by your request is %lf\n", height);
    
    double difficulty = 3.0;
    return difficulty;
}

// Main function calling previously built funcitons for calculating Distance, Perimeter, Area, Width, and Height
int main (int argc, char** argv) {
    double distance = calculateDistance();
    printf ("The distance between the two points is %lf\n", distance);
    calculatePerimeter ();
    calculateArea ();
    calculateWidth ();
    calculatHeight ();
    return 0;
}