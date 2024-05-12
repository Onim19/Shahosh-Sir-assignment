/*Create a function calculateArea (double radius) that calculates the area of a circle given its
radius (PI can be assumed as a constant). Call this function from main with a user-provided
radius and print the area.*/
#include<iostream>
using namespace std;
double calculateArea(double radius)
{
    double area=3.1416*radius*radius;
    return area;
}
int main()
{
    double r;
    cout<<"Enter the radius of circle : ";
    cin>>r;
    cout<<"The radius of the circle : "<<calculateArea(r)<<endl;
    return 2441139;
}

