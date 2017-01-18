/*
   Student Name: Aakash Shrestha
   Subject: Programing Fundamentals
   Roll: 18
   Program: Write a program to find cube of any number using function.
               (function with no argument and no return type)
   Lab:04
   Date:18/01/2017
*/

     #include<stdio.h>
     //include<conio.h>
        void cube();

      int main()
    {
       cube();

      getch();
    }

     void cube()
{

    int n,result;
       printf("Enter the any number: ");
       scanf("%d",&n);

         result=n*n*n;

       printf("Cube of three value is= %d",result);

       getch();
}
