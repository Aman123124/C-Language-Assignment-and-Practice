ASSIGNMENT:2

1. Write a program to print unit digit of a given number.

         #include<stdio.h>
         #include<conio.h>
           main()
          {
            int a,b;
            printf("Enter a number= ");
            scanf("%d",&a);
            b=a%10;
            printf("The last digit of entered number is =%d",b);
            return 0;
        }

2. Write a program to print a given number without its last digit.

        #include<stdio.h>
        #include<conio.h>
         main()
        {
          int a,b;
          printf("Enter a number= ");
          scanf("%d",&a);
          b=a/10;
          printf("The last digit of entered number is =%d",b);
          return 0;
        }

3. Write a program to swap values of two int variables

        #include<stdio.h>
        #include<conio.h>
         main()
        {
         int a,b,extra;
         printf("\nEnter 1st number= ");
         scanf("%d",&a);
         printf("\nEnter 2nd number= ");
         scanf("%d",&b);
           extra=a;
                  a=b;
                 b=extra;
         printf("AFTER SWAPPING\n");
         printf("First number is = %d\n",a);
         printf("\nSecond number is =%d\n",b);
         return 0;
        }
4. Write a program to swap values of two int variables without using a third variable.

             #include<stdio.h>
             #include<conio.h>
               int main()
               {
                   int a,b;
                   printf("enter the first number ");
                   scanf("%d",&a);
                   printf("enter the second number= ");
                   scanf("%d",&b);
                   printf("After swapping");
                        a=a+b;
                        b=a-b;
                        a=a-b;
                  printf("\nThe first number is = %d",a);
                  printf("\nThe second number is = %d",b);

                } 


5. Write a program to input a three-digit number and display the sum of the digits.


               #include<stdio.h>  
               #include<conio.h>
                 int main()    
                 {    
                       int n,sum=0,m;    
                       printf("Enter a number:");    
                       scanf("%d",&n);    
                       while(n>0)    
                       {    
                            m=n%10;    
                            sum=sum+m;    
                            n=n/10;    
                       }    
                       printf("Sum is=%d",sum);    
                       return 0;  
                 }   

6. Write a program which takes a character as an input and displays its ASCII code.

        #include<stdio.h>
        #include<conio.h>
          int main()
        {
         char a;
         printf("Input  the character from the keyboard = ");
         scanf("%c",&a);
         if(a>=0&&a<=127)
         {
           printf("The ASCII code of Input character is = %d\n",a);
         }
         else
         {
            printf(" You Entered Invalid character input ");
         }
         return 0;
        }

7. Write a program to find the position of first 1 in LSB.

              #include<stdio.h>
              #include<conio.h>
                int main()
                {
                    int x,count=0,result=0;
                    printf("enter a number");
                    scanf("%d",&x);
                    while(x!=0)
                    {
                         result=x&1;
                         count++;
                   if( result==1)
                   {
                         printf("%d position  from LSB we get one(1)",count);
                         break;
                   }
                       x=x>>1;
                   }

              }


8. Write a program to check whether the given number is even or odd using a bitwise
    operator.

                           #include<stdio.h>
                           #include<conio.h>
                             int main()
                             {
                                  int n;
                                  printf("Enter a Number");
                                  scanf("%d",&n);
                                  if((n & 1))
                                  {
                                    printf("%d is odd number",n);
                                  }
                                  else
                                  {
                                    printf("%d is even  number",n);
                                  }
                             }


9. Write a program to print size of an int, a float, a char and a double type variable.

              #include<stdio.h>
              #include<conio.h>
                int main()
                {
                     int x;
                     float y;
                     char t;
                     double k;
                     printf("size of int variable is =%d\n",sizeof(x));
                     printf("size of float variable is= %d\n",sizeof(y));
                     printf("size of char variable is= %d\n",sizeof(t));
                     printf("size of double variable is= %d\n",sizeof(k));
                     getch();

                }


10. Write a program to make the last digit of a number stored in a variable as zero. 
     (Example - if x=2345 then make it x=2340)

                 #include<stdio.h>
                 #include<conio.h>
                   int main()
                   {
                       int x=2345,k;
                       printf("%d this is stored number in a variable\n",x);
                            x=x/10;
                            k=x*10;
                        printf("%d the last digit of number is replace by zero",k);
                        getch();

                   }


11. Write a program to input a number from the user and also input a digit. Append a 
    digit in the number and print the resulting number. (Example - number=234 and 
    digit=9 then the resulting number is 2349)

             #include<stdio.h>
             #include<conio.h>
               int main()
               {
                   int x,z;
                   int y=9;
                   printf("enter a number ");
                   scanf("%d",&x);
                     z=x*10+y;
                  printf("number after append %d = %d",y,z);
                  getch();
               }

12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and 
    convert it into USD.

              #include<stdio.h>
              #include<conio.h>
                int main()
                {

                   int p,x,z=76.23;
                   printf("Enter the Amount in INR = ");
                   scanf("%d",&x);
                         p=x*z;
                   printf("The amount in USD is =%d",p);
                   getch();

              }

13. Write a program to take a three-digit number from the user and rotate its digits by 
     one position towards the right.
   
           #include<stdio.h>
           #include<conio.h>
             int main()
             {
                int x,rem,rotate;
                printf("enter the three digit number");
                scanf("%d",&x);
                rem=x%10;
                rotate=x/10+rem*100;
                printf("number after rotate one position towards the right= %d ",rotate);
                getch();
             } 



























































