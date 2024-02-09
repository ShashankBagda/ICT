//set classpath=pdfbox-app-2.0.26.jar;.;
import java.io.IOException;
import org.apache.pdfbox.pdmodel.PDDocument;
import org.apache.pdfbox.pdmodel.PDPage;
import org.apache.pdfbox.pdmodel.font.PDFont;
import org.apache.pdfbox.pdmodel.font.PDType1Font;
import org.apache.pdfbox.pdmodel.font.PDType0Font;
import org.apache.pdfbox.pdmodel.PDPageContentStream;
import org.apache.pdfbox.pdmodel.common.PDRectangle;

public class CreatingEmptyPdf 
{
	
	public static void main(String args[]) throws IOException 
	{
		PDDocument document = new PDDocument();
		
		PDPage page = new PDPage();
		document.addPage(page);
		
		PDPageContentStream contentStream = new PDPageContentStream(document, page);
		contentStream.beginText(); 
       
		//Setting the font to the Content stream  
		contentStream.setFont(PDType1Font.TIMES_BOLD, 16);

		//Setting the position for the line 
		
		//for(int i=0;i<39;i++)
		//{
		contentStream.newLineAtOffset(0, 20);
		contentStream.showText("OOP - 01CT0105");
		contentStream.newLineAtOffset(0, 20);
		contentStream.showText("MID SEM EXAM");
		contentStream.newLineAtOffset(0, 20);
		contentStream.showText("Q-1 ");
		contentStream.showText("Q-2 ");
		contentStream.showText("Q-3 ");
		//}
		
		contentStream.endText();

		System.out.println("Content added");

		//Closing the content stream
		contentStream.close();

		//Saving the document
		document.save("OOP.pdf");

		//Closing the document
		document.close();
   }
}