/*
Student Name: Aakash Shrestha
subject: Programing Fundamentals
Roll: 01
Program: Write a C program to check character assigned from user is vowel or not.
Lab:14
Date:21/12/2016
*/
   #include<stdint.h>
   //#include<conio.h>

int main()
{
     char c;
        printf("Enter any character\n");
        scanf("%c",&c);

        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            printf("%c is a vowel",c);
        }
        else

        {
            printf("%c is not vowel",c);
        }

   return 0;
}
