/*
   Student Name: Aakash Shrestha
   Subject: Programing Fundamentals
   Roll: 01
   Program: Write a C program to print area of trapezium.
   Lab:04
   Date:21/11/2016
*/

     #include<stdio.h>
     //#include<conio.h>
        int main()
   {
        float area,a,b,h;


           printf("area of trapezium \n");
           printf("enter value of side a\n");
           scanf("%f",&a);

           printf("enter value of side b\n");
           scanf("%f",&b);

           printf("enter value of side h\n");
           scanf("%f",&h);

           area=0.5*(a+b)*h;
           printf("AREA OF TRAPEZIUM IS = %f",area);

           return 0;
 }

