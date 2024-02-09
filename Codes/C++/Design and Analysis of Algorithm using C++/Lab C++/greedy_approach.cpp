#include <bits/stdc++.h>
using namespace std;

struct job
{
	int job_ID, job_Profit;
};

int main()
{
	int index, max, temp;
	cout<<"Enter Total Number of Job : ";
	cin>>index;
	cout<<endl;
	
	struct job job_input[index];
	
	// Enter values to struct
	for(int i = 0; i < index; i++)
	{
		cout<<"Enter Job ID - "<< i+1 <<" : ";
		cin>>job_input[i].job_ID;
		cout<<"Enter Job Profit - "<< i+1 <<" : ";
		cin>>job_input[i].job_Profit;
		cout<<endl;
	}
	
	// Comparision Array
	int main[index];
	
	max = job_input[0].job_Profit;
	temp = 0;
	
	// Finding the highest value
	for(int i = 1; i < index; i++)
	{
		if(max < job_input[i].job_Profit)
		{
			max = job_input[i].job_Profit;
			temp = i;
		}
	}
	index[temp] = max;
	cout<<max;
	

	
	
	
	
	return 0;
}
