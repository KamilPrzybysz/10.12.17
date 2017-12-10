#include <stdio.h>
#include <stdlib.h>


int fcunkja()
{
  int w,k;
   printf("Liczba wierszy: ");
   scanf("%d",&w);
   printf("Liczba kolumn: ");
   scanf("%d",&k);
  ///////////// 2D /////////////////
   printf("\n\nTABLICA A\n");
  int **tab2;
   tab2=(int**)malloc(w*sizeof(int *)); //alokacja pamieci
   for(int i=0; i<w; i++)
   {
   tab2[i]=(int*)malloc(k*sizeof(int));
   for ( int j = 0; j < k; ++j) //wpisanie wartosci do tablicy
   tab2[i][j]=(i+j);
   }
  //wypisz tab2[w][k]
  for ( int i = 0; i < w; ++i, printf("\n") )
   for ( int j = 0; j < k; ++j)
   printf("%d\t",tab2[i][j]);

int c;
printf("Podaj liczbę C: ");
scanf("%d", &c);

   printf("\n\nTABLICA A*C\n");

   for ( int i = 0; i < w; ++i, printf("\n") )
    for ( int j = 0; j < k; ++j)
    {
    printf("%d\t",tab2[i][j]*c);
    }


   //zniszcz tab2
for(int i=0; i<w; i++)
free(tab2[i]); //uwolnienie pamieci
free(tab2); //uwolnienie pamieci
tab2 = NULL;
}

int main()
{

funkcja();

  return 0;
}
