/*Write a function isPositive (int num) that takes an integer num and returns true if it's
positive, false otherwise. Use this function in main to check if a user-entered number is
positive, negative, or zero*/
#include<iostream>
using namespace std;
int isPositive(int num)
{
    if(num>0)
    {
        cout<<num<<" is a positive number";
    }
    else if(num<0)
    {
        cout<<num<<" is a negative number";
    }
    else
    {
        cout<<num;
    }
}
int main()
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    isPositive(x);
}
