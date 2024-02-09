import java.io.*;
import java.util.*;
import java.io.IOException; 

class Student
{
	int phone;
	String name;
	String city;
	
	Student(int a, String b, String c)
	{
		this.phone = a;
		this.name = b;
		this.city = c;
	}

	
	public int compare(Student e1, Student e2)
   {
    return e1.city.compareTo(e2.city);
   } 

	public String toString()
	{
		return this.phone + "#" + this.name + "#" + this.city;
	}
	
	static String arrayToString(Student s[])
	{
		String returnString = new String("");
		for(int i=0;i<s.length;i++)
		{
			if(i==s.length-1)
			{
				returnString+=s[i].toString();
			}
			else
			{
				returnString+=s[i].toString()+"\n";
			}
		}
		return returnString;
		
	}  

	public static void main(String args[]) throws Exception
	{
		//new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();			//used to clear the command promt screen

	int choice = -1;
    Scanner s = new Scanner(System.in);
    Scanner s1 = new Scanner(System.in);
    Scanner s2 = new Scanner(System.in);

    File file = new File("PhoneDirectory.txt");
      ArrayList<Student> al = new ArrayList<Student>();
      ObjectOutputStream oos = null;
      ObjectInputStream ois = null;
      ListIterator li = null;
      if(file.isFile())
    {
         ois = new ObjectInputStream(new FileInputStream(file));
         al = (ArrayList<Student>)ois.readObject();
         ois.close();

		System.out.println(" Welcome to Phone Directory\n Enter your choice number");

		do
		{
			System.out.println("1 - Add Entry");
			System.out.println("2 - Display List");
			System.out.println("3 - Search");
			System.out.println("4 - Sort By Phone Number");
	        System.out.println("5 - Sort By Name");
	        System.out.println("6 - Sort By City");
	        System.out.println("0 - EXIT");

	        System.out.print("Enter Your Choice : ");
	        choice = s.nextInt();

	        switch(choice)
	        {
	        

	        case 1:
	        	System.out.println("Enter how many PhoneDirectorys you want : ");
               	int n = s.nextInt();
               	for(int i=0;i<n;i++)
               	{
                  System.out.print("Enter Person's Phone Number : \n");
                  int phone = s.nextInt();

                  System.out.print("Enter Person's Name: \n");
                  String name = s1.nextLine();
                  
                  System.out.print("Enter Person's City : \n");
                  String city = s2.nextLine();

                  al.add(new Student(phone,name,city));                 
               	}
                oos = new ObjectOutputStream(new FileOutputStream(file));
                oos.writeObject(al);
                oos.close();
            break;

            case 2:
               if(file.isFile())
               {
                    ois = new ObjectInputStream(new FileInputStream(file));
                    al = (ArrayList<Student>)ois.readObject();
                    ois.close();

                    System.out.println("-------------------------------------");
                    li = al.listIterator();
                    while(li.hasNext())
                       System.out.println(li.next());
                    System.out.println("-------------------------------------");
               }
               else
               {
                    System.out.println("File not Exists....!");
               }
            break;


            case 3:
               if(file.isFile())
               {
                  ois = new ObjectInputStream(new FileInputStream(file));
                  al = (ArrayList<Student>)ois.readObject();
                  ois.close();

                  boolean found = false;
                  System.out.println("Enter phoneno to Search : ");
                  int phone = s.nextInt();
                  System.out.println("-------------------------------------");
                  li = al.listIterator();
                  while(li.hasNext())
                  {
                    Student e = (Student)li.next();
                    if(e.phone == phone)
                    {
                        System.out.println(e);
                        found = true;
                    }

                  }

                  if(!found)
                    System.out.println("Record Not Found...!");
                    System.out.println("-------------------------------------");
               }
               else
               {
                    System.out.println("File not Exists....!");
               }
            break;

            case 4:
               if(file.isFile()){
                  ois = new ObjectInputStream(new FileInputStream(file));
                  al = (ArrayList<Student>)ois.readObject();
                  ois.close();

                  Collections.sort(al, new Comparator<Student>(){
                     public int compare(Student e1, Student e2){
                        return e1.phone - e2.phone;
                     }  
                  });    

                  System.out.println("-------------------------------------");
                  li = al.listIterator();
                  while(li.hasNext())
                     System.out.println(li.next());
                  System.out.println("-------------------------------------");
               }else{
                  System.out.println("File not Exists....!");
               }
            break; 
            
            case 5:
               if(file.isFile()){
                  ois = new ObjectInputStream(new FileInputStream(file));
                  al = (ArrayList<Student>)ois.readObject();
                  ois.close();

                  Collections.sort(al, new Comparator<Student>(){
                     public int compare(Student e1, Student e2){
                        return e1.name.compareTo(e2.name);
                     }  
                  });    

                  System.out.println("-------------------------------------");
                  li = al.listIterator();
                  while(li.hasNext())
                     System.out.println(li.next());
                  System.out.println("-------------------------------------");
               }else{
                  System.out.println("File not Exists....!");
               }
            break; 
            
            case 6:
               if(file.isFile()){
                  ois = new ObjectInputStream(new FileInputStream(file));
                  al = (ArrayList<Student>)ois.readObject();
                  ois.close();

                  Collections.sort(al, new SortByCity());    

                  System.out.println("-------------------------------------");
                  li = al.listIterator();
                  while(li.hasNext())
                     System.out.println(li.next());
                  System.out.println("-------------------------------------");
               }else{
                  System.out.println("File not Exists....!");
               }
            break; 
            

	        }


		}while(choice!=0);

		
	}
	}
}