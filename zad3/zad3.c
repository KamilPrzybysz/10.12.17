#include <stdio.h>
#include <stdlib.h>

int funkcja()
{
  int w;
   printf("Liczba wierszy: ");
   scanf("%d",&w);


  int *tab;
   tab=(int*)malloc(w*sizeof(int )); //alokacja pamieci
   int i;
   for(i=0; i<w; i++)
   {
     printf("Podaj wartość do tablicy: ");
     scanf("%d", &tab[i]);
   }

  printf("\n\nTABLICA A\n");
  for (i = 0; i < w; ++i, printf(" ") )
  {
     printf("%d\t",tab[i]);
  }
printf("\n\n\n");


int *tab2;
 tab2=(int*)malloc(w*sizeof(int )); //alokacja pamieci
 for(i=0; i<w; i++)
 {
   printf("Podaj wartość do tablicy B: ");
   scanf("%d", &tab2[i]);
 }

printf("\n\nTABLICA B\n");
for (i = 0; i < w; ++i, printf(" ") )
{
   printf("%d\t",tab2[i]);
}
printf("\n");

int iloczyn=0;
for(i=0; i<w; i++)
{
  iloczyn+=tab[i]*tab2[i];
}

printf("Iloczyn skalarny tych liczb to: %d\n", iloczyn);
}

int main()
{

  funkcja();


  return 0;
}
