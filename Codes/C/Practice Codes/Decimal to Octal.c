#include<stdio.h>
int main() 
{
	long int num_decimal , remainder , quotient ;
	
	int a = 1 , b , var ;
	
	char hexanum_decimal[ 100 ] ;
	
	printf( " Please enter decimal number here : " ) ;
	scanf( "%ld" , &num_decimal ) ;
	
	quotient = num_decimal ;
	
	while( quotient != 0 ) 
	{
		var = quotient % 16 ;
		if( var < 10 )
			var = var + 48 ;
		else
			var = var + 55 ;
		
		hexanum_decimal[ a++ ]= var ;
		quotient = quotient / 16;
	}
	
	printf( " The equivalent hexadecimal value of decimal number is %ld : " , num_decimal ) ;
	
	for ( b = a -1 ; b > 0 ; b-- )
	
	printf( "%c" , hexanum_decimal[ b ] ) ;
	
	return 0 ;
}
