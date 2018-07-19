#include<stdio.h>
typedef struct
{
    int bookid;
    char title[20];
    float price;
}book;

int main()
{

     book b1;
    FILE *fp;
    fp=fopen("f1.txt","ab");
    printf("Enter book id,title & price");
    scanf("%d",&b1.bookid);
      fflush(stdin);
    gets(&b1.title);

    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
    file_read();


}
void file_read()
{
     book b1;
    FILE *fp;
    fp=fopen("f1.txt","rb");

    while(fread(&b1,sizeof(b1),1,fp)>0)
    printf("bookid=%d title=%s price=%f\n",b1.bookid,b1.title,b1.price);

    fclose(fp);


}
