/*
   Student Name: Aakash Shrestha
   Subject: Programing Fundamentals
   Roll: 01
   Program: Write a C program to check odd or even number using ternary operator.
   Lab:05
   Date:12/09/2016
*/

   #include<stdio.h>
   //include<conio.h>
  int main()
{
     int a;
        printf("enter the first number\n");
        scanf("%d",&a);

        if (a%2==0)
        {
        printf("THE NUMBER IS EVEN\n");
        }
        else
        {
        printf("THE GIVEN NUMBER IS ODD\n");
        }

        return 0;
}
