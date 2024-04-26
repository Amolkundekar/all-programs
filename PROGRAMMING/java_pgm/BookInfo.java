import java.util.*;

public class BookInfo {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);

        String titleBook;
        int noOfPagesBook;
        String authorBook;
        String isbnBook;
        String areaBook;

        // Taking input details for the scientific book
        System.out.println("enter title of scientific book");
        titleBook = scn.nextLine();

        System.out.println("enter author of the book :");
        authorBook = scn.nextLine();

        System.out.println("enter isbn no. of the book :");
        isbnBook = scn.nextLine();

        System.out.println("enter area/field of the book :");
        areaBook = scn.nextLine();

        System.out.println("enter number of pages of the book :");
        noOfPagesBook = scn.nextInt();

        System.out.println("\n\n");

        ScientificBook sB = new ScientificBook(titleBook, noOfPagesBook, authorBook, isbnBook, areaBook);
        sB.displayScientificBookInfo();

        String publisherBook;
        int priceBook;

        // taking input of the details about the comic book
        System.out.println("enter title of the book of type comic book :");
        titleBook = scn.nextLine();

        System.out.println("enter author of the book :");
        authorBook = scn.nextLine();

        System.out.println("enter isbn no. of the book :");
        isbnBook = scn.nextLine();

        System.out.println("enter area/field of the book :");
        areaBook = scn.nextLine();

        System.out.println("enter publisher of the book :");
        publisherBook = scn.nextLine();

        System.out.println("enter number of pages :");
        noOfPagesBook = scn.nextInt();

        System.out.println("enter price of the book :");
        priceBook = scn.nextInt();

        ComicBook cB = new ComicBook(titleBook, noOfPagesBook, authorBook, isbnBook, areaBook, publisherBook,
                priceBook);
        cB.displayBookInfo();
        scn.close();

    }

}

class Book {
    String title;
    int noOfPages;
    String author;
    String isbn;

    Book(String t, int pages, String au, String isb) {
        title = t;
        noOfPages = pages;
        author = au;
        isbn = isb;
    }

}

class ScientificBook extends Book {
    String area;

    ScientificBook(String t, int pages, String au, String isb, String a) {
        super(t, pages, au, isb);
        area = a;
    }

    public void displayScientificBookInfo() {
        System.out.println("\n**************PRINTING DEATAILS OF THE BOOK*************");

        System.out.println("title of book = " + title);
        System.out.println("Total number of pages in book = " + noOfPages);
        System.out.println("Author of the book = " + author);
        System.out.println("ISBN number = " + isbn);
        System.out.println("Area of book is = " + area);

        System.out.println("\n\n");
    }

}

class ComicBook extends Book {
    String area;
    String publisher;
    int price;

    ComicBook(String t, int pages, String au, String isb, String a, String publi, int pric) {
        super(t, pages, au, isb);
        area = a;
        publisher = publi;
        price = pric;
    }

    public void displayBookInfo() {
        System.out.println("\nprinting book info .........");

        System.out.println("title of book = " + title);
        System.out.println("Total number of pages in book = " + noOfPages);
        System.out.println("Author of the book = " + author);
        System.out.println("ISBN number = " + isbn);
        System.out.println("Area of book is = " + area);
        System.out.println("publisher of book is = " + publisher);
        System.out.println("price of book = " + price);
    }

}