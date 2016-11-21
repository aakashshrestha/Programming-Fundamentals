/*
   Student Name: Aakash Shrestha
   Subject: Programing Fundamentals
   Roll: 01
   Program: Write a C program to print area of triangle.
   Lab:0
   Date:21/11/2016
*/


   #include<stdio.h>
   //#include<math.h>
   //#include<conio.h>
      int main()
   {
      float area,a,b,c,s,e;


         printf("area of triangle\n");
         printf("enter the value of side area\n");
         scanf("%f",&a);

         printf("enter the value of side area\n");
         scanf("%f",&b);

         printf("enter the value of side area\n");
         scanf("%f",&c);

         s=(a+b+c)/2;
         printf("enter the value of s is: %f\n",s);

         e=s*(s-a)*(s-b)*(s-c);
         printf("enter the value of e is: %f\n",e);

         area=pow(e,0.5);
         printf("area=%f",area);

         return 0;

   }
