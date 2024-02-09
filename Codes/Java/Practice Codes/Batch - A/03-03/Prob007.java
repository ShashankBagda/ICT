class T1 //T1 is class start with Capital Letter
{
	Integer data;
	//When Class Execute this method will be called.
	public static void main(String k[])
	{
		int sum=0;  //Variable
		for(int i=0;i<k.length;i++)
		{
			sum = sum + Integer.parseInt(k[i]);
		}
		System.out.println("SUM = "+sum);
		
		Integer i1 = new Integer("234"); //Object
		Integer i2 = new Integer(432); //Object
		System.out.println(i1+i2);
	
		//primitive
		int j1=20;
		int j2;
		
		//Objects
		Integer m1 = new Integer(j1);
		Integer m2 = new Integer(100);
		
		j2 =m2.intValue();
		
		System.out.println("m1 : "+m1);
		System.out.println("j2 : "+j2);
		
		
	}
}

// int vs Integer
// float vs Float



