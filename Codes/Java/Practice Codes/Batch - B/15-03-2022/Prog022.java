//finalize method
class DemoClass
{
	DemoClass()
	{
		//System.out.println("Object Created");
	}
	protected void finalize()
	{
		System.out.println("Object Deleted");
	}
	public static void main(String sd[])
	{
		
		DemoClass dc[] = new DemoClass[80000];
		for(int i=0;i<80000;i++)
		{
			dc[i]=new DemoClass();
		}
		//dc = null;
		System.gc();
		
	}
}