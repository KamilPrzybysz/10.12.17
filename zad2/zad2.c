#include <stdio.h>
#include <stdlib.h>

int main()
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

   printf("\n\nTABLICA B\n");
    int **tab3;
     tab3=(int**)malloc(w*sizeof(int *)); //alokacja pamieci
     for(int i=0; i<w; i++)
     {
     tab3[i]=(int*)malloc(k*sizeof(int));
     for ( int j = 0; j < k; ++j) //wpisanie wartosci do tablicy
     tab3[i][j]=((i+j)*c);
     }
    //wypisz tab2[w][k]
    for ( int i = 0; i < w; ++i, printf("\n") )
     for ( int j = 0; j < k; ++j)
     printf("%d\t",tab3[i][j]);



     //zniszcz tab2
for(int i=0; i<w; i++)
 free(tab2[i]); //uwolnienie pamieci
 free(tab2); //uwolnienie pamieci
 tab2 = NULL;

 //zniszcz tab3
 for(int i=0; i<w; i++)
  free(tab3[i]); //uwolnienie pamieci
  free(tab3); //uwolnienie pamieci
  tab3 = NULL;

  return 0;
}
