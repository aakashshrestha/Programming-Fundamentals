/*
Student Name: Aakash Shrestha
subject: Programing Fundamentals
Roll: 01
Program: Write a program to display the following patterns.
Lab:01
Date: 16/01/2017
*/

   #include<stdio.h>
   #include<conio.h>

     int main()
{
   int i,j,n;

         printf("enter the number of rows: ");
         scanf("%d",&n);

         for(i=1;i<=n;i++)
         {
                for(j=1;j<=i;j++)

                 {
                     printf("%d",j);
                 }
             printf("\n");
         }
         getch();
}
