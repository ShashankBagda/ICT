class Test
{
	public static void main(String s[])
	{
		String s1 =new String("  ICT MU  ");
		String s2 = "OOP";
		//System.out.println(s1.trim());
		//System.out.println(s1.replace('t','p'));
		//System.out.println(s1);
		//s1 = new String(s1.trim());
		//StringBuffer sb=new StringBuffer(s1);
		//System.out.println(sb = new StringBuffer(new String(sb).trim()));
		//System.out.println(s1);
		s1  = new String(new StringBuffer(s1.trim()).append(" "+s2));
		System.out.println(s1);
		StringBuffer sb = new StringBuffer("Marwadi University");
		System.out.println(sb.delete(3,6));// [3,6) 3 is inclusive 6 is exclusive 3,4,5
		s1 = new String(sb);
		if(s1.contains("University"))
		{
			System.out.println("YES");
		}
		else
		{
			System.out.println("NO");
		}
		System.out.println(s1.replace('i','x'));
		System.out.println(s1.replace("University","College"));
		
	}
}

//Annonymous Object 
// new String("ABCD") <- Annonymous Object 





