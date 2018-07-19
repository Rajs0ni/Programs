#include<stdio.h>
#include<conio.h>
main()
{

    int x=30,y=10;
    char ch;
    clrscr();
    gotoxy(x,y);
    printf("Neha");

    while(1)
    {
       ch = getch();
       switch(ch)
       {
          case 'a':
                x--;    //move leftside
          break;

          case 's':
                x++;    //move right side
          break;

          case 'w':
                y--;    //move upward
          break;

          case 'z':
                y++;    //move downward
          break;

          case 27:      //escape ascii code
           exit(0);
       }
       clrscr();
       gotoxy(x,y);     //passing updated value
       printf("Neha");
    }
}
