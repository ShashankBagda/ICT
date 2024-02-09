class String1
{
	public static void main(String s[])
	{
		//creating a string
		String first = "Shashank Bagda";

		//printing the string
		System.out.println(first);
	}
}

class String2
{
	public static void main(String s[])
	{
		//creating a string
		String first = "Shashank";
		String second = "Bagda";

		//joining the strings
		String third = first + second;

		//printing the string
		System.out.println(third);
	}
}

class String3
{
	public static void main(String s[])
	{
		//creating a string
		String first = "Marwadi";
		String second = "University";

		//assigning integer and use of length function
		int length1 = first.length();
		int length2 = second.length();

		//printing the string length
		System.out.println("Length of string 1 : "+length1);
		System.out.println("Length of string 2 : "+length2);
	}
}

class String4
{
	public static void main(String s[])
	{
		//creating a string
		String first = "Marwadi";
		String second = "University";

		//printing the string length
		System.out.println(first.toUpperCase());	//printing in upper case
		System.out.println(second.toLowerCase());	//printing in lower case
	}
}

class String5
{
	public static void main(String s[])
	{
		//creating a string
		String first = "     Marwadi University     ";

		//printing string
		System.out.println(first);

		//print after triming
		//trim is used to eliminate space between string
		System.out.println(first.trim());
	}
}