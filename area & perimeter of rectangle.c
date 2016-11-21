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

     float l,b,area;

       printf("area of rectangle\n");
       printf("enter the value of l\n");
       scanf("%f",&l);

       printf("enter the value of b\n");
       scanf("%f",&b);

       area=l*b;
       printf("area of rectangle=%f",area);

       return 0;
}
