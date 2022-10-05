Assignment - 3          [ Decision Control Statements ]   


1. Write a program to check whether a given number is positive or non-positive.

                 #include<stdio.h>
                 #include<conio.h>
                   int main()
                  {
                      int n;
                      printf("Enter a number = ");
                      scanf("%d",&n);
                      if (n>0)
                      {
                         printf("%d is Positive ",n);
                      }
                      else
                      {
                         printf("%d is Non-positive",n);
                      }
                      getch();
                      return 0;
                 }

2. Write a program to check whether a given number is divisible by 5 or not.
 
            #include<stdio.h>
            #include<conio.h>
              int main()
             {
                 int n;
                 printf("Enter a number = ");
                 scanf("%d",&n);
                 if (n%5==0)
                 {
                    printf("%d is divisible by 5",n);
                 } 
                 else
                 {
                   printf("%d is not divisible by 5",n);
                 }
                 getch();
                 return 0;
           }

3. Write a program to check whether a given number is an even number or an odd 
    number.

           #include<stdio.h>
           #include<conio.h>
             int main()
            {
                int n;
                printf("Enter a number = ");
                scanf("%d",&n);
                if (n%2==0)
               {
                  printf("%d is an Even number ",n);
               }
               else
               {
                 printf("%d is an Odd number",n);
               }
               getch();
               return 0;
          }

4. Write a program to check whether a given number is an even number or an odd 
    number without using % operator.

           #include<stdio.h>
           #include<conio.h>
             int main()
             {
                 int n;
                 printf("Enter a Number");
                 scanf("%d",&n);
                 if((n/2)*2==n)
                 {
                    printf("%d is even number",n);
                 }
                 else
                 {
                        printf("%d is odd number",n);
                 }
             }


5. Write a program to check whether a given number is a three-digit number or not.


         #include<stdio.h>
         #include<conio.h>
           int main()
           {
               int a;
               printf("enter a number ");
               scanf("%d",&a);
              if(a>99&&a<1000)
              printf("%d is three digit number",a);
              else
             printf("%d is not three digit number",a);
             getch();
         }

6. Write a program to print greater between two numbers. Print one number of both are 
    the same.


             #include<stdio.h>
             #include<conio.h>
               int main()
               {
                     int a,b,c;
                     printf("\nenter 1st number= ");
                     scanf("%d",&a);
                     printf("\nenter 2nd number= ");
                     scanf("%d",&b);
                     if(a>b)
                          printf("\n%d is greater",a);
                     else
                         printf("\n%d is greater",b);
                    getch();
               }


7. Write a program to check whether roots of a given quadratic equation are real & 
    distinct, real & equal or imaginary roots.


          #include<stdio.h>
          #include<conio.h>
            int main()
            {
                 int a,b,c;
                 int d;
                 printf("Enter the value of ' a 'of Quadaratic equation= ");
                 scanf("%d",&a);
                 printf("Enter the value of ' b ' of Quadratic equation=  ");
                 scanf("%d",&b);
                 printf("Enter the value of ' c ' of Quadratic equation=  ");
                 scanf("%d",&c);

                   d=b*b-4*a*c;
                if (d>0)
               printf("\nThe Root of Quadratic equation is Real and Distinct %d ",d);
               else if(d==0)
               printf("\nThe Root of Quadratic equation is Real and Equal %d",d);
               else
               printf("\nThe Root of Quadratic equation is Imaginary %d",d);
              getch();

         }

8. Write a program to check whether a given year is a leap year or not.

  
             #include<stdio.h>
             #include<conio.h>
               int main()
               {
                    int year;
                    printf("Enter a Year = ");
                    scanf("%d",&year);
                    if(year%100==0)
                    {
                            if(year%400==0)
                            {
                               printf(" %d is a Leap Year",year);
                            }
                            else
                            {
                                 printf("%d is Not a Leap Year",year);
                            }
                    }
                    else
                    {
                           if(year%4==0)
                           {
                                printf("%d is leap year :",year);
                           }
                           else
                           {
                                printf("%d is Not Leap Year :",year);
                           }
                    }
                    return 0;
               }

9. Write a program to find the greatest among three given numbers. Print number once 
    if the greatest number appears two or three times.

           #include<stdio.h>
           #include<conio.h>
             int main()
             {
                     int a,b,c;
                     printf("enter 1st number= ");
                     scanf("%d",&a);
                     printf("enter 2nd number= ");
                     scanf("%d",&b);
                     printf("enter 3rd number= ");
                     scanf("%d",&c);
                     if(a>b&&a>c)
                     {
                            printf("%d is greatest among entered number :",a);
                     }
                     else
                     {
                             if(b>c)
                                       printf("%d is greated among entered number :",b);
                            else
                                      printf("%d is greatest among entered number: ",c);
                     } 
                     return 0;

              }
 
10. Write a program which takes the cost price and selling price of a product from the 
      user. Now calculate and print profit or loss percentage.


                  #include<stdio.h>
                  #include<conio.h>
                    int main()
                    {
                         float sp,cp,profit_percent,loss_percent;
                         printf("\n<>Enter the cost price of Article = ");
                         scanf("%f",&cp);
                         printf("\n<>Enter the selling price of Article=");
                         scanf("%f",&sp);
                         if(sp>cp)
                         {
                            profit_percent =((sp-cp)*100)/cp;
                            printf("\n----The profit percent = %f\n",profit_percent);
                         }
                         else
                         {
                             loss_percent=((cp-sp)*100)/cp;
                             printf("\n-----The loss percent  =%f\n",loss_percent);
                             getch();
                         }
                    }

11. Write a program to take marks of 5 subjects from the user. Assume marks are given 
     out of 100 and passing marks is 33. Now display whether the candidate passed the 
     examination or failed.


           #include<stdio.h>
           #include<conio.h>
             int  main()
             {
                     int m,e,h,p,c;
                     int total_marks,full_marks=500;
                     printf("Enter the math subject marks = ");
                     scanf("%d",&m);
                     printf("Enter the English subject marks= ");
                     scanf("%d",&e);
                     printf("Enter the Hindi subject marks= ");
                     scanf("%d",&h);
                     printf("Enter the Physics subject marks=  ");
                     scanf("%d",&p);
                     printf("Enter the chemistry subject marks= ");
                     scanf("%d",&c);
                     total_marks=m+h+e+p+c;
                     printf("\n\nThe candidate had scored %d out of %d",total_marks,full_marks);
                     if((m>=33&&m<=100)&&(p>=33&&p<=100)&&(c>=33&&c<=100)&&(h>=33&&h<=100)&&(e>=33&&e<=100))
                     {
                          printf("\n\nCandidate is passed :");
                     }
                     else if(m<=100||p<=100||c<=100||h<=100||e<=100)
                     {
                         printf("\n\nYou Entered invalid marks in any one subject or more than one subject :\n ");
                     }
                     else
                    {
                        printf("\n\nCandidate is failed :");
                    }
                    getch();
             }


12. Write a program to check whether a given alphabet is in uppercase or lowercase.

             #include<stdio.h>
             #include<conio.h>
               int main()
               {
                  char n;
                  printf("Enter a character = ");
                  scanf("%c",&n);
                  if (n>=65&&n<=90)
                  {
                      printf("%c is in uppercase",n);
                  }
                  else if(n>=97&&n<=122)
                  {
                     printf("%c is in lowercase",n);
                  }
                  else
                  {
                    printf(" %c invalid character entered",n);
                  }

                   getch();
                   return 0;
               }

13. Write a program to check whether a given number is divisible by 3 and divisible by 2.


                     #include<stdio.h>
                     #include<conio.h>
                       int main()
                       {
                                int n;
                                printf("Enter a Number = ");
                                scanf("%d",&n);
                                if(n%2==0&&n%3==0)
                                {
                                     printf("%d number is divisible by 3 and 2 Both. ",n);
                                }
                                else
                                {
                                    printf("%d number is neither divisible by 3 nor 2.",n);
                                }
                                getch();
                       }

14. Write a program to check whether a given number is divisible by 7 or divisible by 3.


                  #include<stdio.h>
                  #include<conio.h>
                    int main()
                    {
                            int n;
                            printf("Enter a Number = ");
                            scanf("%d",&n);
                            if(n%7==0||n%3==0)
                            {
                            if(n%7==0)
                            printf("%d is divisible by 7",n);
                            else
                            printf("%d is divisible by 3 ",n);
                            }
                            getch();
                    }

15. Write a program to check whether a given number is positive, negative or zero.

               #include<stdio.h>
               #include<conio.h>
                 int main()
                {
                   int n;
                   printf("Enter a number = ");
                   scanf("%d",&n);
                   if (n>0)
                   {
                         printf("%d is Positive ",n);
                   }
                   else if(n==0)
                   {
                       printf("%d is Zero",n);
                   }
                   else
                   {
                       printf("%d is Negative",n);
                   }
                   getch();
                   return 0; 
               }

16. Write a program to check whether a given character is an alphabet (uppercase), an 
      alphabet (lower case), a digit or a special character.


             #include<stdio.h>
             #include<conio.h>
               int main()
               {
                     char c;
                     printf("Enter the character :");
                     scanf("%c",&c);
                     if(c>=65&&c<=90)
                     {
                          printf("\nThe entered character '%c' is in upper case .",c);
                     }
                     else if(c>=97&&c<=122)
                    {
                        printf("\nThe entered character '%c' is in lower case .",c);
                    }
                    else if(c>=0&&c<=9)
                    {
                       printf("\nThe entered character '%c' is in digit",c);
                   }
                   else if((c>=32&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126))
                   {
                       printf("\nThe entered character '%c' is in special character.",c);
                   }
                   else
                       printf("\n Entered character  is Invalid ");
                   getch();
              }

17. Write a program which takes the length of the sides of a triangle as an input. Display 
      whether the triangle is valid or not. 


                #include<stdio.h>
                #include<conio.h>
                  int main()
                  {
                         int a,b,c;
                         printf("Enter the Length of first side of Triangle = ");
                         scanf("%d",&a);
                         printf("\n\nEnter the Length of second side of Triangle= ");
                         scanf("%d",&b);
                         printf("\n\nEnter the Length of third side of Triangle = ");
                         scanf("%d",&c);
                         if((a+b>c)&&(b+c>a)&&(c+a>b))
                         {
                              printf("\n\nThe Triangle is valid :");
                         }
                         else
                        {
                            printf("\n\nThe Triangle is Invalid :");
                        }
                        getch();
                  }

18. Write a program which takes the month number as an input and display number of 
      days in that month.


            #include<stdio.h>
           #include<conio.h>
             int main()
             {
                int n;
                printf("Enter a number of month of the year = ");
                scanf("%d",&n);
                if(n>=1&&n<=12)
                {
                    switch(n)
                {
                case 1:
                          printf("your enter the 1st month.\n\nthe name of this month is January\n");
                          printf("31 days in January\n");
                          break;
               case 2:
                         printf("your enter the 2nd month of the year.\n\nthe name of this month is February:\n");
                         printf("28 days in february");
                         break;
              case 3:
                        printf("you enter the 3rd month of the year.\n\nThe name of this month is March.\n");
                        printf("31 days in March");
                        break;
             case 4:
                        printf("you enter the 4th month of the year.\n\nThe name of this month is April.\n");
                        printf("30 days in April");
                        break;
             case 5:
                      printf("you enter the 5th month of the year.\n\nThe name of this month is May.\n");
                      printf("31 days in May");
                      break;
           case 6:
                       printf("you enter the 6th month of the year.\n\nThe name of this month is June\n");
                       printf("30 days in June.");
                       break;
           case 7:
                       printf("you enter the 7th month of the year.\n\nThe name of this month is July\n");
                       printf("31 days in July.\n");
                       break;
          case 8:
                    printf("you enter the 8th month of the year.\n\nThe name of this month is August ");
                    printf("31 days in August.\n");
                    break;
         case 9: 
                    printf("you enter the 9th month of the year.\n\nThe name of this month is September\n ");
                    printf("30 days in September ");
                    break;
        case 10:
                    printf("you enter the 10th month of the year.\n\nThe name of this month is October\n");
                   printf("31 days in October");
                   break;
        case 11:
                   printf("you enter the 11th month of the year.\n\nThe name of this month is November\n");
                   printf("30 days in November\n");
                   break;
        case 12:
                   printf("you enter the 12th month of the year.\n\nThe name of this month is December\n");
                   printf("31 days in December\n");
                   break;
              }
          }
         else
         {
                   printf("you enter the invalid month Number of The Year :\n");
         }
          getch();
         }













