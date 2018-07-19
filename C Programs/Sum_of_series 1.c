main()
{
    int n,N,s,sum=0,i;
    printf("Enter a natural number\n");
    scanf("%d",&N);
    for(n=1;n<=N;n++)
    {

        s=0;
        for(i=1;i<=n;i++)
        s=s+i;
        sum=sum+s;
    }
    printf("Sum is %d",sum);
}
