/*
Student Name: Aakash Shrestha
subject: Programing Fundamentals
Roll: 01
Program: Write a program to swap two number without using variable.
Lab:01
Date:14/12/2016
*/

     #include<stdio.h>
     //#include<conio.h>

  int main()
{
    int a,b;

       printf("Enter the 1st number\n");
       scanf("%d",&a);

       printf("Enter the 2nd number\n");
       scanf("%d",&b);

       printf("Before SWAP %d & %d\n",a,b);

       a=a-b;
       b=b+a;
       a=b-a;

       printf("After SWAP the number are %d & %d \n",a,b);

       return 0;

}
