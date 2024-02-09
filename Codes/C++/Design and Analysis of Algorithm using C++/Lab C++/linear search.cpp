// Completed

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int size, value;
    
    cout<<"Enter the size of array : ";
    cin>>size;
    cout<<"Enter the value : ";
    cin>>value;

    int arr[size] = {};

    for(int i=0; i<size; i++)
    {
        cout<<"Enter the value of "<< i <<" index :";
        cin>>arr[i];
    }

    // cout<<"The array is : ";
    // for(int i=0; i<size; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    for(int i=0; i<size; i++)
    {
        if(value == arr[i])
        {
            cout<<"Match Found at index "<<i;
        }
        else
        {
            cout<<"No Match Found";
        }
    }
	return 0;
}