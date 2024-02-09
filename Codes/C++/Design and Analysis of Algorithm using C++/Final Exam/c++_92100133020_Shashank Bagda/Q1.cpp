// DAA - Final Exam
// Shashank Bagda - 92100133020
// Question 1

#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int input;

    cout<<"Enter the Number : ";
    cin>>input;

    for(int loop = 1; loop <= input; loop++)
    {
        if(loop == 1)
        {
            cout<<"SPRITEMAAZA, ";
        }
        else if(loop % 3 == 0 && loop % 5 == 0)
        {
            cout<<"SPRITEMAAZA, ";
        }
        else if(loop % 3 == 0)
        {
            cout<<"SPRITE, ";
        }
        else if(loop % 5 == 0)
        {
            cout<<"MAAZA, ";
        }
        else
        {

        }
    }

    return 0;
}