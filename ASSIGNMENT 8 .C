assignment :  8


Q.1       *
          **
          ***
          ****
          *****


#include<stdio.h>
#include<conio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
          printf("*");
        }
        printf("\n");
    }
    getch();
}


Q.2               *
                 **
                ***
               ****
              *****


#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=5;j++)
       {
           if(j>=6-i)
           {
              printf("*");
           }
           else
           {
               printf(" ");
           }
       }
       printf("\n");
   }

}


Q.3          *****
             ****
             ***
             **
             *

#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j;
   for(i=5;i>=1;i--)
   {
      for(j=1;j<=i;j++)
      {
          printf("*");
      }
      printf("\n");
    }
}

Q.4         * * * * * 
              * * * *
                * * * 
                  * * 
                    *
         

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
      for(j=1;j<=5;j++)
      {
          if(j>=i)
          {
              printf("*");
          }
          else
          {
              printf(" ");
          }
      }
      printf("\n");
    }
}
    
           


Q.5                *
                 ***
               *****
             *******
           *********

#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
      for(j=1;j<=9;j++)
      {
          if(j>=6-i&&j<=4+i)
            printf("*");
         else
            printf(" ");
      }
      printf("\n");
    }
}


Q.6          * * * * * * * * * 
               * * * * * * * 
                 * * * * * 
                   * * * 
                     *

int main()
{
    int i,j;
    int k=10;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<10;j++)
        {
            if(j>=i&&j<=10-i)
             printf("*");
             else
                printf(" ");
        }
        printf("\n");
    }
}



  
Q.7        * * * * * * * * * * 
           * * * *     * * * * 
           * * *         * * * 
           * *             * *
           *                 *

int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=10;j++)
        {
            if(j<=6-i || j>=5+i)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
}




Q.8                    1
                     1 2 1
                   1 2 3 2 1
                 1 2 3 4 3 2 1


int main()
{
    int i,j;
    int count;
    for(i=0;i<=3;i++)
    {
        count =0;
        for(j=0;j<(3-i);j++)
            printf(" ");
        for(j=0;j<=i;j++)
            printf("%d",++count);
            count--;
            while(count)
                printf("%d",count--);
            printf("\n");
    }
}


Q.9       1 2 3 4 3 2 1
            1 2 3 2 1
              1 2 1
                1








Q.10           1 2 3 4 3 2 1
               1 2 3   3 2 1
               1 2       2 1 
               1           1      



#include <stdio.h>
int main()
{
    int lines;
    printf("Enter how many lines you want to print: ");
    scanf("%d", &lines);
    int k;
    for (int i = 1; i <= lines; i++)
    {
        k = 1;
        for (int j = 1; j <= lines * 2 - 1; j++)
        {
            if (j <= lines + 1 - i || j >= lines - 1 + i)
            {
                if (j <= lines + 1 - i)
                {
                    printf("%d", k++);
                    if(j==lines+1-1)
                       k = j; 
                }
                else
                    printf("%d", --k);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}





Q.11                        A
                          A B A
                        A B  C B A
                      A B  C D C B A
                    A B C D E  D C B A
                


 


Q.12            A B C D C B A
                  A B C B A
                    A B A
                      A








Q.13              A B C D E F G F E D C B A
                  A B C D E F   F E D C B A
                  A B C D E       E D C B A 
                  A B C D           D C B A
                  A B C               C B A
                  A B                   B A
                  A                       A 


#include <stdio.h>
int main()
{
    int lines;
    printf("Enter how many lines you want to print: ");
    scanf("%d", &lines);
    for (int i = 1; i <= lines; i++)
    {
        int k = 'A';
        for (int j = 1; j <= lines * 2 - 1; j++)
        {
            if (j <= (lines + 1) - i || j >= (lines - 1) + i)
            {
                printf("%c", k);
                j < lines ? k++ : k--;
            }
            else
            {
                printf(" ");
                if (j == 4)
                    k--;
            }
        }
        printf("\n");
    }
    return 0;
}




Q.14          *
              * *
              *   *
              *     *
              * * * * * 


#include <stdio.h>
int main()
{
    int i, j, n;
    printf("How many lines of triangle you want to print: ");
    scanf("%d", &n);
    int k;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if (j == 1 || j == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        if(i==n)
          for(int k=1; k<=n; k++)
             printf("*"); 
    }
    return 0;
}




Q.15                  * 
                     *  *  
                  *     *
                *       *
              * * * * * 
 
int main()
{
    int i, j, n;
    printf("How many lines of triangle you want to print: ");
    scanf("%d", &n);
    int k;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <=2*n-1; j++)
        {
            if (j == 6-i || j == 4+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        if(i==n)
          for(int k=1; k<=2*n-1; k++)
             printf("*"); 
    }
    return 0;
}


       
Q.16                   *
                     *   * 
                   *       *
                 *           * 
               * * * * * * * * * 


#include <stdio.h>
int main()
{
    int i, j, n;
    printf("How many lines of triangle you want to print: ");
    scanf("%d", &n);
    int k;
    for (i = 1; i <= n; i++)
    {
        for (int j = 1; j <=2*n-1; j++)
        {
            if (j == n+1-i || j == n-1+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
        if(i==n)
          for(int k=1; k<=2*n-1; k++)
             printf("*"); 
    }
    return 0;
}





Q.17      * * * * * * * * *
            *           *
              *       *
                *   *
                  *







Q.18                                          *
                                            * * *
                                          * * * * *
                                        * * * * * * * 
                                      * * * * * * * * * 
                                        * * * * * * *
                                          * * * * *
                                            * * *
                                              *


#include <stdio.h>
int main()
{
    int i, j, n;
    printf("How many lines of triangle you want to print: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i <= n / 2 + 1)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j >= n/2+2 - i && j <= n/2 + i)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j >= i-n/2 && j <=(n-(i-(n/2+1))))
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
