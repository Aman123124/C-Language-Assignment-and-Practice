ASSIGNMENT 7


1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
#include<conio.h>
int main()
{
 int n1=0,n2=1,n3,i,number;
 printf("Enter the number:");
 scanf("%d",&number);
 for(i=3;i<number;++i)
 {
  n3=n1+n2;
  n1=n2;
  n2=n3;
 }
   printf(" nth term of fibonacci series is =%d",n3);
  return 0;
 }


2. Write a program to print first N terms of Fibonacci series.

#include<stdio.h>    
#include<conio.h>
int main()    
{    
 int n1=0,n2=1,n3,i,number;    
 printf("Enter the number of elements:");    
 scanf("%d",&number);    
 printf("\n%d %d",n1,n2);
 for(i=2;i<number;++i)
 {    
  n3=n1+n2;    
  printf(" %d",n3);    
  n1=n2;    
  n2=n3;    
 }  
  return 0;  
 }    


3. Write a program to check whether a given number is there in the Fibonacci series or not.

int main()
{
    int n,i;
    int n1=0,n2=1,n3;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        n3=n1+n2;
        if(n3==n)
           break;
        n1=n2;
        n2=n3;
    }
    if(n==n3)
    {
        printf("\n%d is in fibonacci series:",n);
    }
    else
    {
        printf("\n%d is not in fibonacci series:",n);
    }
    getch();

}


4. Write a program to calculate HCF of two numbers.

    
#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b,i,h;
   printf("Enter 1st number = ");
   scanf("%d",&a);
   printf("\n\nEnter 2nd number= ");
   scanf("%d",&b);
   for(i=1;i<=a*b;i++)
   {
      if(i%a==0&&i%b==0)
      break;
   }
   h=(a*b)/i;
   printf("The HCF %d and %d is = %d",a,b,h);
   getch();

}

5. Write a program to check whether two given numbers are co-prime numbers or not.

#include<stdio.h>
#include<conio.h>
int main()
{
   int a,b,i,h;
   printf("Enter 1st number = ");
   scanf("%d",&a);
   printf("\n\nEnter 2nd number= ");
   scanf("%d",&b);
   for(i=1;i<=a*b;i++)
   {
      if(i%a==0&&i%b==0)
      break;
   }
   h=(a*b)/i;
   if(h==1)
   {
       printf("\n%d and %d is co-prime number .\n",a,b);
       printf("\n=>Becasue the HCF %d and %d is  1.\n",a,b);
   }
   else
   {
       printf("\n%d and %d is not co-prime .\n",a,b);
       printf("\n=>Because the HCF of %d and %d is not  1.\n",a,b);
   }

   getch();

}


6. Write a program to print all Prime numbers under 100.

int main()
{
    int a,b,i,j;
    for(i=1;i<=100;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            printf("%d ",i);
    }
    getch();
}



7. Write a program to print all Prime numbers between two given numbers.


int main()
{
    int a,b,i,j;
    printf("enter 1st number = ");
    scanf("%d",&a);
    printf("enter 2nd number=");
    scanf("%d",&b);
    for(i=a+1;i<=b-1;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            printf("%d ",i);
    }
    getch();
}


8. Write a program to find next Prime number of a given number.


int main()
{
    int i;
    int n,j;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=n+1;i<=n+15;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
            break;
    }
    printf("\nyou entered = %d ",n);
    printf("\nThe next prime no of entered number is =%d",i);
    getch();
}



9. Write a program to check whether a given number is an Armstrong number or not.

int main()
{
    int num,d,i=1,remainder,digit,r,s=0,g=1;
    printf("enter a number = ");
    scanf("%d",&num);
    int nt=num;
    printf("\nentered number is = %d ",nt);
    digit=func(num);
    printf("\n\ntotal numbers of digits in entered number is %d :::",digit);
    while(g<=digit)
         {
              remainder=nt%10;
              r=remainder*remainder;
              while(i<=1)
              {
                   remainder=remainder*r;
                   break;
              }
              s=s+remainder;
              nt=nt/10;
              g++;
         }
         printf("\n\n%d not equal to %d\n",s,num);
         if(s==num)
         {
             printf("\n\nentered number is armstrong number >>>");
         }
         else
         {
             printf("\n\nentered number is not armstrong number>>>");
         }
getch();
}
int func(int n)
{
 int d=0;
 while(n!=0)
 {
 n=n/10;
 d++;
 }
 return d;
}


10. Write a program to print all Armstrong numbers under 1000.

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,rem,count=0,n=1000;
    int sum=0;
    a=n;
    while(a)
    {
        b=a;
        while(b)
        {
            b=b/10;
            count++;
        }
        b=a;
        while(b)
        {
            rem=b%10;
            sum=sum+pow(rem,count);
            b=b/10;
        }
        if(sum==a)
            printf("%d  ",sum);
        sum=0;
        rem=0;
        count=0;
        a--;
    }

}







