#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fname[20],ch;
    FILE*fptr1 ,*fptr2;
    printf("Enter the file name : ");
    gets(fname);

    fptr1 = fopen(fname,"r");

    if (fptr1 == NULL)
    {
        printf("Error while opening file\n");
        return 0;
    }

    fptr2 = fopen("temp.txt","w");
    if (fptr2 == NULL)
    {
        printf("Error while opening file\n");
        return 0;
    }

    ch = fgetc(fptr1);
    while (ch != EOF)
    {
        ch = ch+100;
        fputc(ch,fptr2);
        ch = fgetc(fptr1);
    }
    fclose(fptr1);
    fclose(fptr2);
    fptr1 = fopen(fname,"w");
    if (fptr1 == NULL)
    {
        printf("Error while opening file\n");
        return 0;
    }
    fptr2 = fopen("temp.txt","r");
    if (fptr2 == NULL)
    {
        printf("Error while opening file\n");
        return 0;
    }
    ch = fgetc(fptr2);
    while (ch != EOF)
    {
        ch = fputc(ch, fptr1);
        ch = fgetc(fptr2);
    }
    fclose(fptr1);
    fclose(fptr2);
    system("cls");
    printf("\nFile %s is Encrypted Successfully!",fname);
    getwchar();
    return 0;
}