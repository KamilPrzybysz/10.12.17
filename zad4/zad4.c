#include<stdio.h>
#include<stdlib.h>

int returnFirstNonWhite()
{
    int ch;
    ch = getchar();
    while (ch == 32)
    {
        ch= getchar();
    }
    return ch;
}




int main()
{

  printf("wprowadź ciąg znaków: \n");
    char myChar = returnFirstNonWhite();

    printf("Znak: %c\n",myChar);

  return 0;
}
