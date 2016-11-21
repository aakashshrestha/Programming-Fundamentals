/*
   Student Name: Aakash Shrestha
   Subject: Programing Fundamentals
   Roll: 01
   Program: Write a C program to print area and perimeter of rectangle.
   Lab:04
   Date:21/11/2016
*/

     #include<stdio.h>
     //include<conio.h>

   int main()
{

     float l,b,area,perimeter;
       printf("enter the value of length\n");
       scanf("%f",&l);

       printf("Enter the value of breadth\n");
       scanf("%f",&b);

       area=l*b;
       printf("area of rectangle=%f",area);
       perimeter=2*(l+b);
       printf("perimeter of rectangle=%f",perimeter);

       return 0;
}
