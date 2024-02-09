class Test
{
	public static void main(String s[])
	{
		String s1 =new String("Testing in Lab");
		String s2 = "ICT MU";
		System.out.println("Third Char = "+s1.charAt(3));
		for(int i=0;i<s1.length();i++)
		{
			System.out.println(s1.charAt(i));
		}
		System.out.println("Position of X = "+s2.indexOf('X'));
		System.out.println("Position of n = "+s1.indexOf('n',s1.indexOf('n')+1));
		
		
	}
}