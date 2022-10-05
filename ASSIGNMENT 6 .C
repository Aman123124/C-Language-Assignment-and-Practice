ASSIGNMENT - 6

1. Write a program to calculate sum of first N natural numbers.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("Enter a Number = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     sum=sum+i;
    }
    printf("\n\nThe Sum of N natural Number is = %d",sum );
    getch();
}


2. Write a program to calculate sum of first N even natural numbers.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("Enter a Number = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
           sum=sum+i;
        }
    }
    printf("\n\nThe Sum of first N even natural Number is = %d",sum );
    getch();
}


3. Write a program to calculate sum of first N odd natural numbers.


#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("Enter a Number = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
           sum=sum+i;
        }
    }
    printf("\n\nThe Sum of first N odd Natural Number is = %d",sum );
    getch();
}


4. Write a program to calculate sum of squares of first N natural numbers.


#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("Enter a Number = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       sum=sum+i*i;
    }
    printf("\n\nThe Sum of square of first N natural Number is = %d",sum );
    getch();
}


5. Write a program to calculate sum of cubes of first N natural numbers.


#include<stdio.h>
#include<conio.h>
int main()
{
    int n,sum=0;
    printf("Enter a Number = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       sum=sum+i*i*i;
    }
    printf("\n\nThe Sum of cubes of first N natural Numbers is = %d",sum );
    getch();
}


6. Write a program to calculate factorial of a number.


#include<stdio.h>
#include<conio.h>
int main()
{
    int n,s=1;
    printf("Enter a Number = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       s=s*i;
    }
    printf("\n\nThe Factorial of %d is = %d",n,s );
    getch();
}


7. Write a program to count digits in a given number.


#include<stdio.h>
#include<conio.h>
int main()
{
    int n,count=0,rem;
    printf("Enter a Number = ");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        count++;
    }
    printf("\n\nEntered number is %d digit number",count);

}


8. Write a program to check whether a given number is a Prime number or not.


#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter a Number = ");
    scanf("%d",&n);
       for(i=2;i<=n-1;i++)
       {
           if(n%i==0)
            break;
        }
        if(i==n)
            printf("\n\n ' %d 'is a prime ",n);
        else
            printf(" '%d' is not a prime number  ",n);
   getch();
}


9. Write a program to calculate LCM of two numbers.


#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b,i;
   printf("Enter 1st number = ");
   scanf("%d",&a);
   printf("\n\nEnter 2nd number= ");
   scanf("%d",&b);
   for(i=1;i<=a*b;i++)
   if(i%a==0&&i%b==0)
     break;
    printf("\n\nThe LCM of %d and %d is = %d",a,b,i);

    getch();

}


10. Write a program to reverse a given number.

       #include<stdio.h>
      #include<conio.h>
        int main()
        {
             int x,rem,reverse=0;
             printf("enter a number ");
             scanf("%d",&x);
             while(x!=0)
             {
                 rem=x%10;
                 reverse=reverse*10+rem;
                 x=x/10;
            }
            printf("The Reverse of a number is =%d",reverse);
            getch();
        }









