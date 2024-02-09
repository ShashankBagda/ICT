/*
130. Write a C Program which shows the size of Structure EMP.
Shashank Bagda
06-01-22
*/
#include<stdio.h>
#include<stdlib.h>
struct EMP
{
	int employee_no;
	char employee_name[7];
	double basicsalary;
	double DA;
	double HRA;
	double TA;
	double PF;
	double SalaryGross;
};
int main()
{
	printf("Size of EMP_structure:%d",sizeof(struct EMP));
	return 0;
}
