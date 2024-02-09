// DAA - Final Exam
// Shashank Bagda - 92100133020
// Question 5

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int value;
    int B[5] = {};
    int I[5] = {};
    int N[5] = {};
    int G[5] = {};
    int O[5] = {};

    cout<<"B I N G O"<<endl;
    

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <=5; j++)
        {
            cout<<"Enter the value for Row "<<i<<" and Column "<<j<<": ";
            cin>>value;

            if(j == 1 && (value >= 1 && value <= 15))
            {
                for(int i=0; i<5; i++)
                {
                    if(B[i] != value)
                    {
                        B[i-1] = value;
                    }
                }
            }
            else if(j == 2 && (value >= 16 && value <= 30))
            {
                for(int i=0; i<5; i++)
                {
                    if(I[i] != value)
                    {
                        I[i-1] = value;
                    }
                }
            }
            else if(j == 3 && (value >= 31 && value <= 45))
            {
                for(int i=0; i<5; i++)
                {
                    if(N[i] != value)
                    {
                        N[i-1] = value;
                    }
                }
            }
            else if(j == 4 && (value >= 46 && value <= 60))
            {
                for(int i=0; i<5; i++)
                {
                    if(G[i] != value)
                    {
                        G[i-1] = value;
                    }
                }
            }
            else if(j == 5 && (value >= 61 && value <= 75))
            {
                for(int i=0; i<5; i++)
                {
                    if(O[i] != value)
                    {
                        O[i-1] = value;
                    }
                }
            }
            else
            {
                cout<<"Enter Valid Range Number.";
            }
        }
    }

    return 0;
}