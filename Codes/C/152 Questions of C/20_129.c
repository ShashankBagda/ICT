/*
129. Create a structure named EMP that has member variables
    employee no, employee name, basic salary, DA, HRA, TA, PF and Gross Salary.
Shashank Bagda
06-01-22
*/
#include<stdio.h>
#include<stdlib.h>
struct EMP
{
	int employee_no;
	char employee_name[10];
	double basicsalary;
	double DA;
	double HRA;
	double TA;
	double PF;
	double SalaryGross;
};
