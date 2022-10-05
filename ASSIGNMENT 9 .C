ASSIGNMENT :9


1. Write a program which takes the month number as an input and display
   number of days in that month.

int main()
{
    int n;
    printf("Enter the number of month = ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("\n=>31 days in month of January ::");
        break;
    case 2:
        printf("\n=>28/29 days in month of February:: ");
        break;
    case 3:
        printf("\n=>31 days in month of March::");
        break;
    case 4:
        printf("\n=>30 days in month of April::");
        break;
    case 5:
        printf("\n=>31 days in month of May::");
        break;
    case 6:
        printf("\n=>30 days in month of june::");
        break;
    case 7:
        printf("\n=>31 days in month of july::");
        break;
    case 8:
        printf("\n=>31 days in month of August::");
        break;
    case 9:
        printf("30 days in month of September::");
        break;
    case 10:
        printf("\n=>31 days in month of October::");
        break;
    case 11:
        printf("\n=>30 days in month of November::");
        break;
    case 12:
        printf("\n=>31 days in month of December::");
        break;
    default:
        printf("\n=>Enter invalid month number:: ");
        break;
    }
  getch();
}



2. Write a menu driven program with the following options:
              a. Addition
              b. Subtraction
              c. Multiplication
              d. Division
              e. Exit


#include<stdio.h>
#include<conio.h>
int main()
{
    int n,a,b;
    while(n!=5)
    {


           printf("\n\n----------------------------------------------------------");
           printf("\n    : There are many options choose any one :");
           printf("\n-----------------------------------------------------------");
           printf("\na.Addition.");
           printf("\nb.Substraction.");
           printf("\nc.Multiplication");
           printf("\nd.Division.");
           printf("\ne.Exit.");
           printf("\n--------------------------------------------------");
           printf("\n\n\nSelect your choice = ");
           scanf("%d",&n);
          switch(n)
          {
            case 1:
               printf("Enter 1st number = ");
               scanf("%d",&a);
               printf("Enter 2nd number = ");
               scanf("%d",&b);
               printf("RESULT  = %d",a+b);
               break;
          case 2:
              printf("Enter 1st number = ");
              scanf("%d",&a);
              printf("Enter 2nd number = ");
              scanf("%d",&b);
              printf("RESULT  = %d",a-b);
              break;
        case 3:
             printf("Enter 1st number = ");
            scanf("%d",&a);
            printf("Enter 2nd number = ");
            scanf("%d",&b);
            printf("RESULT  = %d",a*b);
            break;
        case 4:
            printf("Enter 1st number = ");
            scanf("%d",&a);
            printf("Enter 2nd number = ");
           scanf("%d",&b);
           printf("RESULT  = %d",a/b);
           break;
       case 5:
           if(n==5)
           break;
       default:
           if(n!=1||n!=2||n!=3|n!=4)
        printf("\n\nAnswer => : Input choice is invalid.please choose valid option:");
        break;
      }
      if(n==5)
        break;
   }
}



3. Write a program which takes the day number of a week and displays a
    unique greeting message for the day.

int main()
{
    int n;
    printf("Enter the number of month = ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("\n=>Hii ,How are you. ");
        break;
    case 2:
        printf("\n=>How's it going. ");
        break;
    case 3:
        printf("\n=>How's everything.");
        break;
    case 4:
        printf("\n=>It's nice to meet you.");
        break;
    case 5:
        printf("\n=>It's good to see you again.");
        break;
    case 6:
        printf("\n=>It's a pleasure to meet you.");
        break;
    case 7:
        printf("\n=>What's up Dude.");
        break;
    default:
        printf("\n=>Enter invalid day number of week.");
        break;
    }
  getch();
}



4. Write a menu driven program with the following options:
   
   a. Check whether a given set of three numbers are lengths of an isosceles triangle or not

  b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not

   c. Check whether a given set of three numbers are equilateral triangle or not

  d. Exit



int main()
{
    int n;
    int a,b,c;
    while(n!=4)
    {
            printf("\n\n----------------------------------------------------------------------");
            printf("\n----------------------------------------------------------------------");
            printf("\n\n1.Check three numbers are lengths of an isosceles triangle or not .");
            printf("\n2.Check three numbers are lengths of an right angled triangle or not .");
            printf("\n3.Check three numbers are lengths of an eqilateral triangle or not .");
            printf("\n4.exit");
            printf("\n-----------------------------------------------------------------------\n");
            printf("\n\nChoose any one option =  ");
            scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("Enter 1st  side  of triangle = ");
        scanf("%d",&a);
        printf("Enter 2nd side of triangle = ");
        scanf("%d",&b);
        printf("Enter 3rd side  of triangle = ");
        scanf("%d",&c);
        if(a==b||b==c||c==a)
        {
            printf("This isosceles triangle :");
        }
        else
            {
                printf("This is not isosceles triangle :");
            }
        break;
    case 2:
         printf("Enter 1st  side  of triangle = ");
        scanf("%d",&a);
        printf("Enter 2nd side of triangle = ");
        scanf("%d",&b);
        printf("Enter 3rd side  of triangle = ");
        scanf("%d",&c);
        if(a*a==b*b+c*c||b*b==c*c+a*a||c*c==a*a+b*b)
        {
            printf("This right angled triangle :");
        }
        else
            {
                printf("This is not right angled triangle :");
            }
        break;
    case 3:
         printf("Enter 1st  side  of triangle = ");
        scanf("%d",&a);
        printf("Enter 2nd side of triangle = ");
        scanf("%d",&b);
        printf("Enter 3rd side  of triangle = ");
        scanf("%d",&c);
        if((a==b)&&(b==c))
        {
            printf("This equilateral triangle :");
        }
        else
            {
                printf("This is not equilateral  triangle :");
            }
        break;
    case 4:
        if(n==4)
        break;
    default:
        if(n!=1||n!=2||n!=3||n!=4)
        {
            printf("\n => You choose invalid option. <=");
            printf("\n    - - - - - - - - - - - - -  ");
        }
        break;
    }
    if(n==4)
        break;

    }
    getch();
}


5. Convert the following if-else-if construct into switch case:
    if(var == 1)
    printf("good");
    else if(var == 2)
    printf("better");
    else if(var == 3)
    printf("best");
    else
    printf("invalid");


#include<stdio.h>
#include<conio.h>
int main()
{
    int var;
    printf("enter the var = ");
    scanf("%d",&var);
    switch(var)
    {
    case 1:
        printf("\nGood.");
        break;
    case 2:
        printf("\nBetter.");
        break;
    case 3:
        printf("\nBest.");
        break;
    default:
        printf("\nInvalid.");
        break;
    }
    getch();
}



6. Program to check whether a year is a leap year or not. Using switch statement.


int main()
{
    int n;
    printf("Enter the a year = ");
    scanf("%d",&n);
    switch(n%100==0)
    {
    case 1:
            switch(n%400==0)
           {
            case 1:
                 printf("\n%d is leap year .",n);
                 break;
            case 0:
                 printf("\n%d is not leap year .",n);
                 break;
           }
           break;
    case 0:
            switch(n%4==0)
            {
           case 1:
                printf("\n%d is leap year.",n);
                break;
           case 0:
                printf("\n%d is not leap year .",n);
                break;
            }
            break;
    }
    getch();
}


7. Program to take the value from the user as input electricity unit charges
    and calculate total electricity bill according to the given condition . Using
    the switch statement.

   For the first 50 units Rs. 0.50/unit
   For the next 100 units Rs. 0.75/unit
   For the next 100 units Rs. 1.20/unit
   For units above 250 Rs. 1.50/unit
   An additional surcharge of 20% is added to the bill.


int main()
{
    int x;
    float amount ,total;
    printf("\n-----------------------------------------------");
    printf("\n1.For the first 50 units Rs. 0.50/unit");
    printf("\n2.For the next 100 units Rs. 0.75/unit");
    printf("\n3.For the next 100 units Rs. 1.20/unit");
    printf("\n4.For units above 250    Rs.  1.50/unit");
    printf("\n\n5.An additional surcharge of 20%% is added to the bill.\n");
    printf("\n-------------------------------------------------");
    printf("\n\nEnter customer the electricity unit = ");
    scanf("%d",&x);
    switch(x<=50)
    {
       case 1: amount=x*0.5;
                    break;
       case 0:switch(x<=150)
                  {
                      case 1: amount=25+(x-50)*0.75;
                                  break;
                      case 0: switch(x<=250)
                                  {
                                      case 1: amount=100+(x-150)*1.20;
                                                   break;
                                      case 0: amount=220+(x-250)*1.5;
                                                   break;
                                  }break;
                  }break;

    }
    total=amount+amount*0.20;
    printf("\n=>Your actual electricity bill amount =%f \n",amount);
    printf("\n=>electricity bill included 20%% GST = %f",total);
    getch();
}


8. Program to convert a positive number into a negative number and negative
    number into a positive number using a switch statement.


int main()
{
    int n,c;
    printf("enter a number = ");
    scanf("%d",&n);
    switch(n>0)
    {
         case 1:
             printf("\n\nyour number convert into negative  -%d",n);
             break;
         case 0:switch(n<0)
                    {
                        case 1:
                            c=n-(n*2);
                       printf("\n\nyour number covert into positive %d",c);
                       break;
                    }
    }              break;
getch();
}



9. Program to Convert even number into its upper nearest odd number. Switch Statement.


int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d",&n);
    switch(n%2==0)
    {
    case 1:
        printf("\n=>the upper nearest odd number is = %d",n+1);
        break;
    case 0:
        printf("\n=>you entered a odd number = %d",n);
        break;
    }
    getch();
}


10. C program to find all roots of a quadratic equation using switch case .

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float d,root_1,root_2;
    printf("Enter the cofficient of x^2 = ");
    scanf("%d",&a);
    printf("Enter the cofficient of x = ");
    scanf("%d",&b);
    printf("Enter the constant value = ");
    scanf("%d",&c);
    d=(b*b)-(4*a*c);
    switch(d>0)
    {
        case 1:
            root_1=(-b+sqrt(d))/(2*a);
            printf("\nThe 1st root =%0.3f",root_1);
            root_2=(-b-sqrt(d))/(2*a);
            printf("\nThe 2nd root  =%0.3f",root_2);
            break;

        case 0:switch(d<0)
                   {
                      case 1:
                                  printf("\n\n=>Roots are imaginary :");
                                  break;

                      case 0:switch(d==0)
                                  {
                                     case 1:
                                                printf("\n\n=>roots are same and equal = %.1f",((-b/2)*a));
                                                break;
                                  }break;

                   }break;

    }

}







