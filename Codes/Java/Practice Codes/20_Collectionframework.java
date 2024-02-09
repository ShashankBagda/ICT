import java.util.*;  
class Main
{  
 public static void main(String args[])
 {  
  ArrayList<String> list=new ArrayList<String>();
  list.add("ICT"); 
  list.add("JAVA");    
  list.add("Shashank");    
  list.add("Marwadi University");    
  Iterator itr=list.iterator();//Created a Iterator  
  while(itr.hasNext()) //hasNext is used to check if there is any element present or not 
    { 
        System.out.println(itr.next());//this will print the element and move to next line  
     }  
   }  
}  