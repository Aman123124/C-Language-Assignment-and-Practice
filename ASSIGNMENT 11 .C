Assignment  11 


1. Write a function to calculate LCM of two numbers. (TSRS)

int main()
{
    int a,b,p;
    printf("Enter 1st number = ");
    scanf("%d",&a);
    printf("Enter 2nd number = ");
    scanf("%d",&b);
    p=lcm(a,b);
    printf("The LCM of %d and %d is %d ",a,b,p);
}
int lcm(int x, int y)
{
    int i;
    for(i=1;i<=x*y;i++)
   {
      if(i%x==0&&i%y==0)
      break;
   }
   return i;
}


2. Write a function to calculate HCF of two numbers. (TSRS)


int main()
{
    int a,b,s;
    printf("Enter 1st number = ");
    scanf("%d",&a);
    printf("Enter 2nd number = ");
    scanf("%d",&b);
    s=hcf(a,b);
    printf("The HCF of %d and %d is = %d",a,b,s);
}
int hcf(int x, int y)
{
    int i,h;
    for(i=1;i<=x*y;i++)
   {
      if(i%x==0&&i%y==0)
      break;
   }
   h=(x*y)/i;
   return h;
}


3. Write a function to check whether a given number is Prime or not. (TSRS)


int main()
{
    int a,s;
    printf("Enter a number = ");
    scanf("%d",&a);
    s=prime(a);
    if(s==a)
    {
        printf("%d is prime number",a);
    }
    else
    {
       printf("%d is not prime number",a);
    }
}
int prime(int x)
{
    int i;
    for(i=2;i<=x-1;i++)
       {
           if(x%i==0)
            break;
        }
        if(i==x)
        return i;
}



4. Write a function to find the next prime number of a given number. (TSRS)

    int main()
    {
        int a,storage;
        printf("enter a number = ");
        scanf("%d",&a);
        storage=next_prime(a);
        printf("The next prime of %d is = %d",a,storage);

    }
    int next_prime(int x)
    {
        int i,j;
         for(i=x+1;i<=x+15;i++)
         {
           for(j=2;j<i;j++)
           {
               if(i%j==0)
               break;
           }
               if(i==j)
               break;
          }
          return j;
    }


5. Write a function to print first N prime numbers (TSRN)


#include <stdio.h>

int firstNPrime(int n)
{
    int i = 1, j;
    while (n)
    {
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j - 1 == i / 2)
        {
            printf("%d ", i);
            n--;
        }
        i++;
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    firstNPrime(n);
    return 0;
}





6. Write a function to print all Prime numbers between two given numbers. (TSRN)


#include <stdio.h>
#include <math.h>
void prime(int x, int y)
{
    int i, j;
    for (i = x; i <= y; i++)
    {
        for (j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j - 1 == i/2)
            printf("%d ", i);
    }
}
int main()
{
    int a, b;
    printf("Enter the two number: ");
    scanf("%d%d", &a, &b);
    prime(a, b);
    return 0;
}





7. Write a function to print first N terms of Fibonacci series (TSRN)

#include<stdio.h> 
void fibo(int n)
{
    if(n==1)
       printf("0 "); 
    else if(n==2)
       printf("0 1"); 
    else 
    {
        int x=0,y=1; 
        printf("0 1 "); 
        for(int i=3; i<=n; i++)
        {
            int sum = x+y; 
            x = y; 
            y = sum; 
            printf("%d ",sum); 
        }
    }
}
int main()
{
    int term; 
    printf("How many terms you want to print: "); 
    scanf("%d",&term); 
    fibo(term); 
    return 0; 
}





8. Write a function to print PASCAL Triangle. (TSRN)

#include <stdio.h>
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

void pascalTriangle(int lines)
{
    int k,col; 
    for (int i = 1; i <= lines; i++)
    {
        k = 1,col=0; 
        for (int j = 1; j < 2 * lines; j++)
        {
            if (k && j >= (lines + 1) - i && j <= (lines - 1) + i)
            {
                printf("%d ",fact(i-1)/(fact(i-1-col)*fact(col))); 
                col++; 
                k = 0;
            }
            else
            {
                printf("  ");
                k = 1;
            }
        }
        printf("\n");
    }
}
int main()
{
    int lines;
    printf("How many lines you want to print: ");
    scanf("%d", &lines);
    pascalTriangle(lines);
    return 0;
}



9. Write a program in C to find the square of any number using the function.

int main()
{
    int a;
    printf("Enter a number = ");
    scanf("%d",&a);
    sqr(a);
}
void sqr(int x)
{
    int s;
    s=x*x;
    printf("The Square of %d is = %d ",x,s);
}


10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the
     function.


#include<stdio.h>
int fact(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact *= i;
    return fact;
}
int sumOfTheSeries(int term)
{
    int sum = 0;
    for (int i = 1; i <= term; i++)
    {
        sum += fact(i) / i;
    }
    return sum;
}
int main()
{
    int term;
    printf("How many terms sum you need: ");
    scanf("%d", &term);
    printf("Sum is: %d", sumOfTheSeries(term));
    return 0;
}











