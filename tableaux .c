#include <stdio.h>
#include <math.h>
#include <string.h>
 int main(){

    /* un tableau : est un ensemble d'element stockes de la memoire de l'ordinateur , qui on le meme nom et le meme type 
                    mais qui se differencie par leur indice .
    */
   
 int i,S,M,F[20]; // type de tableau"int-float-char..." nom du tableau [taille] 
 S=0;
    
    
    // remplir le tableau scanf("%..",&nomtableau[indice]);
    // pour lire ou appeller une information enregister dans le tableau printf("%..",nomtableau[indice])
    //exemple: Enter la note de 20 etudiant et laisser le programme en donner la moyenne:
    for (i = 0; i < 20; i++) 
    {
      printf("enter la note de l'etudiant %d :",i+1);
      scanf("%d",&F[i]);
      S=S+F[i];
    }
    
    M=S/20;
    printf("la moyenne est :%d\n",M);
    
 
  //exemple 2: donner le min valeur d'un ensemble delement 
 int min,j,h,b[10];
    min = b[0];
   printf("entrer la total des nombres :\n");
   for ( j = 0; j < 10; j++)
   {
      printf("b[%d] = ", j);
      scanf("%d",&b[j]);
    for (h = 0; h > 5; h++)
    {
    
    
      if (min > b[j])
      {
        min = b[j];
      }
    } 
   }
   printf ("the min is :%d\n",min);
 
 
//exemple 3: donner le max valeur d'un ensemble delement 
int max,k, l,v[5];
    max = v[0];
   printf("entrer la total des nombres :\n");
   for ( k = 0; k < 5; k++)
   {
      printf("v[%d] = ", k);
      scanf("%d",&v[k]);
     
   }
   for (l = 0; l < 5; l++) {
       if (max < v[l])
      {
        max = v[l];
      }  
   }
   printf ("the max is :%d /n",max);
 
 /*                              Tri en selection 
                se base sur la comparaison des donnes pour arriver au resultat
*/
  int Y[10];
  int w, u, r, x;
 
   //afficher les éléments du tableau
   printf("les elemetes du tableau sont :\n");
   for (w=0; w < 10; ++w)
   {
      scanf("%d",&Y[w]);
   }
 
  for (w=0; w < 9; w++)
  {
    x = w;
   
    for (u=w + 1; u < 10; u++)
    {
      if (Y[x] > Y[u])
        x = u;
    }
    if (x != w)
    {
      r = Y[w];
      Y[w] = Y[x];
      Y[x] = r;
    }
  }
 
  printf("\n******** tableau triée par ordre crowssant ********\n");
 
  for (w=0; w < 10; w++)
     printf("%d\n", Y[w]);
  return 0;
}
  
   

    