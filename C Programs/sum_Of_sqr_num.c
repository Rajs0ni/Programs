main()
{

    int x;
    printf("Enter a Number: ");
    scanf("%d",&x);
    printf("Sum of Square of %d Natural Number is: %d ",x,square(x));
}

int square(int N)
{
    int i,sum=0;
    for(i=1;i<=N;i++)

    sum=sum+i*i;

 return (sum);
}
