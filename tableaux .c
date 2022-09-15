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
                             Tableau croissant
*/
/*


  int main(){
    int i,j,n,x;

      printf("entrer le nombre de cases que vous voulez:"); //la taille du tableau -- Size of the table
      scanf("%d",&n);

      int tab[n];
       for ( i = 0; i < n ; i++) 
       {
        printf("l'element %d est :",i+1); //remplissage du tableau - filling the table
        scanf("%d",&tab[i]);
       }



       for ( i = 0; i < n -1; i++)      //tri par selection
       {
           x=i;                         // initaliser l'index de x par i 
           
           
           
           for(j=i+1;j < n ; j++){      // boucle autour des element du tableau
             
             if (tab[x]<tab[j]){                   // si un element a une valeur plus petite que la valeau de  x  alors echange leur index ;
                 x=j;
             }
       }
        if (x!=i){ // si la condition cite avant est realise , alors echange leur valeur
            int tmp=tab[i];
            tab[i]=tab[x];
            tab[x]=tmp;
        }
       }
       // une boucle qui nous affiche le tableau apres son tri en ordre
    for  ( i = 0; i < n ; i++) {
        printf("%d\n",tab[i]);
    } 
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
 
  printf("\n******** tableau triée par ordre croissant ********\n");
 
  for (w=0; w < 10; w++)
     printf("%d\n", Y[w]);
  return 0;

  //                    Tableau decroissant 
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
      if (Y[x] <  Y[u])
        x = u;
    }
    if (x != w)
    {
      r = Y[w];
      Y[w] = Y[x];
      Y[x] = r;
    }
  }
 
  printf("\n******** tableau triée par ordre decroissant ********\n");
 
  for (w=0; w < 10; w++)
     printf("%d\n", Y[w]);

     /*            Tri par bull
     int i,tmp,x;
     printf("combien de case voulez vous ?:\n");
     scanf("%d",&x);
     int f[x];
     printf("Donner la totalite des nombres:\n");
      for ( i = 0; i <x ; i++)
      {
        scanf("%d",&f[i]);
     
     }
     int k;
    for ( i = 0; i <x-1 ; i++)
    {
         for ( k = 0; k <x-1 ; k++)
       {
        if (f[k]>=f[k+1])
        {
            tmp=f[k];
            f[k]=f[k+1];
            f[k+1]=tmp;
         }
       }
    }
    for ( int j = 0; j <x ; j++)
    printf("%d\n",f[j]);
*/

/*              tri par insertion
#include <stdio.h>
#include <math.h>
#include <string.h>
 int main(){
    int i,tmp,x;
     printf("combien de case voulez vous ?:\n");
     scanf("%d",&x);
     int f[x];
     printf("Donner la totalite des nombres:\n");
      for ( i = 0; i <x ; i++)
      {
        scanf("%d",&f[i]);
     
     }
     
    for ( int j = 0; j <=x-1 ; j++)
    {
        while (f[j]>0 && f[j-1]>f[j])
        {
         tmp=f[j];
         f[j]=f[j-1];
         f[j-1]=tmp;

         j--;
        }
    }
    for ( int k = 0; k < x ; k++)
    {
      printf("%d\n",f[k]);
    }
    
 }
                                                                    recherche par dichotomique
    #include <stdio.h>
#include <math.h>
#include <string.h>
 int main(){
    int i,j,n,x;

      printf("entrer le nombre de cases que vous voulez:"); //la taille du tableau -- Size of the table
      scanf("%d",&n);

      int tab[n];
       for ( i = 0; i < n ; i++) 
       {
        printf("l'element %d est :",i+1); //remplissage du tableau - filling the table
        scanf("%d",&tab[i]);
       }



       for ( i = 0; i < n -1; i++)      //tri par selection
       {
           x=i;                         // initaliser l'index de x par i 
           
           
           
           for(j=i+1;j < n ; j++){      // boucle autour des element du tableau
             
             if (tab[x]>tab[j]){                   // si un element a une valeur plus petite que la valeau de  x  alors echange leur index ;
                 x=j;
             }
       }
        if (x!=i){ // si la condition cite avant est realise , alors echange leur valeur
            int tmp=tab[i];
            tab[i]=tab[x];
            tab[x]=tmp;
        }
       }
       // une boucle qui nous affiche le tableau apres son tri en ordre
    for  ( i = 0; i < n ; i++) {
        printf("%d\n",tab[i]);
    }
    
    int r;
     printf("saisisser votre recherche :");
     scanf("%d",&r);

    int start=0;
    int end=n;
    int mid=(end+start)/2;
    while(tab[mid]!=r && start <= end){
      if (tab[mid]>r)
         {
         end=mid-1;
         mid=(start+end)/2;
         }
     else 
       start=mid+1;
       mid=(start+end)/2;
    }
   if (tab[mid]==r)
   {
    printf("l'element se trouve parmi les resultat");
   }
    else printf("l'element est introuvable"); 
   
   return 0;     
 }
 
 // fin du programme
                                             allocation de memoire



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
 
 */
  return 0;
}
