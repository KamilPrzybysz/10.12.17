#include <stdio.h>
#include <stdlib.h>

int funkcja()
{
  //wczytaj wymiary
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




    printf("\n\nTABLICA B\n");
   int **tab3;
    tab3=(int**)malloc(w*sizeof(int *)); //alokacja pamieci
    for(int i=0; i<w; i++)
    {
    tab3[i]=(int*)malloc(k*sizeof(int));
    for ( int j = 0; j < k; ++j) //wpisanie wartosci do tablicy
    tab3[i][j]=(i+j);
    }
   //wypisz tab2[w][k]
   for ( int i = 0; i < w; ++i, printf("\n") )
    for ( int j = 0; j < k; ++j)
    printf("%d\t",tab3[i][j]);


    printf("\n\nTABLICA C\n");
    int **tab4;
    tab4=(int**)malloc(w*sizeof(int *)); //alokacja pamieci
    for(int i=0; i<w; i++)
    {
    tab4[i]=(int*)malloc(k*sizeof(int));
    for ( int j = 0; j < k; ++j) //wpisanie wartosci do tablicy
    tab4[i][j]=(i+i+j+j);
    }
    //wypisz tab2[w][k]
    for ( int i = 0; i < w; ++i, printf("\n") )
    for ( int j = 0; j < k; ++j)
    printf("%d\t",tab4[i][j]);













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

    //zniszcz tab4
    for(int i=0; i<w; i++)
     free(tab4[i]); //uwolnienie pamieci
     free(tab4); //uwolnienie pamieci
     tab4 = NULL;

}

int main(void)
{
funkcja();

return 0;
}
