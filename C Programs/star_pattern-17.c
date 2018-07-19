#include<stdio.h>
main()
{
    int i,j,k=0;
    FILE *fp=fopen("StarFile.txt","a");
    for(i=1;i<=9;i++)
    {
       i<=5?k++:k--;
        for(j=1;j<=9;j++)
        {
        j<=6-k||j>=4+k?fputs("*",fp):fputs(" ",fp);
        }
  fputs("\n",fp);
    }
}
