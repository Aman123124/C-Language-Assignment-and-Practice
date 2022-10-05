ASSIGNMENT 14



1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
    array values from the user.


int main()
{
    int i,a[10],sum=0;
    printf("Enter 10 Elements in array = ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\n=> The stored element of array = ");
    for(i=0;i<=9;i++)
    {
       printf("%d  ",a[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }
    printf("\n\n=> The sum of stored element of array = %d",sum);
    getch();
}



2. Write a program to calculate the average of numbers stored in an array of size 10.
    Take array values from the user.

int main()
{
    int i , a[10],sum=0;
    float average;
    printf("Enter the element in array :\n");
    for(i=0;i<=9;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+a[i];
    }
    average =sum/10;
    printf("\n\n=>The Average of 10 elements of array = %0.3f",average);
    getch();
}


3. Write a program to calculate the sum of all even numbers and sum of all odd
    numbers, which are stored in an array of size 10. Take array values from the user.

int main()
{
    int a[10],add=0,sum=0,i;
    printf("Enter the elements in array :\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe even elements of array is :\n");
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
            printf("%d , ",a[i]);
    }
    printf("\nThe odd elements of array is:\n");
    for(i=0;i<=9;i++)
    {
        if(a[i]%2!=0)
            printf("%d , ",a[i]);
    }
    for(i=0;i<=9;i++)
    {
           if(a[i]%2==0)
           {
               sum=sum+a[i];
           }
          else
          {
               add=add+a[i];
          }
    }
    printf("\n\n=>The sum of even element in array is = %d",sum);
    printf("\n\n=>The sum of odd elements in array is =%d",add);
    getch();
}




4. Write a program to find the greatest number stored in an array of size 10. Take array
    values from the user.


int main()
{
    int a[10];
    int i,max;
    printf("Enter the element in array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<=8;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("\n\n=>The greatest elemet in array is =%d ",max);
    getch();
}



5. Write a program to find the smallest number stored in an array of size 10. Take array
    values from the user.

int main()
{
    int a[10];
    int i,min;
    printf("Enter the element in array : ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<=8;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("\n\n=>The smallest elemet in array is =%d ",min);
    getch();
}



6. Write a program to sort elements of an array of size 10. Take array values from the user.

#include <stdio.h>

void main()
{
    int arr1[100];
    int n, i, j, tmp;


     printf("\n\nsort elements of array in ascending order :\n ");
     printf("----------------------------------------------\n");

    printf("Input the size of array : ");
    scanf("%d", &n);

       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[j] <arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr1[i]);
    }
	        printf("\n\n");
}
       


7. Write a program to find second largest in an array.Take array values from the user.

int main()
{
    int a[10],i,sec_max,max;
    printf("Enter 10 element in array :\n");
    for(i=0;i<=9;i++)
    {
      scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<=9;i++)
    {
        if(a[i]>max)
        {
            sec_max=max;
            max=a[i];
        }
        else
            if(a[i]>sec_max)
        {
            sec_max=a[i];
        }
    }
    printf("\n The largest element in array is = %d",max);
    printf("\n The second largest element in array is =%d",sec_max);
    getch();
}


8. Write a program to find the second smallest number in an array.Take array values
    from the user.

int main()
{
    int a[10],i,sec_smll,smll;
    printf("Enter 10 element in array :\n");
    for(i=0;i<=9;i++)
    {
      scanf("%d",&a[i]);
    }
    smll=a[0];
    for(i=1;i<=9;i++)
    {
        if(a[i]<smll)
        {
            sec_smll=smll;
            smll=a[i];
        }
        else
            if(a[i]<sec_smll)
        {
            sec_smll=a[i];
        }
    }
    printf("\n The smalllest element in array is = %d",smll);
    printf("\n The second smallest element in array is =%d",sec_smll);
    getch();
}



9. Write a program in C to read n number of values in an array and display it in reverse
     order. Take array values from the user.

int main()
{
  int a[10],i;
  printf("\nEnter the elements in array :\n");
  for(i=0;i<=9;i++)
  {
  scanf("%d",&a[i]);
  }
  printf("Array convert in reverse order :\n");
  for(i=9;i>=0;i--)
   {
       printf("%d ",a[i]);
   }
    getch();

}



10. Write a program in C to copy the elements of one array into another array.Take array
     values from the user.


int main()
{
    int a[10];
    int b[10],i;
    printf("Enter the element in array  'A' \n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    printf("You copy the value of array 'A' in Array 'B' :\n");
    for(i=0;i<=9;i++)
    {
    printf("%d\n",b[i]);
    }

}



