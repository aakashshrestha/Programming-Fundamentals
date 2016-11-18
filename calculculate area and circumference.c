/*
Student Name: Aakash Shrestha
subject: Programing Fundamentals
Roll: 01
Program: Write a program to calculate area and circumference of circle having radius r from the user.
Lab:01
Date:18/11/2016
*/

   #include<stdio.h>
   #define pi 3.14

int main()
{
    float r,area,circum;

      printf("enter the radius:\n");
      scanf("%f",&r);

      area=pi*r*r;
      circum=2*pi*r;

      printf("\n area of circle=%d",area);
      printf("\n circum of circle=%d",circum);

      return 0;
}
