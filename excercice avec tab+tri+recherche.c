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