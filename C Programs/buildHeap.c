#include<stdio.h>
void buildHEAP(int A[],int num);
void heapify(int A[],int num,int i);
int leftChild(int A[],int num,int i);
int rightChild(int A[],int num,int i);

void main()
{
    int A[20],num,i,temp,N,oldSize;

    printf("Enter num of elements in HEAP\n");
    scanf("%d",&num);

    printf("Enter %d elements\n",num);
    for(i=0;i<num;i++)
        scanf("%d",&A[i]);

    buildHEAP(A,num);


       printf("Max Heap\n");
    for(i=0;i<num;i++)
        printf("%d ",A[i]);


}

buildHEAP(int A[],int num)
{
   int i;
   for(i=num/2-1;i>=0;i--)
   heapify(A,num,i);
}

heapify(int A[],int num,int i)
{
   int l,r,temp,max;

   l=leftChild(A,num,i);
   r=rightChild(A,num,i);

 if(l!=-1 && A[l]>A[i])
   max = l;
   else
   max =i;

if(r!=-1 && A[r]>A[max])
    max = r;

 if(max != i)
 {
    temp = A[i];
    A[i] = A[max];
    A[max] = temp;
    heapify(A,num,max);
 }

}

int leftChild(int A[],int num,int i)
{
   int left=2*i+1;
   if(left>num)
    return -1;
    return left;
}

int rightChild(int A[],int num,int i)
{
   int right=2*i+2;
   if(right>num)
    return -1;
return right;
}
