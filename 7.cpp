/*Write a function isVowel (char ch) that takes a character ch and returns true if it's a vowel
(a, e, i, o, u), false otherwise. Use this function in main to check if a user-entered character
is a vowel or consonant*/
#include<iostream>
using namespace std;
char isVowel(char ch)
{
    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        cout<<"The character '"<<ch<<"' is a vowel"<<endl;
    }
    else if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        cout<<"The character '"<<ch<<"' is a vowel"<<endl;
    }
    else if (ch>='a' && ch<='z')
    {
        cout<<"The character '"<<ch<<"' is a consonent"<<endl;
    }
    else if (ch>='A' && ch<='Z')
    {
        cout<<"The character '"<<ch<<"' is a consonent"<<endl;
    }
    else
    {
        cout<<"NOT A LETTER"<<endl;
    }
}
int main()
{
    char x;
    cout<<"Enter an alphabet : ";
    cin>>x;
    isVowel(x);
}
