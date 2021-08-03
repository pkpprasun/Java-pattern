public class Employee 
{
    String name,address;
    int year;
    Employee(String n,int y,String a)
    {
        name=n;
        year=y;
        address=a;
    }
    
}
class data
{
    public static void main(String[] args)
    {
        Employee n1=new Employee("Robert",1994,"64C-WallsStreat");
        Employee n2=new Employee("Sam",2000,"68D- WallsStreat");
        Employee n3=new Employee("John",1999,"26B- WallsStreat");
        System.out.println("Name        Year of joining        Address");
        System.out.println(n1.name+"          "+n1.year+"            "+n1.address);
        System.out.println(n2.name+"             "+n2.year+"            "+n2.address);
        System.out.println(n3.name+"            "+n3.year+"            "+n3.address);
    }
}