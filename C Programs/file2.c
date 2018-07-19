#include<stdio.h>
int main()
{
    file_write();
    file_read();
}
void file_write()
{
   int i;
   char s[100];
   FILE *fp;
   fp=fopen("f1.txt","a+");
   if(fp==NULL)
   {
       printf("file cant open");
       exit(1);
   }
   printf("enter a string");
   gets(s);
   for(i=0;i<strlen(s);i++)
   fputc(s[i],fp);

   fclose(fp);
}

void file_read(){
    char ch;
    FILE *fp;
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
      printf("File cannot open");
      exit(1);
    }
   ch=fgetc(fp);
   while(!feof(fp))
   {
       printf("%c",ch);
       ch=fgetc(fp);
   }

   fclose(fp);
}
