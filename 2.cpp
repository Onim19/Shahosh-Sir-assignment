/*Write a function isEven (int num) that takes an integer num as input and
returns true if num is even, false otherwise. In your main function, ask the user for a
number and use the isEven function to determine and display whether it's even or odd.*/
#include<iostream>
using namespace std;
int isEven(int num)
{
    int rem=num%2;
    return rem;
}
int main()
{
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    if(isEven(a)==0)
    {
        cout<<a<<" is an even number ";
    }
    else
    {
        cout<<a<<" is a odd number ";
    }
}
