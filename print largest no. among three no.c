/*
   Student Name: Aakash Shrestha
   Subject: Programing Fundamentals
   Roll: 01
   Program: Write a C program to print largest number among three number using if else if ladder.
   Lab:05
   Date:09/12/2016
*/

   #include<stdio.h>
   //include<conio.h>
  int main()
{
     int a,b,c;
        printf("enter the first value\n");
        scanf("%d",&a);

        printf("enter the second value\n");
        scanf("%d",&b);

        printf("enter the third value\n");
        scanf("%d",&c);

        if (a>=b && a>=c)
        {
        printf("THE LARGEST NUMBER IS %d\n",a);
        }
        else if (b>=a && b>=c)
        {
        printf("THE LARGEST NUMBER IS %d\n",b);
        }
        else
        {
        printf("C IS GREATER THEN A&B %d\n",c);
        }

        return 0;

}
