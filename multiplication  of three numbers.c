/*
   Student Name: Aakash Shrestha
   Subject: Programing Fundamentals
   Roll: 01
   Program: Write a C program to find multiplication of three numbers.
   Lab:04
   Date:01/12/2016
*/

      #include<stdio.h>
      //#include<conio.h>
   void main()
{

     int a,b,c,multi;
       printf("enter the value of a=\n");
       scanf("%d",&a);

       printf("enter the value of b=\n");
       scanf("%d",&b);

       printf("enter the value of c=\n");
       scanf("%d",&c);

       multi=a*b*c;
       printf("multiplication of three numbers%d*%d*%d=%d%d",a,b,c,multi);

       getch();
}
