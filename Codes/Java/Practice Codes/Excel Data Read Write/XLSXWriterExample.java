//set classpath=commons-collections4-4.1.jar;poi-3.17.jar;poi-ooxml-3.17.jar;poi-ooxml-schemas-3.17.jar;xmlbeans-2.6.0.jar;.;
import java.io.File;
import org.apache.poi.ss.usermodel.Cell;
import org.apache.poi.xssf.usermodel.XSSFRow;
import org.apache.poi.xssf.usermodel.XSSFSheet;
import org.apache.poi.xssf.usermodel.XSSFWorkbook;
import java.io.FileOutputStream;
import java.util.Map;
import java.util.Set;
import java.util.TreeMap;

class Student
{
	String rollNo;
	String name;
	String marks;
	
	Student(String a, String b, String c)
	{
		this.rollNo=a;
		this.name=b;
		this.marks=c;
	}
	public String toString()
	{
		return this.rollNo+","+this.name+","+this.marks;
	}
}
public class XLSXWriterExample {
  
    // any exceptions need to be caught
    public static void main(String[] args) throws Exception
    {
        // workbook object
        XSSFWorkbook workbook = new XSSFWorkbook();
  
        // spreadsheet object
        XSSFSheet spreadsheet = workbook.createSheet(" Student Data ");
  
        // creating a row object
        XSSFRow row;
  
        // This data needs to be written (Object[])
        Map<String, Student> studentData = new TreeMap<String, Student>();
  
        studentData.put("1", new Student("Roll No", "NAME", "Marks"));
        studentData.put("2", new Student("1", "Kapil","15"));
		studentData.put("3", new Student("2", "Umang","25"));
		studentData.put("4", new Student("3", "Jigar","45"));
        
  
        Set<String> keyid = studentData.keySet();
  
        int rowid = 0;
  
        // writing the data into the sheets...
		Student st[] = new Student[1];
        for (String key : keyid) {
  
            row = spreadsheet.createRow(rowid++);
			st[0] = studentData.get(key);
            Object[] objectArr = st[0].toString().split(",");
            int cellid = 0;
  
            for (Object obj : objectArr) { //[0] [1] [2]
                Cell cell = row.createCell(cellid++);
                cell.setCellValue((String)obj);
            }
        }
  
        // .xlsx is the format for Excel Sheets...
        // writing the workbook into the file...
        FileOutputStream out = new FileOutputStream(new File("ictDemoData.xlsx"));
  
        workbook.write(out);
        out.close();
    }
}