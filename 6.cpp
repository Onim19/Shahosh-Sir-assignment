/*Create a function getAverage (int num1, int num2, int num3) that calculates the average of
three integers. Call this function in main with user-provided numbers and print the average.*/
#include<iostream>
using namespace std;
void getAverage(int num1,int num2,int num3)
{
    float average=(num1+num2+num3)/3.00;
    cout<<"Average : "<<average;
}
int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers : ";
    cin>>a>>b>>c;
    getAverage(a,b,c);
}

