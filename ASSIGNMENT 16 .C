ASSIGNMENT 16



1. Write a program to calculate the sum of two matrices each of order 3x3.

   int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int i,j;
    printf("Enter the element of 1st array:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the element of 2nd array:\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nThe first matrix is :\n\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe second matrix is:\n\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("The Sum of two matrices is:\n\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}


2. Write a program to calculate the product of two matrices each of order 3x3.

int main()
{
   int i,j,k,sum=0;
   int a[3][3];
   int b[3][3];
   int c[3][3];
   printf("Enter 9 elements in 1st array matrix:\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           scanf("%d",&a[i][j]);
       }

   }
   printf("Enter 9 elements in 2nd array matrix:\n");
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           scanf("%d",&b[i][j]);
       }
   }
   printf("the first matrix is:\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("%d ",a[i][j]);
         }
         printf("\n");
     }
     printf("the second matrix is:\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("%d ",b[i][j]);
         }
         printf("\n");
     }

   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           for(k=0;k<3;k++)
           {
               sum=sum+(a[i][k]*b[k][j]);
           }
           c[i][j]=sum;
           sum=0;
       }
   }
   printf("The multiplication of matrix is :\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d ",c[i][j]);
    }
    printf("\n");
}
}



3. Write a program in C to find the transpose of a given matrix.

int main()
{
    int a[3][3];
    int trans[3][3];
    int i,j;
    printf("Enter the element of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The element of matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            trans[j][i]=a[i][j];
        }
    }
    printf("Transpose of matrix is:\n");
    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            printf("%d ",trans[j][i]);
        }
        printf("\n");
    }
}


4. Write a program in C to find the sum of right diagonals of a matrix.


int main()
{
    int a[3][3];
    int h=2;
    int i,j;
    int sum=0;
    printf("enter 9 elements in matrix / array :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Your matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=h;j>h-1;j--)
        {
            sum=sum+a[i][j];
        }
        h--;
    }
    printf("The sum of right diagonal of matrix: %d ",sum);

}


5. Write a program in C to find the sum of left diagonals (trace of the matrix) of a matrix.

int main()
{
    int a[3][3];
    int i,j;
    int sum=0;
    int h=1;
    printf("Enter the 4 element in array:\n");
    for(i=0;i<3;i++)
    {
      for(j=0;j<3;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    printf("the element of matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=i;j<h;j++)
        {
            sum=sum+a[i][j];
        }
        h++;
    }
  printf("The sum of right diagonal matrx is = %d",sum);
  getch();
}


6. Write a program in C to find the sum of rows and columns of a Matrix.

int main()
{
    int a[3][3];
    int i,j;
    int sum=0;
    int add=0;
    printf("Enter the 9 elements in matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("The Element of matrix is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
              printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n___________________\n");
    printf("=>The sum of Row is:\n");
    printf("___________________\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+a[i][j];
        }
        printf("sum of %d Row is = %d",i,sum);
        printf("\n");
        sum=sum*0;
    }
    printf("\n_______________________\n");
   printf("=>The sum of column is :\n");
   printf("_______________________\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            add=add+a[j][i];
       }
       printf("The sum of ' %d ' column is %d ",i, add);
       printf("\n");
       add=add*0;
}
getch();
}



7. Write a program in C to print or display the lower triangular of a given matrix.


int main()
{
    int a[3][3];
    int i,j;
    printf("enter 9 elements in array :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
    printf("You enter this matrix :\n\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The upper triangular matrix :\n\n");
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
          if(i>j)
          {
              a[i][j]=0;
          }
        }
    }
    for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
          printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}





8. Write a program in C to print or display an upper triangular matrix.

int main()
{
    int a[3][3];
    int i,j;
    printf("enter 9 elements in array :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          scanf("%d",&a[i][j]);
        }
    }
    printf("You enter this matrix :\n\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
          printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The upper triangular matrix :\n\n");
      for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
          if(i<j)
          {
              a[i][j]=0;
          }
        }
    }
    for(i=0;i<3;i++)
      {
        for(j=0;j<3;j++)
        {
          printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}



9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.


int main()
{
    int n,count=0;
    printf("enter the size of 2D array:");
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    printf("\nEnter the %d elements in matrix :\n",n*n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
                count++;
        }
    }
    printf("\n\n");
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    if(count>(n*n)/2)
    {
        printf("This matrix is sparse\n");
    }
    else
    {
        printf("This matrix is not sparse:\n");
    }
}





10. Write a program in C to find the row with maximum number of 1s.


int main()
{
    int row, col;
    printf("Enter Row and column of Matrix: ");
    scanf("%d%d", &row, &col);

    int matrix[row][col], countOnes, findRow = 0, maxOnes = 0;
    printf("Enter Element in %d*%d Matrix: \n", row, col);
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d", &matrix[i][j]);


    printf("Given Matrix: \n");
    for (int i = 0; i < row; i++)
    {
        countOnes = 0;
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
            if (matrix[i][j] == 1)
                countOnes++;
        }
        if (countOnes > maxOnes)
        {
            maxOnes = countOnes;
            findRow = i + 1;
        }

        printf("\n");
    }

    if (findRow > 0)
        printf("\nMax Ones Contain Row is: %d", findRow);
    else
        printf("\nNo, Row Contain 1!");

    return 0;
}


