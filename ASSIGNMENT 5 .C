ASSIGNMENT 5

1. Write a program to print MySirG N times on the screen.

          #include<stdio.h>
          #include<conio.h>
            int main()
            {
                 int n;
                 printf("enter a number");
                 scanf("%d",&n);
                 for(int i=1;i<=n;i++)
                 printf("MySirG\n");
            }

2. Write a program to print the first N natural numbers.

          #include<stdio.h>
          #include<conio.h>
            int main()
            {
                int n;
                printf("enter a number");
                scanf("%d",&n);
                for(int i=1;i<=n;i++)
                printf("%d\n",i);
           }

3. Write a program to print the first N natural numbers in reverse order.

            #include<stdio.h>
            #include<conio.h>
              int main()
              {
                    int n;
                    printf("enter a number");
                    scanf("%d",&n);
                    for(int i=n;i>=1;i--)
                    printf("%d\n",i);
              }

4. Write a program to print the first N odd natural numbers.


           #include<stdio.h>
           #include<conio.h>
             int main()
             {
                int n;
                printf("enter a number");
                scanf("%d",&n);
                for(int i=1;i<=n;i+=2)
                    printf("%d\n",i);
            }

5. Write a program to print the first N odd natural numbers in reverse order.

          #include<stdio.h>
          #include<conio.h>
            int main()
            {
                  int n;
                  printf("enter a number");
                  scanf("%d",&n);
                  printf("The %d Odd Natural Number in Reverse Order:\n",n);
                  for(int i=n;i>=1;i-=2)
                  printf("%d\n",i);
            }

6. Write a program to print the first N even natural numbers.

           #include<stdio.h>
           #include<conio.h>
             int main()
             {
                   int n;
                   printf("Enter a number = ");
                   scanf("%d",&n);
                   printf("The %d Even Natural Number is :\n",n);
                   for(int i=2;i<=n;i+=2)
                     printf("%d\n",i);
             }  

7. Write a program to print the first N even natural numbers in reverse order.


               #include<stdio.h>
               #include<conio.h>
                 int main()
                 {
                       int n;
                       printf("Enter a number = ");
                       scanf("%d",&n);
                       printf("The %d Even Natural Number is :\n",n);
                       for(int i=n;i>=2;i-=2)
                          printf("%d\n",i);
                }


8. Write a program to print squares of the first N natural numbers.

                #include<stdio.h>
                #include<conio.h>
                  int main()
                  {
                        int n,k;
                        printf("Enter a number = ");
                        scanf("%d",&n);
                        printf("The square of %d Natural Number is :\n",n);
                        for(int i=1;i<=n;i++)
                        {
                                k= i*i;
                                printf("%d\n",k);
                        }
                  }

9. Write a program to print cubes of the first N natural numbers.

                 #include<stdio.h>
                 #include<conio.h>
                   int main()
                  {
                        int n,k;
                        printf("Enter a number = ");
                        scanf("%d",&n);
                        printf("The cubes of %d Natural Number is :\n",n);
                        for(int i=1;i<=n;i++)
                        {
                            k= i*i*i;
                            printf("%d\n",k);
                       }
                   }

10. Write a program to print a table of N.

             #include<stdio.h>
             #include<conio.h>
               int main()
               {
                      int n,k;
                      printf("Enter a number = ");
                      scanf("%d",&n);
                      printf("The table of entered number is %d :\n",n);
                      for(int i=1;i<=10;i++)
                      {
                           k= n*i;
                           printf("%d\n",k);
                      }
                }











