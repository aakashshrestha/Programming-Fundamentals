/*
   Student Name: Aakash Shrestha
   Subject: Programing Fundamentals
   Roll: 01
   Program: Write a C program to demonstration the working of increment and decrement operators.
   Lab:04
   Date:02/12/2016
*/

     #include<stdio.h>
     //include<conio.h>

   int main()
{

     int a;
       printf("enter the first number\n");
       scanf("%d",&a);

       printf("post increment is:%d\n",a++);

       printf("pre increment is:%d\n",++a);

       printf("post decrement is:%d\n",a--);

       printf("pre decrement is:%d\n",--a);
       
       getch();

       return 0;
}
