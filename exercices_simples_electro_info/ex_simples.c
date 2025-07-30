/* Exercice 1
Demander à l’utilisateur deux nombres entiers, 
les mémoriser dans deux variables, 
multiplier leurs valeurs en affectant le résultat à une troisième variable, puis l’afficher.
*/

// #include <stdio.h>

// int main(){
//     int int1, int2;
//     int nb3;
//     scanf("%d%d",&int1,&int2);
//     printf("1st nb:%d, 2nd nb: %d \n",int1, int2);
//     nb3 = int1*int2;
//     printf("%d*%d=%d\n",int1, int2, nb3);
//     return 0;
// }

/*Exercice 2
Même chose que l'exercice 1 avec la division à la place de la multiplication.

Vérifier que le 2ème nombre est différent de zéro, sinon afficher "Erreur : division par 0 !".*/


// #include <stdio.h>

// int main(){
//     int int1, int2;
//     int nb3;
//     scanf("%d%d",&int1,&int2);
//     nb3 = int1/int2;
//     if (nb3 != 0){
//         printf("%d/%d=%d\n",int1, int2, nb3);
//     }else{
//         printf("Erreur : division par 0 !\n");
//     }
//     return 0;
// }

/*Exercice 3
Demander à l’utilisateur de saisir un nombre entier.

Afficher si ce nombre est pair ou impair (le reste de la division entière de ce nombre par deux égal à 0 ou non).

Pour obtenir le reste d'une division, on utilise l'opérateur "Modulo". En langage C l'opérateur Modulo est représenté par le symbole % 
*/

#include <stdio.h>

int main(){
    int nb1,nb2,nb3;
    scanf("%i%i", &nb1,&nb2);
    nb3 = nb1%nb2;
    if (nb3!=0){
        printf("Le nombre %i est impair\n", nb3);
    }else{
        printf("Le nombre %i est pair\n", nb3);
    }

}