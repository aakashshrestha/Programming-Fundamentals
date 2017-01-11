/*
Name:Aakash Shrestha
Subject: Programming Fundamental
Roll no.: 02
LAb Sheet: 17
Program: Write a program to enter 4 digits and,
            1. display the result by dividing the number by 10
            2. divide it by another number asked from user
            3. display the remainder by dividing number by 10
Date: 2017-01-11
*/

#include<stdio.h>
//#include<conio.h>

int main()
{
    int a,div,b,di,d;

        printf("Enter a four digit number\n");
        scanf("%d",&a);

        div=a/10;

        printf("The dividend is :%d",div);

        printf("Enter the second number\n");
        scanf("%d",&b);

        di=div/b;

        printf("The devidend is %d\n",di);

        d=di%10;

        printf("The remainder is %d\n",d);

        return(0);
}
