/*
Student Name: Aakash Shrestha
subject: Programing Fundamentals
Roll: 01
Program: Write a C program to print Simple Interest.
Lab:01
Date:27/09/2016
*/

   #include<stdio.h>

int main()
{
   int p,t,r,si;

     printf("enter the principle:\n");
     scanf("%d",&p);

     printf("enter the time:\n");
     scanf("%d",&t);

     printf("enter the rate:\n");
     scanf("%d",&r);

     si=p*t*r/100;
     printf("print simple interest=%d",si);

     return 0;
}
