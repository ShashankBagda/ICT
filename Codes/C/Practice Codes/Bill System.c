//Pending
#include<stdio.h>
int main()
{
	int bno=1234;
	float up1=25000.00, up2=12500.00, up3=450.0, up4=2.5, disc=12.50;
	int q1=1,q2=2,q3=5,q4=5;
	float sum;
	
	printf("\n================ Welcome to Billing System ================");
	
	printf("\n Enter Bill no : ");
	scanf("%d",&bno);
	
	printf("\nEnter Computer Price : ");
	scanf("%f",&up1);
	printf("\nEnter Computer Quantity : ");
	scanf("%f",&q1);
	
	printf("\nEnter Mobile Price : ");
	scanf("%f",&up2);
	printf("\nEnter Mobile Quantity : ");
	scanf("%f",&q2);
	
	printf("\nEnter Calculator Price : ");
	scanf("%f",&up3);
	printf("\nEnter Calculator Quantity : ");
	scanf("%f",&q3);
	
	printf("\nEnter Pencil Price : ");
	scanf("%f",&up4);
	printf("\nEnter Pencil Quantity : ");
	scanf("%f",&q4);

	sum = (up1*q1)+(up2*q2)+(up3*q3)+(up4*q4); 
	
	printf("\n");
	printf("%28s%s\n"," ","XYZ Mart Pvt Ltd");
	


	return 0;
}
