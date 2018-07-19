#include<stdio.h>
#include<string.h>
/* void reverse_str()
{

    char str[20];
    printf("Enter a string");
    gets(str);
    strrev(&str);
    printf("%s",str);
}

void UPR_str()
{
    int i;
    char str[20];
    printf("Enter A string\n");
    gets(str);
     for(i=0;i<strlen(str);i++)            //strupr(&str);
     {
         if (str[i]>='a' && str[i]<='z')
                 str[i]=str[i]-32;
     }

      printf("%s",str);
}
*/

int main()
{

     int i,r,round;
     char str[5][10],s[10];
     printf("Enter five strings");
     for(i=0;i<=4;i++)
        gets(str[i]);

        for(round=1;round<=4;round++)
        for(i=0;i<=4-round;i++)
        {
        r=strcmp(str[i],str[i+1]);
        if(r>0)
        {
            strcpy(s,str[i]);
            strcpy(str[i],str[i+1]);
            strcpy(str[i+1],s);
        }
        }

        printf("Dictionary ordered strings are\n");
        for(i=0;i<=4;i++)
            printf("%s\n",str[i]);


}




