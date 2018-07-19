#include<stdio.h>
#include<conio.h>
int main()
{
   FILE *fp;
   char s[100];
   int i;
   fp=fopen("f1.txt","w");
   if(fp==NULL)
   {
        printf("File can't open");
        exit(1);
   }
    printf("Enter s string");
    gets(s);
    for(i=0;i<strlen(s);i++)
    fputc(s[i],fp);
    getch();
    fclose(fp);
    getch();
   }

