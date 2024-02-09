//set classpath=commons-collections4-4.1.jar;poi-3.17.jar;poi-ooxml-3.17.jar;poi-ooxml-schemas-3.17.jar;xmlbeans-2.6.0.jar;.;
import java.io.File;  
import java.io.FileInputStream;  
import java.util.Iterator;  
import org.apache.poi.ss.usermodel.Cell;  
import org.apache.poi.ss.usermodel.Row;  
import org.apache.poi.xssf.usermodel.XSSFSheet;  
import org.apache.poi.xssf.usermodel.XSSFWorkbook;  
public class XLSXReaderExample  
{  
	public static void main(String[] args)   
	{  
		try  
		{  	//creating a new file instance  
			File file = new File("ict-marks.xlsx");
			//obtaining bytes from the file  			
			FileInputStream fis = new FileInputStream(file);   
			//FileInputStream fis = new FileInputStream(new File("student.xlsx"));
			//creating Workbook instance that refers to .xlsx file  
			XSSFWorkbook wb = new XSSFWorkbook(fis);
			//creating a Sheet object to retrieve object 
			XSSFSheet sheet = wb.getSheetAt(1);      
			//iterating over excel file 
			Iterator<Row> itr = sheet.iterator();     
			//ROW Loop
			while (itr.hasNext())                 
			{  
				Row row = itr.next();
				//iterating over each column  
				Iterator<Cell> cellIterator = row.cellIterator();   
				//COLUMN Loop
				while (cellIterator.hasNext())   
				{  
					Cell cell = cellIterator.next();  
					switch (cell.getCellType())               
					{  
						//field that represents string cell type
						case Cell.CELL_TYPE_STRING:      
							System.out.print(cell.getStringCellValue() + "\t");  
							break;  
						//field that represents number cell type
						case Cell.CELL_TYPE_NUMERIC:      
							System.out.print(cell.getNumericCellValue() + "\t");  
							break;  
						default:  
					}  
				}  
				System.out.println("");  
			}  
		}  
		catch(Exception e)  
		{  
			e.printStackTrace();  
		}  
	}  
}  