/*
   Student Name: Aakash Shrestha
   Subject: Programing Fundamentals
   Roll: 01
   Program: Write a C program to find area of right angle triangle.
   Lab:04
   Date:01/12/2016
*/

     #include<stdio.h>
     //#include<conio.h>
     #include<math.h>

   void main()
{

       float Area,b,h;
          printf("enter the value of base\n");
          scanf("%f",&b);

          printf("enter the value of height\n");
          scanf("%f",&h);

          Area=0.5*b*h;
          printf("area of right angle triangle=%f",Area);

          getch ();
}
