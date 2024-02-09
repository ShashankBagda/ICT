import java.io.*;
import java.util.*;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

class Telephone
{
	int no;
	int phonenumber;
	String name;
	String address;
	
	Telephone(int z, int a , String b , String c)
	{
		this.no = z;
		this.phonenumber = a;
		this.name=b;
		this.address =c;
	}
	void setName(String a)
	{
		this.name = a;
	}
	String  getName()
	{
		return this.name;
	}
	
	int getNo()
	{
		return this.no;
	}
	void setAddress(String a)
	{
		this.address = a;
	}
	String getAddress()
	{
		return this.address;
	}
	
	int getNum() 
	{
		return this.phonenumber;
	}
	
	public String toString()
	{
		return this.no + "#" +this.phonenumber + "#" +this.name + "#" + this.address;
	}
	static String arrayToString(Telephone t[])
	{
		String s1 = new String("");
		for(int i=0;i<t.length;i++)
		{
			if(i==t.length-1)
			{
				s1+=t[i].toString();
			}
			else
			{
				s1+=t[i].toString()+"\n";
			}
		}
		return s1;
	}
	public static void main(String args[]) throws IOException
	{
		
		boolean x = false;
		do
		{
			File f = new File("phoneData.txt");
			Path  pt = Paths.get("phoneData.txt");
			long sz = Files.size(pt);
			char ch[] = new char[new Long(sz).intValue()];
			FileReader fr = new FileReader("phoneData.txt");
			fr.read(ch);
			fr.close();
			Scanner sc = new Scanner(System.in);
			String rcds = new String(ch);
			String rd[] = rcds.split("\n");
			Telephone td[] = new Telephone[rd.length];
			for(int i=0;i<rd.length;i++)
			{
				String atr[] = rd[i].split("#");
				td[i] = new Telephone(Integer.parseInt(atr[0]),Integer.parseInt(atr[1]), atr[2], atr[3]);
			}
			System.out.println("Welcome");
		System .out.println("----------------------------------------");
		System.out.println("Enter 1 for Displaying  DATA");
		System.out.println("Enter 2 For find by phonenumber");
		System.out.println("Enter 3 For find by Name");
		System.out.println("Enter 4 For find by City");
		System.out.println("Enter 5 For update Name");
		System.out.println("Enter 6 For  update Cityname");
		System.out.println("Enter 7 For Add record");
		System.out.println("Enter 8 For Exit Program");
		System .out.println("------------------------------------------");
		
		System.out.println("Enter Your Choice : ");
		int q = sc.nextInt();
			switch(q)
			{
					case 1:
					{
						System.out.println(rcds);
						break;
					}
				case 2 :
				{
					System.out.println("Enter phonenumber  ");
					int srno = sc.nextInt();		
					for(int i=0;i<td.length;i++)
					{
						if((td[i].getNum()) == srno)
						{
							System.out.println(td[i]);
						}
					}
					break;
				}
				case 3 :
				{
					sc.nextLine();
					System.out.println("Enter Name  ");
					String srname = sc.nextLine();
					for(int i=0;i<td.length;i++)
					{
						if(srname.compareTo(td[i].getName())==0)
						{
							System.out.println(td[i]);
						}
					}
					break;
				}
				case 4 :
				{
					System.out.println("Enter City : ");
					String srcity = sc.nextLine();
					for(int i=0;i<td.length;i++)
					{
						if(srcity.compareTo(td[i].getAddress().trim())==0)
						{
							System.out.println(td[i]);
						}
					}
					break;
				}
				case 5 :
				{
					sc.nextLine();
					System.out.println("Which Name YOU Want to Change : ");
					String changeName = sc.nextLine();
					System.out.println("Enter New Name  : ");
					String newName =sc.nextLine();
			
					for(int i=0;i<td.length;i++)
					{
						if(changeName.compareTo(td[i].getName().trim())==0)
						{
							td[i].setName(newName);
						}
					}	
					
					String cityString = Telephone.arrayToString(td);
					FileWriter fw = new FileWriter("phoneData.txt");
					fw.write(cityString);
					fw.close();
					break;
				}
				case 6 :
				{
					sc.nextLine();
					System.out.println("Which CityName YOU Want to Change : ");
					String changeCity = sc.nextLine();
					System.out.println("Enter New CityName  : ");
					String newCity =sc.nextLine();
			
					for(int i=0;i<td.length;i++)
					{
						if(changeCity.compareTo(td[i].getAddress().trim())==0)
						{
							td[i].setAddress(newCity);
						}
					}		
					String cityString = Telephone.arrayToString(td);
					FileWriter fw = new FileWriter("phoneData.txt");
					fw.write(cityString);
					fw.close();
					break;
				}
				case 7:
				{
					System.out.println("How many entries you want to make: ");
					int nEntries = sc.nextInt();
					Telephone td1[] = new Telephone[nEntries];
					//nEntries+=20;
					for(int i=0;i<nEntries;i++)
					{
						System.out.println("Enter phonenumber ");
						int newNum = sc.nextInt();
						sc.nextLine();
						System.out.println("Enter Name ");
						String newNamee = sc.nextLine();
						System.out.println("Enter City ");
						String newCityy = sc.nextLine();
						td1[i] = new Telephone(i+td.length+1,newNum,newNamee, newCityy);
				
					}
					String fs = Telephone.arrayToString(td1);
					FileWriter fd = new FileWriter("phoneData.txt",true);
					fd.write("\n"+fs);
					fd.close();
					break;
				}
				case 8:
				{
					x=true;
					System.out.println("Thank you");
					break;
				}
				default :
				{
					System.out.println("Enter phonenumber Between 1 To 8  ");
					break;
				}
			}
			
		}while(!x);
	}
}