class DemoFinalize
{
	protected void finalize()
	{
		System.out.println("Object Deleted");
	}
	public static void main(String s[])
	{
		DemoFinalize df[] = new DemoFinalize[100];
		//df=null;
		for(int i=0;i<100;i++)
		{
			df[i] = new DemoFinalize();
			//df[i]=null;
			
		}
		System.gc();
	}
}