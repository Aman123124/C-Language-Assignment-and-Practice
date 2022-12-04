ASSIGNMENT 4:

1. Write a program to print MySirG 5 times on the screen.

         #include<stdio.h>
         #include<conio.h>
           int main()
           {
              for(int i=1;i<=5;i++)
              printf("\nMySirG");
           }

2. Write a program to print the first 10 natural numbers.

             #include<stdio.h>
             #include<conio.h>
               int main()
               {
                    for(int i=1;i<=10;i++)
                    printf("%d\n",i);
               }

3. Write a program to print the first 10 natural numbers in reverse order.

              #include<stdio.h>
              #include<conio.h>
                int main()
                {
                    for(int i=10;i>=1;i--)
                    printf("%d\n",i);
                }

4. Write a program to print the first 10 odd natural numbers.

            #include<stdio.h>
            #include<conio.h>
              int main()
             {
                  for(int i=1;i<=20;i+=2)
                  printf("%d\n",i);
             }

5. Write a program to print the first 10 odd natural numbers in reverse order.

         #include<stdio.h>
         #include<conio.h>
           int main()   
           {
               for(int i=20;i>=1;i--)
              if(i%2!=0)
              printf("%d\n",i);
           }

6. Write a program to print the first 10 even natural numbers.

          #include<stdio.h>
          #include<conio.h>
            int main()
            {
                 printf("\nThe first 10 even natural numbers\n");
                 for(int i=1;i<=20;i++)
                 if(i%2==0)
                 printf("%d\n",i);
          }


7. Write a program to print the first 10 even natural numbers in reverse order.

       #include<stdio.h>
       #include<conio.h>
         int main()
         {
            printf("\nThe first 10 even natural numbers\n");
            for(int i=20;i>=1;i--)
            if(i%2==0)
           printf("%d\n",i);
        }

8. Write a program to print squares of the first 10 natural numbers.

        #include<stdio.h>
        #include<conio.h>
          int main()
          {
              int s;
              for(int i=1;i<=10;i++)
              {
                 s=i*i;
                printf("%d\n",s);
              }

          }

9. Write a program to print cubes of the first 10 natural numbers.

         #include<stdio.h>
         #include<conio.h>
           int main()
           {
                int s;
               for(int i=1;i<=10;i++)
               {
                   s=i*i*i;
                   printf("%d\n",s);
               }

           }

10. Write a program to print a table of 5.

        #include<stdio.h>
        #include<conio.h>
          int main()
          {
             int s;
             printf("The table of 5 is :\n");
             for(int i=1;i<=10;i++)
             {
                 s=5*i;
                 printf("%d\n",s);
             }
 
          }   










