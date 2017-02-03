/*
   Student Name: Aakash Shrestha
   Subject: Programing Fundamentals
   Roll: 01
   Program: Write a C program to find multi dimensional array.
   Lab:24
   Date:03/02/2017
*/

#include<stdio.h>

   int main()
{
    int array[2][2]={1,2,3,4},i,j;

     for(i=0;i<2;i++)

    {
        for(j=0;j<2;j++)
    {


       printf("%d\t",array[i][j]);

    }
       printf("\n");
    }
   return 0;
}
