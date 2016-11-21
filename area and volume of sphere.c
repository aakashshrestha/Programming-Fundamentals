/*
   Student Name: Aakash Shrestha
   Subject: Programing Fundamentals
   Roll: 01
   Program: Write a C program to print area and volume of sphere.
   Lab:04
   Date:21/11/2016
*/

     #include<stdio.h>
     #include<math.h>
     //include<conio.h>

   int main()
   {
      float r,area,volume;
      printf("enter the value of r\n");
      scanf("%f",&r);

      //area=4*3.14*r*r;
      area=4*3.14*pow(r,2);

      //volume=4/3*3.14*r*r*r;
      volume=(1.33)*3.14*pow(r,3);

      printf("AREA OF SPHERE=%f\n",area);
      printf("AREA OF SPHERE=%f\n",volume);

      return 0;

 }
