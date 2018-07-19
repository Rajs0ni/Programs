#include<stdio.h>
int main()
{
    FILE *fp;
    char str[30];
    fp=fopen("f1.txt","r");
    if(fp==NULL)
    {
        printf("file not found");
        exit(1);
    }

    while(fgets(str,9,fp)!=NULL)
        printf("%s",str);
    fclose(fp);
}
