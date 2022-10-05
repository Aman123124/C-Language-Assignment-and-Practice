Assignment - 17



1. Write a program to calculate the length of the string. (without using built-in method)

int main()
{
     int i;
    char str[100];
    printf("Enter a string = ");
    gets(str);
    for(i=0;str[i];i++);
    printf("The length of string is = %d",i);
}


2. Write a program to count the occurrence of a given character in a given string.

#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    int count=0;
    char c ;
   printf("Enter a string = ");
    fgets(str,100,stdin);
    printf("\nEnter a character for checking occurence = ");
    scanf("%c",&c);
    while(str[i]!='\0')
    {

        if(str[i]==c)
        count++;
        i++;
    }
    printf("\noccurence of %c is ==>%d ",c,count);
    getch();
    return 0;

}



3. Write a program to count vowels in a given string.

#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    int count=0;
    printf("Enter a string = ");
    fgets(str,100,stdin);
    while(str[i]!='\0')
    {

        if(str[i]=='a' || str[i]=='e' || str[i]=='i'||str [i]=='o'||str[i]=='u')
        count++;
        i++;
    }
    printf("\nTotal vowel in string is = %d",count);
    getch();
    return 0;

}



4. Write a program to convert a given string into uppercase.

int main()
{
    char str[500];
    int i;
printf("\nEnter the string to convert to uppercase: ");
   gets(str);
   for (i = 0; str[i]!='\0'; i++) {
     /* if the characters are in lower case, convert them to
        upper case by subtracting 32 from their ASCII value. */
      if(str[i] >= 'a' && str[i] <= 'z') {
         str[i] = str[i] -32;
      }
   }
   printf("\nThe string in upper case = %s", str);
   getch();
   return 0;
}


5. Write a program to convert a given string into lowercase.

#include<stdio.h>
int main()
{
    char str[100]="APPLE GUAVA";
    int i=0;
    int count=0;
    while(str[i]!='\0')
    {
         if(str[i]>='A' && str[i]<='Z')
            str[i]=str[i]+32;
            i++;


    }
    printf("\nThe string is converted into LowerCase = %s",str);
    getch();
    return 0;

}



6. Write a program to reverse a string.

#include<stdio.h>
int main()
{
    char str[100];
    int i,len;
    printf("Enter your name or anything = ");
    fgets(str,100,stdin);
    len=strlen(str);
    printf("\n\nThe reverse of your string is :\n\n");
    for(i=len-1;i>=0;i--)
        printf("%c",str[i]);
        getch();
}




7. Write a program in C to count the total number of alphabets, digits and special
    characters in a string.


#include<stdio.h>
int main()
{
    char s[200];
    int alphabets=0,digits=0,sp_ch=0,i;
    printf("Enter a string = ");
    gets(s);
 for(i=0;s[i];i++)
 {
      if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )
          alphabets++;
        else if(s[i]>=48 && s[i]<=57)
         digits++;
        else
         sp_ch++;
 }

   printf("Total number of alphabets in string = %d \n",alphabets);
   printf("Total numbers of digit in string = %d \n",digits);
   printf("Total special character in string = %d \n",sp_ch);

}




8. Write a program in C to copy one string to another string.

int main()
{
    int length,i;
    printf("Enter the string in character array =  ");
    char str[100];
    char cpy[100];
    gets(str);
    length=strlen(str);
    for(i=0;i<length;i++)
    {
        cpy[i]=str[i];
    }
    printf("I am 1st string = %s\n\n",str);
    printf("i am copied string =%s",cpy);
}



9. Write a C program to sort a string array in ascending order.

#include <stdio.h>
#include <string.h>
void main()
{
  char str[100],ch;
  int i,j,l;

       printf("\n\nSort a string array in ascending order :\n");
       printf("--------------------------------------------\n");
       printf("Input the string : ");
       fgets(str, sizeof str, stdin);
      l=strlen(str);
  
     for(i=1;i<l;i++)
         for(j=0;j<l-i;j++)
	if(str[j]>str[j+1])
	{
	  ch=str[j];
	  str[j] = str[j+1];
	  str[j+1]=ch;
	}
   printf("\n\nAfter sorting the string appears like : \n");
   printf("%s\n\n",str);
   getch();
  }





10. Write a program in C to Find the Frequency of Characters.


#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter String: ");
    fgets(str, 100, stdin);

    // sort
    for (int i = 0; str[i]; i++)
    {
        for (int j = 0; str[j]; j++)
        {
            if (str[i] < str[j])
            {
                int temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    // Count Freq
    int count, i = 0, j;
    while (str[i])
    {
        count = 0;
        for (j = i; str[j]; j++)
        {
            if (str[i] == str[j])
                count++;
            else
                break;
        }
        printf("\n%c Character Frequency is: %d", str[i], count);
        i = j;
    }

    return 0;
}


