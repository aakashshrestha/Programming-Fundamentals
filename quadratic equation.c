/*
   Student Name: Aakash Shrestha
   Subject: Programing Fundamentals
   Roll: 01
   Program: Write a C program to find roots of quadratic equation value are assigned from user.
   Lab:05
   Date:23/11/2016
*/

     #include<stdio.h>
     #include<math.h>
     //include<conio.h>

   int main()
{
    float a,b,c,x,y,e;
      printf("enter the value of a=\n");
      scanf("%f",&a);

      printf("enter the value of b=\n");
      scanf("%f",&b);

      printf("enter the value of c=\n");
      scanf("%f",&c);

      e=b*b-4*a*c;
      printf("value of e=\n",e);

      x=pow(e,2)/2*a;
      y=-(pow(e,2)/2*a);
      printf("quadratic equation if value is positive=%f\n",x);
      printf("quadratic equation if value is negative=%f\n",y);

      return 0;
}
