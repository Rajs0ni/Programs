main()
{
    int x,i;
    printf("Enter a Number\n");
    scanf("%d",&x);

    for(i=2;i<=(x-i);i=nextPrime(i))
    {
        if(IsPrime(x-i))
          printf("%d + %d = %d\n",i,x-i,x);

    }
}

int nextPrime(int n)
{
    do
        n++;
    while(!IsPrime(n));
    return n;
}
int IsPrime(int n)
{
    int i;
    for(i=2;i<n;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
