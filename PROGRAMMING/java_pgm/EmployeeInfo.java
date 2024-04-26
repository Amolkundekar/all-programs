
import java.util.Scanner;


public class EmployeeInfo
{
	public static void main(String[] args)
	{
		Scanner scn = new Scanner(System.in);
		String name;
		int age;
		double salary;
		
		System.out.println("enter name of employee");
		name = scn.nextLine();
		
		System.out.println("enter age of employee");
		age = scn.nextInt();
		
		System.out.println("enter salary of employee");
		salary = scn.nextDouble();
		

	
		Employee e1 = new Employee(name, age, salary);
		
		System.out.println("name of employee = " + e1.getName());
		System.out.println("age of employee = " + e1.getAge());
		System.out.println("salary of employee = " + e1.getSalary());

		System.out.println("Increased salary = " + e1.increaseSalary());
	
		e1.setName("omkar kulkarni");
		e1.setAge(20);
		e1.setSalary(2000.32);
	
		System.out.println("name of employee = " + e1.getName());
		System.out.println("age of employee = " + e1.getAge());
		System.out.println("salary of employee = " + e1.getSalary());

		System.out.println("Increased salary = " + e1.increaseSalary());

        scn.close();
		
	}
}


class Employee
{
	String name;
	int age;
	double salary;
	
	Employee()
	{
		name = "NULL";
		age = 0;
		salary = 0;
	}

	Employee(String n, int ag, double sal)
	{
		name = n;
		age = ag;
		salary = sal;
	}
	
	void setName(String n)
	{
		name = n;
	}
	
	String getName()
	{
		return name;
	}

	void setAge(int a)
	{
		age = a;
	}
	
	int getAge()
	{
		return age;
	}

	void setSalary(double sal)
	{
		salary = sal;
	}
	
	double getSalary()
	{
		return salary;
	}

	double increaseSalary()	
	{
		this.salary = this.salary + (0.1  * this.salary);
		return this.salary;
	}

}