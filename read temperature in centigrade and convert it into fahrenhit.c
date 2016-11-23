/*
   Student Name: Aakash Shrestha
   Subject: Programing Fundamentals
   Roll: 01
   Program: Write a C program to print area and perimeter of rectangle.
   Lab:05
   Date:23/11/2016
*/

     #include<stdio.h>
     //#include<conio.h>

    int main()
{
      float c,f;
        printf("enter the value of temperature in fahrenhit\n");
        scanf("%f",&c);

        f=((9*c)+160)/5;
        //c=5/9*(f-32);
        printf("the value of temperature of centigrade into fahrenhit= %f",f);

        return 0;
}
