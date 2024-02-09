/*
LHC 1
7.Write a program in Java to multiply two matrix.
Shashank Bagda
*/
public class MatrixMultiplication
{  
	public static void main(String args[])
	{  
		//creating two matrices    
		int a[][]={{1,2,3},{1,2,3},{1,2,3}};    
		
		int b[][]={{4,5,6},{4,5,6},{4,5,6}};        
		
		int c[][]=new int[3][3];    
		
		for(int i=0;i<3;i++)
		{    
			for(int j=0;j<3;j++)
			{    
				c[i][j]=0;      
			
				for(int k=0;k<3;k++)      
				{      
					c[i][j]+=a[i][k]*b[k][j];      
				}//end of k loop  
		
			System.out.print(c[i][j]+" "); 
			}//end of j loop  
		
		System.out.println();    
		}    
	}
}  