#include<stdio.h>

void main()
{
    int i,j,k,a[] = {1,2,1,2,1,2,2};
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
            if(a[i] == a[j])
             {
                 k = j;
                 while(k!=7)
                 {
                   a[k] = a[k+1];
                   k++;
                 }
                 a[k-1] = 0;
             }

    }

    for(i=0;a[i]!=0;i++)
        printf("%d ",a[i]);
}
