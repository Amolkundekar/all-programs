// public class Book {
    
// }
public class JavaInherit {

    public static void main(String[] args)
    {
        System.out.println("Program for Inheritance!");
        ScientificBook b1=new ScientificBook("NeuralNetworks","Simon Haykin",696,"0-02-352761-7","Artificial Inteligence");
        System.out.println("Initials: "+ b1.getInitials());
        b1.DisplayBookInformation();
        
    }
}
 class Book
{
    String title;
    String author;  
    int numberOfPages;
    String ISBN;
    
    Book(String tit,String aut,int num) 
    {
     title = tit; 
     author = aut;
     numberOfPages = num;
     ISBN = "unknow";
    }
    Book(String tit,String aut,int num,String isbn) 
    {
      title = tit; 
      author = aut;
      numberOfPages = num;
      ISBN = isbn;
    }
    public String getInitials() 
    {
     String initials =" ";
     for(int i = 0;i < author.length();i++) 
     {
        char currentChar = author.charAt(i);
        if (currentChar >= 'A' && currentChar <='Z')
        initials = initials + currentChar + '.';
     }
    return initials;
   }
}
 class ScientificBook extends Book        
{
    String area;
    boolean proceeding = false;
    ScientificBook(String tit,String aut,int num,String isbn,String a) 
    {
    super(tit,aut,num,isbn);
    area = a;
    }    
   public void DisplayBookInformation()
    {
        System.out.println("******Book Information**********");
        System.out.println("Title of theBook:"+title);
	System.out.println("Author of theBook:"+author);
	System.out.println("Number of pages in the Book:"+numberOfPages);
	System.out.println("ISBN number  of the Book:"+ISBN);
	System.out.println("Area of the Book:"+area);
	System.out.println("Whether this is from proceedings:"+proceeding); 
    }
}