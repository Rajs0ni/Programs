#include<stdio.h>
main()
{
    int i,j,k=0;
    FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=7;i++)
    {
        i<=4?k++:k--;
        for(j=1;j<=4;j++)
        {
            j<=k?fputs("*",fp):fputs(" ",fp);
        }
    fputs("\n",fp);
    }

}
