#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int number;

int ispalidrome(int n)
{
    int reverse=0, rem;
    while(n!=0)  
    {    
        rem=n%10;   
        reverse=reverse*10+rem;    
        n/=10;    
    }
    if (reverse == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    while (1)
    {
        printf("WELCOME TO PALINDROME PROGRAM CHECK WHETHER YOUR NUMBER OR STRING IS PALINDROME OR NOT\n");
        int palin;
        printf("Who's Palindrome do you want to check\nPress 1 for number Palindrome\nPress 2 for string Palindrome\n");
        scanf("%d",&palin);
        if (palin == 1)
        {
            printf("Enter a number: ");    
            scanf("%d", &number); 
            if (ispalidrome(number))
            {
                printf("YES, it is a palindrome number\n");
            }
            else
            {
                printf("No, it is not a palindrome number\n");
            }
        }

        else if (palin == 2)
        {
            int com;
            char string[1000];
            char string2[1000];
            getwchar();
            printf("Enter your string\n");
            gets(string);
            strcpy(string2,string);
            strrev(string2);
            com = strcmp(string,string2);

            if (com == 0)
            {
                printf("YES, it is a palindrome string\n");
            }
            else
            {
                printf("NO, it is not a palindrome string\n");
            }
        }

        else
        {
            printf("Invalid input\n");
            continue;
        }
        char quit[3],quit2[3] = "Q";
        int terminate;
        printf("Press \"Q\" to quit\n");
        gets(quit);
        terminate = strcmp(quit,quit2);
        if (terminate == 0)
        {
            exit(1);
        }
        else
        {
            continue;
        }  
    }
    return 0;
}