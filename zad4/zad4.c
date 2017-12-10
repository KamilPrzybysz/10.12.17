#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a=1;
  char *tab;
  tab=(char*)malloc(a*sizeof(char )); //alokacja pamieci
  int i;
  for(i=0; i<a; i++)
  {
    printf("Wpisz napis: ");
    scanf("%s", &tab[i]);
  }
  for(i=0; i<a; i++)
  {
    printf("%d", tab[i]);
  }



  return 0;
}
