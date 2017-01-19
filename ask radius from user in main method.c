/*
   Student Name: Aakash Shrestha
   Subject: Programing Fundamentals
   Roll: 01
   Program: Write a program to ask radius from user in main() method and pass it to function area() and calculate area of circle in the function and display the result.
   Lab: 18
   Date: 18/01/2016
*/


     #include<stdio.h>
     #define pi 3.14

      void radius(int r);

   int main()
{
   int r;
      printf("Enter the value of radius:");
      scanf("%d",&r);

      radius (r);

      getch();
}
   void radius(int r)
 {
    float area;

    area=pi*r*r;

      printf("The Area of circle is %f",area);
 }
