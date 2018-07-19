#include<stdio.h>
#include<conio.h>
typedef struct
{
   int bookid;
   char title[20];
   float price;
}book;

int main()
{
     menu();
}

void menu()
{
    int choise;
    while(1)
    {

    msg_print();
    printf("\n\nSelect Any one\n");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1: file_fputc();
                 break;
        case 2: file_fputs();
                 break;
        case 3: file_fwrite();
                 break;
        case 4: file_fgetc();
                 break;
        case 5: file_fgets();
                 break;
        case 6: file_fread();
                 break;
        case 7: file_wmode();
                  break;
        case 8: exit(0);
                 break;
        default: printf("\nInvalid Selection\n");
    }
}
}
void msg_print()
{
    printf("\n1. WriteInFile_using_fputc()\n");
    printf("2. WriteInFile_using_fputs()\n");
    printf("3. WriteInFile_using_fwrite()\n");
    printf("4. ReadFile_using_fgetc()\n");
    printf("5. ReadFile_using_fgets()\n");
    printf("6. ReadFile_using_fread()\n");
    printf("7. Open file in W mode\n");
    printf("8. Exit");
}

void file_wmode()
{
    FILE *fp;
    fp=fopen("f1.txt","w");
    if(fp==NULL)
    {
        printf("File Cant Open");
        exit(1);
    }
    fclose(fp);
}
FILE* file_open()
{
   FILE *fp;
   fp=fopen("f1.txt","a+");
   if(fp==NULL)
   {
       printf("File Not Found");
       exit(1);
   }
   else
    return(fp);
}

FILE* file_openb()
{
   FILE *fp;
   fp=fopen("f1.txt","ab+");
   if(fp==NULL)
   {
       printf("File Not Found");
       exit(1);
   }
   else
    return(fp);
}
void file_fputc()
{
     int i;
     char str[20];
     FILE *fp=file_open();

  printf("Enter a string\n");
  fflush(stdin);
  gets(&str);
  for(i=0;i<strlen(str);i++)
    fputc(str[i],fp);
  fclose(fp);

}

void file_fputs()
{
     char str[20];
    FILE *fp=file_open();
    printf("Enter a string\n");
    fflush(stdin);
    gets(&str);
    fputs(str,fp);
    fclose(fp);

}

void file_fwrite()
{
    book b1;
    FILE *fp=file_openb();
   printf("Enter book id,title & price\n");
   scanf("%d",&b1.bookid);
   fflush(stdin);
   gets(&b1.title);
   scanf("%f",&b1.price);
   fwrite(&b1,sizeof(b1),1,fp);
   fclose(fp);
}

void file_fgetc()
{
    char ch;
    FILE *fp=file_open();
    ch=fgetc(fp);
    while(!feof(fp))
    {
      printf("%c",ch);
      ch=fgetc(fp);
    }
    fclose(fp);
}

void file_fgets()
{
   char str[100];
   FILE *fp=file_open();
   while(fgets(str,10,fp)!=NULL)
   printf("%s",str);
   fclose(fp);
}

void file_fread()
{
     book b1;
     FILE *fp=file_openb();
     while(fread(&b1,sizeof(b1),1,fp)>0)
     printf("\nbookid=%d title=%s price=%f\n",b1.bookid,b1.title,b1.price);
     fclose(fp);
}
