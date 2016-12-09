/*
   Student Name: Aakash Shrestha
   Subject: Programing Fundamentals
   Roll: 01
   Program: Write a C program to print largest number among three number using ternary operator.
   Lab:05
   Date:12/09/2016
*/

   #include<stdio.h>
   //include<conio.h>
  int main()
{
     int a,b,c;
        printf("enter the first number\n");
        scanf("%d",&a);

        printf("enter the second number\n");
        scanf("%d",&b);

        printf("enter the third number\n");
        scanf("%d",&c);

        (a>=b && a>=c)?printf("THE LARGEST NUMBER IS %d\n",a):(b>=c && b>=a)?printf("THE LARGEST NUMBER IS %d\n",b):printf("THE LARGEST NUMBER IS%d\n",c);

        return 0;
}
