//Pending
#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
	char *custName;
	int prod_id;
	char *product_name;
	char *category;
	double price;	
	
}Product;


int main()
{
	
	double t;
	double gt=0;
	int a;
	int p=1;

		
	char *custName;
	custName = (char *)malloc(sizeof(char)*20);
	printf("\n Enter Name : ");
	scanf("%[^\n]s",custName);
	
	int size;
	printf("How many products you want to enter : ");
	scanf("%d",&size);
	
	Product i1[size];
	int j;
	
	for(j=0;j<size;j++)
	{
		
		i1[j].product_name = (char *)malloc(sizeof(char)*20);
		printf("\n Enter Product Name : ");
		scanf("%s",i1[j].product_name);
		
		printf("\n Enter Product Quantity : ");
		scanf("%d",&i1[j].prod_id);
	
		printf("\n Enter Product Price : ");
		scanf("%lf",&i1[j].price);
	
	}
	
//////////////////////////////////

	printf("%98s%s\n"," ","Super Market");
	printf("%96s%s\n"," ","UNIVERSITY ROAD");
	printf("%95s%s\n"," ","BILL - 12/02/2022\n\n");
	
	for(a=0;a<196;a++)
	{
		printf("=");
	}
	
	printf("%90s%s"," ","Customer Name : ");
	printf("%s\n",custName);
	
	for(a=0;a<196;a++)
	{
		printf("=");
	}
	
////////////////////////////
	printf("\n          Serial No.");

	printf("%10s%s"," ","Name of Product ");

	printf("%20s%s"," ","Product Price ");

	printf("%30s%s"," ","Product Quantity ");
	
	printf("%40s%s"," ","Total Product Price ");


	for(j=0;j<size;j++)
	{
	
		printf("\n             %d",p);
		p++;
			
		printf("%10s           %s"," ",i1[j].product_name);

		printf("%31s%.2lf"," ",i1[j].price);
	
		printf("%43s%d"," ",i1[j].prod_id);

		t = (i1[j].price)*(i1[j].prod_id);
		
		printf("%56s%.2lf"," ",t);
		
		gt = gt + t;
	}	
	
	printf("\n");
	for(a=0;a<196;a++)
	{
		printf("=");
	}
	
	printf("\n");
	printf("%93sGrand Total = %.2lf"," ",gt);
	printf("\n\n");
	printf("%92sTHANK YOU FOR VISITING"," ");
	return 0;
}
