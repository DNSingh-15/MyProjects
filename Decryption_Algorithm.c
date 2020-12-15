#include <stdio.h>
#include <stdlib.h>

int main()
{
    char fname[20],ch;
    FILE*fps ,*fpt;
    printf("Enter the file name : ");
    gets(fname);
    fps = fopen(fname,"w");
    if (fps == NULL)
    {
        printf("Error while opening file\n");
        return 0;
    }

    fpt = fopen("temp.txt","r");
    if (fpt == NULL)
    {
        printf("Error while opening file\n");
        return 0;
    }

    ch = fgetc(fpt);
    while (ch != EOF)
    {
        ch = ch-100;
        fputc(ch,fps);
        ch = fgetc(fpt);
    }
    fclose(fps);
    fclose(fpt);
    system("cls");
    printf("\nFile %s is Decrypted Successfully!",fname);
    getwchar();
    return 0;
}