class Vote
{
	public static void main(String s[])
	{
		int age=19;
		System.out.println("Voting Started");
		if(age<18)
		{
			try
			{
				throw new Exception("You Can't Vote");
			}
			catch(Exception e)
			{
				System.out.println(e);
			}
		}
		else
		{
			System.out.println("You can Vote");
		}
		System.out.println("Voting Ended");
	}
}