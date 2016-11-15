/*
Student Name: Aakash shrestha
Subject: Programming Fundamentals
Roll no: 01
Program: Write a program to ptint sum of three numbers.
Lab no: 04
Date: 2016/9/19
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
void main(){
	
	float radius,area,circumference;
	printf("Enter radius of circle:");
	scanf("%f",&radius);
	area = 2* pi*pow(radius,2);
	printf("The area of circle is:%f",area);
	circumference = 2*pi*radius;
	printf("The circumference of circle is:%f",circumference);
	getch();
}
