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
 int min,j,h,Y[10];
    min = Y[0];
   printf("entrer la total des nombres :\n");
   for ( j = 0; j < 10; j++)
   {
      printf("Y[%d] = ", j);
      scanf("%d",&Y[j]);
    for (h = 0; h > 5; h++)
    {
    
    
      if (min > Y[j])
      {
        min = Y[j];
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
   printf ("the max is :%d ",max);
 }
 
   

    