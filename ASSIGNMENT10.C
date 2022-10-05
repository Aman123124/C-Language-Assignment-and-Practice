Assignment 10  


1. Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>
#include<conio.h>
float area(float r);
int main()
{
    float n,g;
    printf("Enter a number = ");
    scanf("%f",&n);
    g=area(n);
    printf("The area of circle is = %0.2f",g);
    getch();
}
float area(float r)
{
    return 3.14*r*r;

}


2. Write a function to calculate simple interest. (TSRS)


#include<stdio.h>
#include<conio.h>
float fun(int m,float a,float i);
int main()
{
    int t;
    float p,r,u;
    printf("Enter the principal = ");
    scanf("%f",&p);
    printf("Enter the rate of Interest per annum = ");
    scanf("%f",&r);
    printf("Enter the time = ");
    scanf("%d",&t);
    u=fun(p,r,t);
    printf("The Simple Interest is = %0.3f",u);
    getch();

}
float fun(int m,float a,float i)
{
   return m*a*i/100;
}


3. Write a function to check whether a given number is even or odd. Return 1 if the
    number is even, otherwise return 0. (TSRS)


#include<stdio.h>
#include<conio.h>
int function(int a);
int main()
{
    int n,l;
    printf("Enter a number = ");
    scanf("%d",&n);
    l=function(n);
    printf("return value = %d",l);
   getch();
}
int function(int a)
{
    if(a%2==0)
        return 1;
    else
        return 0;
}


4. Write a function to print first N natural numbers (TSRN)


#include<stdio.h>
#include<conio.h>
void function(int a);
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    function(n);
    getch();

}
void function(int a)
{
    for(int i=0;i<=a;i++)
    {
        printf("%d  ",i);
    }
}


5. Write a function to print first N odd natural numbers. (TSRN)


#include<stdio.h>
#include<conio.h>
void func(int a);
int main()
{
    int n;
    printf("Enter a number = ");
    scanf("%d",&n);
    func(n);
    getch();

}
void func(int a)
{
    for(int i=0;i<=a;i++)
    {
        if(i%2!=0)
        printf("%d  ",i);
    }
}


6. Write a function to calculate the factorial of a number. (TSRS)


#include<stdio.h>
#include<conio.h>
int fact(int a);
int main()
{
    int n,s;
    printf("Enter a number = ");
    scanf("%d",&n);
    s=fact(n);
    printf("The Factorial %d is = %d",n,s);
    getch();
}
int fact(int a)
{
    int m=1;
    for(int i=1;i<=a;i++)
    {
        m=m*i;
    }
    return m;
}


7. Write a function to calculate the number of combinations one can make from n items
    and r selected at a time. (TSRS)


float comb(int n , int r );
int main()
{
   int a,b;
   printf("enter the value of n = ");
   scanf("%d",&a);
   printf("enter the value of r = ");
   scanf("%d",&b);
   if(a>b)
   {
   float s=comb(a,b);
   printf("The Result is = %0.4f",s);
   getch();
   }
   else
   {
       printf("the value of 'R' is greater than value of 'N' ");
       getch();
   }
}
float comb(int n , int r )
{
    int c;
    c=fact(n)/(fact(r)*fact(n-r));
    return c;
}
int fact(int f)
{
    int v=1;
    for(int i=1;i<=f;i++)
    {
        v=v*i;
    }
    return v;
}



8. Write a function to calculate the number of arrangements one can make from n items
    and r selected at a time. (TSRS)


int fact(int f);
float per(int n, int r);
int main()
{
    int a,b;
    printf("enter the value of N = ");
    scanf("%d",&a);
    printf("\nenter the value of R = ");
    scanf("%d",&b);
    if(a>b)
    {
     float r=per(a,b);
     printf("\nThe Result is =%f ",r);
     getch();
    }
    else
        {
            printf("The value of N is less tha R");
            getch();
        }
}
float per(int n, int r)
{
   return fact(n)/fact(r);
}
int fact(int f)
{
    int k=1;
    for(int i=1;i<=f;i++)
    {
        k=k*i;
    }
    return k;
}


9. Write a function to check whether a given number contains a given digit or not.(TSRS)


#include<stdio.h>
#include<conio.h>
int func(int n,int d);
int main()
{
    int a,b,s;
    printf("Enter a number = ");
    scanf("%d",&a);
    printf("Enter a digit = ");
    scanf("%d",&b);
    s=func(a,b);
    if(s==b)
    {
        printf("%d contains entered digit :",a);
    }
    else
    {
        printf("%d doesn't contains entered digit :",a);
    }
    getch();
}
int func(int n,int d)
{
    int rem;
    while(n!=0)
    {
    rem=n%10;
    n=n/10;
    if(rem==d)
        break;
    }
    if(rem==d)
    return rem;
    else
        return 0;

}


10. Write a function to print all prime factors of a given number. For example, if the
     number is 36 then your result should be 2, 2, 3, 3. (TSRN)


#include<stdio.h>
#include<conio.h>
void prime_fact(int n);
int main()
{
    int a;
    printf("Enter a number = ");
    scanf("%d",&a);
    prime_fact(a);

}
void prime_fact(int n)
{
    int i;
    for(i=2;n!=1;i++)
    {
         while(n%i==0)
         {
             n=n/i;
             printf("%d ,",i);
         }
    }

}

