class Prog008
{
	public static void main(String k[])
	{
		int i1=10;
		Integer i2 = new Integer(20);
		
		Integer j1;
		int j2;
		System.out.println(i1);
		System.out.println(i2);
		System.out.println(i1+i2);
		j1=new Integer(i1);
		j2=i2.intValue();
		System.out.println(j1);
		System.out.println(j2);
	}
}