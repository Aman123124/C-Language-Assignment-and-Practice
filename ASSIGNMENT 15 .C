
ASSIGNMENT 15


1. Write a function to find the greatest number from the given array of any size. (TSRS)


#include<stdio.h>
#include<conio.h>

int main()
{
    int size,i;
    int g;
    printf("Enter the size of array :\n");
    scanf("%d",&size);
    printf("Enter the element of array :\n");
    int a[size];
    for(i=0;i<=size;i++)
    {
        scanf("%d",&a[i]);
    }
    g=func(a,size);
    printf("the greatest element in array = %d",g);
}
int func(int b[],int size)
{
    int i;
    int max=b[0];
    for(i=1;i<=size;i++)
    {
        if(b[i]>max)
            max=b[i];
    }
    return max;
}


2. Write a function to find the smallest number from the given array of any size. (TSRS)

#include<stdio.h>
#include<conio.h>

int main()
{
    int n, kill;
    printf("Enter the size of array = ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    kill=small(arr,n);
    printf("Minimum element in array is = %d",kill);

}
int small(int a[],int n)
{
    int i;
  int min=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        return min;
    }

}



3. Write a function to sort an array of any size. (TSRS)

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i;
    printf("enter size of array: ");
    scanf("%d",&n);
    int a[n];
    input(a,n);
    sort(a,n);
}
void input(int b[],int s)
{
    printf("enter %d elements in array :\n",s);
    int i;
    for(i=0;i<s;i++)
    {
        scanf("%d",&b[i]);
    }
}
void sort(int b[],int s)
{
    int a,i,j;
    for (i = 0; i < s; i++)
   {
      for (j = i + 1; j < s; j++)
      {
         if (b[i] > b[j])
            {
            a = b[i];
            b[i] = b[j];
            b[j] = a;
            }
      }
   }
   printf("The numbers in ascending order is:\n");
   for (i = 0; i < s; i++)
    {
      printf("%d\n", b[i]);
    }
}


4. Write a function to rotate an array by n position in d direction. The d is an indicative
    value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
    d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

#include <stdio.h>

void rotateArray(int arr[], int arrSize, int n, int d)
{
    int brr[arrSize];
    for (int i = 0; i < arrSize; i++)
        brr[i] = arr[i];
    if (d == 0) // for left
    {
        for (int i = 0, j = n; i < arrSize; i++)
            arr[i] = brr[j++ % arrSize];
    }
    else // for right
    {
        for (int i = 0, j = arrSize-n; i < arrSize; i++)
            arr[i] = brr[j++ % arrSize];
    }
}

int main()
{
    int arrSize, n, d;
    printf("How many number you want to enter: ");
    scanf("%d", &arrSize);
    int arr[arrSize];
    printf("Enter %d Element in Array\n", arrSize);
    for (int i = 0; i < arrSize; i++)
        scanf("%d", &arr[i]);

    printf("Enter Position and direction(if direction is left then enter 0 and for right enter 1: ");
    scanf("%d%d", &n, &d);

    printf("\nBefore Rotate Array: ");
    for (int i = 0; i < arrSize; i++)
        printf("%d ", arr[i]);

    rotateArray(arr, arrSize, n, d);

    printf("\nAfter Rotate Array by %d Position: "arr[i]);
    for (int i = 0; i < arrSize; i++)
        printf("%d ", arr[i]);

    return 0;
}





5. Write a function to find the first occurrence of adjacent duplicate values in the array.
    Function has to return the value of the element.
#include<stdio.h>
#include<conio.h>

int main()
{
   int n;
   int i,result;
   printf("enter size of array:");
   scanf("%d",&n);
   int a[n];
   printf("enter %d elements in array:\n\n",n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   result=adjacent(a,n);
   printf("\n\n%d is first adjacent elements in array:\n",result);
}
int adjacent(int b[],int s)
{
    int i;
    for(i=0;i<s;i++)
    {
        if(b[i]==b[i+1])
            break;
    }
    return b[i];
}




6. Write a function in C to read n number of values in an array and display it in reverse
    order.

#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a,n);
}
void reverse(int b[],int s)
{
    printf("Array arrange in reverse order\n");
    int i;
    for(i=s-1;i>=0;i--)
    {
        printf("%d  ",b[i]);
    }
    getch();
}



7. Write a function in C to count a total number of duplicate elements in an array.

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,k;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    k=duplicate_return(a,n);
    printf("duplicate elements in array (means elements repeated in two times in array = %d",k);
}
int duplicate_return(int b[],int s)
{
    int count=0;
    int i,j;
    for(i=0;i<s-1;i++)
    {
        for(j=i+1;j<=s-1;j++)
        {
            if(b[i]==b[j])
                count++;
        }
    }
    return count;
}



8. Write a function in C to print all unique elements in an array.

#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i;
    printf("Enter the size of array:");
    scanf("%d",&n);
     int a[n];
    printf("Enter %d elements in array:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    unique(a,n);
}
  void unique(int b[],int s)
  {
      int i,j,count=0;
     for(i=0;i<s;i++)
     {
       int count=0;
       for(j=0;j<s;j++)
       {
           if(i!=j)
           {
               if(b[i]==b[j])
               {
                   count++;
               }
           }

       }
       if(count==0)
       {
           printf("the unique element in array = %d \n",b[i]);
       }
     }
  }



9. Write a function in C to merge two arrays of the same size sorted in descending
    order.

#include <stdio.h>
#include<conio.h>

void mergeArary(int a[], int b[], int merge[], int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        merge[i] = a[i];
        merge[arrSize + i] = b[i];
    }
}
int main()
{
    int arrSize;
    printf("How many numbers you want to enter(both Array): ");
    scanf("%d", &arrSize);

    int a[arrSize], b[arrSize];

    printf("Enter %d Numbers in First Array\n", arrSize);
    for (int i = 0; i < arrSize; i++)
        scanf("%d", &a[i]);

    printf("Enter %d Numbers in Second Array\n", arrSize);
    for (int i = 0; i < arrSize; i++)
        scanf("%d", &b[i]);

    int merge[arrSize * 2]; // store merge arrays element

    mergeArary(a, b, merge, arrSize);

    printf("\nAfter Merging: ");
    for (int i = 0; i < arrSize * 2; i++)
        printf("%d ", merge[i]);

    return 0;
}



10. Write a function in C to count the frequency of each element of an array.

#include <stdio.h>
#include<conio.h>

void printUniqueElement(int arr[], int arrSize)
{
    // Sort Array
    for (int i = 0; i < arrSize; i++)
    {
        for (int j = i + 1; j < arrSize; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    // print Unique Element
    int count, i = 0, j;
    while (i < arrSize)
    {
        count = 0;
        for (j = i; j < arrSize; j++)
        {
            if (arr[i] == arr[j])
                count++;
            else
                break;
        }
        printf("%d - %d times\n", arr[i], count);
        i = j;
    }
}

int main()
{
    int arrSize;
    printf("How many numbers you want to enter(both Array): ");
    scanf("%d", &arrSize);

    int arr[arrSize];

    printf("Enter %d Numbers in Array\n", arrSize);
    for (int i = 0; i < arrSize; i++)
        scanf("%d", &arr[i]);

    printUniqueElement(arr, arrSize);

    return 0;
}

