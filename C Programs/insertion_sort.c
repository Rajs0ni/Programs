#include<stdio.h>
//#include<conio.h>


int MIN(int A[],int k,int N)
{

    int MIN,LOC,j;
    MIN = A[k];
    LOC = k;
    for(j=k+1;j<N;j++)
    {
      if(A[j]<MIN)
      {

        MIN = A[j];
        LOC = j;
      }

    }
     return (LOC);

}
void selection(int A[],int N)
{

   int i,LOC,temp;
   for(i=0;i<N-1;i++)
   {

     LOC = MIN(A,i,N);
     temp = A[i];
     A[i]=A[LOC];
     A[LOC]=temp;
   }
}

void main()
{
   int i,A[]={56,7,9,37,1,55,53,63};
   printf("Unsorted Elements\n");
   for(i=0;i<8;i++)
    printf(" %d",A[i]);
    selection(A,8);
     printf("\nSorted Elements\n");
   for(i=0;i<8;i++)
    printf(" %d",A[i]);

}
