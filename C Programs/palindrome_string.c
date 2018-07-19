main()
{

    char str[20];
    printf("Enter a string\n");
    gets(str);
    if(Ispalindrome(str))
        printf("palindrome");
    else
        printf("Not a palindrome");

}
int Ispalindrome(char A[])
{
    int i,l;
     l=strlen(A);
    for(i=0;i<l/2;i++){
        if(A[i]!=A[l-1-i]){
           return 0;
        }
    }
    if(i==l/2)
     return 1;
}
