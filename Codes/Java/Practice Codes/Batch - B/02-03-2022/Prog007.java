class Sum
{
	public static void main(String s[])
	{
		int i=0,sm=0;
		//Integer j = new Integer(s[0]);
		for(i=0;i<s.length;i++)
		{
			sm = sm + Integer.parseInt(s[i]);
		}
		System.out.println(sm);
	}
}