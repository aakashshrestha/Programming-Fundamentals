/*
Student Name: Aakash Shrestha
subject: Programing Fundamentals
Roll: 01
Program: Write a C program to check whether a number is divisible by 5 & 11 or not in ternary operator.
Lab:01
Date:27/09/2016
*/

  #include<stdio.h>
  //#include<conio.h>
      int main()
{
        int a,b;
           printf("Enter the first number\n");
           scanf("%d",&a);

           (a%5==0&&a%11==0)?printf("%d is divisible by 5 & 11\n",a):printf("%d is not divisible by 5 & 11\n",a);

        return 0;
}
