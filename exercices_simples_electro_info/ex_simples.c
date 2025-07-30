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


#include <stdio.h>

int main(){
    int int1, int2;
    int nb3;
    scanf("%d%d",&int1,&int2);
    nb3 = int1/int2;
    if (nb3 != 0){
        printf("%d/%d=%d\n",int1, int2, nb3);
    }else{
        printf("Erreur : division par 0 !\n");
    }
    return 0;
}