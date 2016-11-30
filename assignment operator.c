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
     int a,b;
       printf("enter the first number:\n");
       scanf("%d",&a);

       printf("enter the second number:\n");
       scanf("%d",&b);

       a+=b;
       printf("result of a+=b:%d\n",a);

       a-=b;
       printf("result of a-=b:%d\n",a);

       a*=b;
       printf("result of a*=b:%d\n",a);

       a/=b;
       printf("result of a/=b:%d\n",a);

     return 0;
}
