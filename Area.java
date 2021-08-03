//4
import java.util.Scanner;
public class Area {
       static int length, breadth;

        static void setDim(int l, int b) {
            length = l;
            breadth = b;
        }


        static void getArea() {

            System.out.println("Area = " + (length*breadth));
        }

        public static void main(String[] args) {
            Scanner sc=new Scanner(System.in);
            System.out.println("Enter dimensions");
            int a=sc.nextInt();
            int b=sc.nextInt();

            setDim(a,b);
            getArea();

        }
    }