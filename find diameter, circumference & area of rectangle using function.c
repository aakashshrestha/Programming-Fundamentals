/*
   Student Name: Aakash Shrestha
   Subject: Programing Fundamentals
   Roll: 18
   Program: Write a program to enter length and breadth and display area of rectangle using function.
               (function with no argument and no return type)
   Lab:04
   Date:18/01/2017
*/

     #include<stdio.h>
     //include<conio.h>
        void area();

      int main()
    {
       area();

      getch();
    }

     void area()
{
        int a,b,result;
           printf("Enter the length: ");
           scanf("%d",&a);

           printf("Enter thye breadth: ");
           scanf("%d",&b);

              result=a*b;

           printf("Area of rectangle is: %d",result);
}
