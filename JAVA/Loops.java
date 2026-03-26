import java.util.Scanner;

public class assignmentforloops {
        public static void main(String[] args) {

                Scanner new1 = new Scanner(System.in);
                int n;

                System.out.println("Enter a Number");
                n = new1.nextInt();
                // Write a program to print all natural numbers from 1 to n
                for (int i = 1;i<=n;i++)
                {
                System.out.println(i);
                }

                // Write a program to print all natural numbers in reverse

                for(double i =n;i>=1;i--)
                {
                System.out.println(i);
                }

                // Write a program to print tables

                for (int i = 1; i <= 10; i++) {
                System.out.println(n+"*"+i+"="+n*i);
                }
                System.out.println();

                // Write a program to print reverse table.

                for(int i = 10; i>=1 ;i--)
                {
                System.out.println(n+"*"+i+"="+n*i);
                }

                // Write a program to print all alphabets from a to z

                for(char i = 1;i<=26;i++)
                {
                System.out.printf("%c\n",(i+96));
                }
                System.out.println();

                // Write a program to print reverse alphabets from Z to A.

                for(char i =26;i>=1;i--)
                {
                System.out.printf("%c\n",(i+64));
                }

                // Write a program to print all even numbers between 1 to 100.
                for(int i = 1;i<=50;i++)
                {
                System.out.println(i*2);
                }
                System.out.println();
                // Write a program to print all odd number between 1 to 100.

                for(int i= 1;i<=100;i++)
                {
                System.out.println(i++);
                }

                // Write a program to find sum of all natural numbers between 1 to n.
                int sum = 0;

                for(int i =1;i<=n;i++)
                {
                sum = sum+i;
                }
                System.out.println("Sum of Number:"+sum);

                // Write a program to find sum of all even numbers between 1 to n.
                int sum = 0;
                for(int i = 1;i<=n;i++)
                {
                if(i%2==0)

                sum= sum+i;
                }
                System.out.println("Sum of Even Number:"+sum);

                // //Write a program to find sum of all odd numbers between 1 to n.
                int sum = 0;
                for(int i= 1;i<=n;i++)
                {
                if(i%2==0){
                System.out.println();
                }
                else{
                sum =sum+i;
                }
                }
                System.out.println("Sum of Odd Numbers:"+sum);

                // Write a program to print the ASCII values.
                for(char i = 1;i<=255;i++)
                {
                System.out.printf("%c\n",i);;
                }

                // Write a program to find the factorial value of any number.

                int fac = 1;
                for(int i = 1; i <=n;i++)
                {
                fac*= i;
                }
                System.out.println("Factorial:"+fac);

                // Write a program to find the value of one number raised to the power of another.
                double a,b,res;
                System.out.println("Enter the base value : ");
                a = new1.nextInt();
                System.out.println("Enter the exponent value : ");
                b = new1.nextInt();

                res = Math.pow(a,b);
                System.out.println(res);

                // write a program to sum of its Digits.
                int sum = 0;
                int rem = 0;
                while(n>0)
                {
                rem = n % 10;
                sum = sum + rem;
                n /= 10;
                }
                System.out.println("Sum of Digits = "+sum);

                // write a program to Check Whether a Given Number is Prime or Not.
                int i, count = 0;
                for(i=2; i<n; i++)
                {
                if(n%i == 0)
                {
                count++;
                break;
                }
                }
                if(count==0)
                System.out.println("This is a Prime Number.");
                else
                System.out.println("This is not a Prime Number.");

                // Write a program to find number and sum of all integer between 100 and 200
                // which are divisible by 9.
                int sum = 0;
                for (int i = 100; i <= 200; i++) {
                if (i % 9 == 0) {
                sum += i;
                System.out.println(i);
                System.out.println("The Sum of Numbers between 100 to 200 which are divisible
                by 9 = "+sum);
                }

                }

                print an infinte loop using for loop.

                for(;;)
                {
                System.out.print("Hello WOrld!");
                }

                // /Write Java program to count total number of words in a string.

                String hello = "Hy there my name is Deependu Sharma";
                System.out.println(count(hello));
                
                Write a Program to print Prime factors in java.
                for (int i = 2; i < n; i++) {
                        while (n % i == 0) {
                                System.out.println(i + " ");
                                n = n / i;
                        }
                }
                if (n > 2) {
                        System.out.println(n);
                }

        }
}
