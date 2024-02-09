// Completed 

#include <bits/stdc++.h>
using namespace std;


int main()
{
	int arr[] = {2,1,3,9,6,8,7};
	
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<"The size of Array is : "<<size<<endl;
	
	cout<<"The Input Array is : ";
	for (int i = 0; i < size; i++)
	{
	    cout << arr[i] << " ";
	}
    cout << endl;
    
    // Sorting	
	for (int i = 0; i < size; i++)
	{
	    int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
	}
	
	cout<<"The Output Array is : ";
	for (int i = 0; i < size; i++)
	{
	    cout << arr[i] << " ";
	}
    cout << endl;
	
	return 0;
}