#include <stdio.h>
#include <math.h>
#include <string.h>
#include<stdlib.h>
 int main(){ 

  int n,m; // allocation automatique : on laisse le systeme prendre en charge de definir le stockage des variables
               //                          automatiquement par rapport au donnes(stack)
     printf("entrer le nombre de cases que vous voulez:"); //la taille du tableau -- Size of the table
      scanf("%d",&n);
      int T[n];




              //- allocation dynamique:le systeme alloue manuallemet de la memoir en fonctions des besoin 
              //                       du programme dont {malloc-callor-realloc-free (Heap)
 
int *P=malloc(m*sizeof(int));//Malloc:envoie le pointeur vers le premier espace alloue et permet d'allouer
                              // dynamiquement la memoir de la taille demande
                              // syntaxe : void*malloc(taille);
 printf("entrer le nombre de cases que vous voulez:"); //la taille du tableau -- Size of the table
      scanf("%d",&m);
      T[m];

int *P=calloc(m,sizeof(int));//Calloc:iniatialise chaque bloc de memoir avant de l'utiliser puis alloue
                             // dynamiquemet le nombre de blocs specifie du type specifie
                              // syntaxe : void*calloc(nombre_delement,taille_delement);
       scanf("%d",&m);
      T[m];
 P=realloc(P,m+2*sizeof(int));//Realloc:on l'utilise quand le memoir dynamique est insuffisante ou supperieure
                              // a celle requise , donc elle nous permet de modifier une memoire precedemment appele
                              // syntaxe : void*realloc(pointeur,taille_octet   );
       
 }