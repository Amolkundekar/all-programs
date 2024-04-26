import java.util.Scanner;

public class AgeCalculator
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        int day, month, year;
        int cday, cmonth, cyear;

        System.out.println("enter day ");
        day = sc.nextInt();
        System.out.println("enter month ");
        month = sc.nextInt();
        System.out.println("enter year ");
        year = sc.nextInt();

        System.out.println("current day");
        cday = sc.nextInt();
        System.out.println("current month");
        cmonth = sc.nextInt();
        System.out.println("current year");
        cyear = sc.nextInt();

        Dob birthDate = new Dob(day, month, year, cday, cmonth, cyear);

        birthDate.printBdate();
        birthDate.calculateAge();

        sc.close();
    }
}

class Dob
{
    private int day, currentDay;
    private int month, currentMonth;
    private int year, currentYear;


    public Dob(int d, int m, int y, int cd, int cm, int cy)
    {
        day = d;
        month = m;
        year = y;
        currentDay = cd;
        currentMonth = cm;
        currentYear = cy;
    }

    void printBdate()
    {
        System.out.println("your date of birth is " + this.day + "/" + this.month + "/" + this.year);
    }

    void calculateAge()
    {
        int monthDaysArr[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (day > currentDay) 
        {
            currentDay = currentDay + monthDaysArr[month - 1];
            currentMonth = currentMonth - 1;
        }
    
        if (month > currentMonth) {
            currentYear = currentYear - 1;
            currentMonth = currentMonth + 12;
        }
    
        int calculated_days = currentDay - day;
        int calculated_month = currentMonth - month;
        int calculated_year = currentYear - year;

        System.out.println("your age is " + calculated_year + " years " + calculated_month + " months " + calculated_days + " days");
    }
}