/*
   Student Name: Aakash Shrestha
   Subject: Programing Fundamentals
   Roll: 01
   Program: Write a C program to read temperature in fahrenhit and convert it into centigrade.
   Lab:04
   Date:23/11/2016
*/

   #include<stdio.h>
   //#include<conio.h>
  int main()
{
        float f,c;
        printf("enter the value of temperature in fahrenhit\n");
        scanf("%f",&f);

        c=0.55*(f-32);
        //c=5/9*(f-32);
        printf("the value of temperature of fahrenhit into centigrade=%f",c);

        return 0;
}
