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

// #include <stdio.h>

// int main(){
//     int nb1,nb2,nb3;
//     scanf("%i%i", &nb1,&nb2);
//     nb3 = nb1%nb2;
//     if (nb3!=0){
//         printf("Le nombre %i est impair\n", nb3);
//     }else{
//         printf("Le nombre %i est pair\n", nb3);
//     }

// }

/*Exercice 4
Demander à l'utilisateur 2 nombres entiers et les stocker dans des variables.

Échanger les 2 valeurs des 2 variables et les afficher.
*/

// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int nb1,nb2,nb3;

//     printf("Entrer un nombre entier (nb1):\n");
//     scanf("%d", &nb1);


//     printf("Entrer un nombre entier (nb2):\n");
//     scanf("%d", &nb2);

//     nb3 = nb1;
//     nb1 = nb2;
//     nb2 = nb3;

//     printf("nb1: %d, nb2: %d\n", nb1,nb2);
//     return 0;
// }

/*Exercice 5

Demander à l'utilisateur 3 nombres entiers et les stocker dans des variables.
Trier les 3 nombres par ordre croissant en échangeant leurs valeurs si nécessaire.
Afficher les 3 nombres.*/

// #include <stdio.h>
// #include <stdlib.h>

// int main(){
//     int ent1,ent2,ent3,temp_var,i;
//     printf("Entrez un premier nombre entier (nb1): ");
//     scanf("%d",&ent1);

//     printf("Entrez un premier nombre entier (nb2): ");
//     scanf("%d",&ent2);

//     printf("Entrez un premier nombre entier (nb3): ");
//     scanf("%d",&ent3);


//     for (i=0;i<3;i++){
//         if (ent2 > ent3){
//             temp_var = ent3;
//             ent3 = ent2;
//             ent2 = temp_var;
//         }
//         if (ent1 > ent2){
//             temp_var = ent2;
//             ent2 = ent1;
//             ent1 = temp_var;
//         }
//     }

//     printf("nb1: %d, nb2: %d, nb3: %d\n",ent1,ent2,ent3);
//     return 0;
// }

/*Exercice 6
Demander à l’utilisateur combien font 2 fois 2 et répéter cette question aussi longtemps que la réponse est fausse.

Ajouter le message "Faux, recommencez" à chaque fausse réponse, et "Bravo !" pour la bonne réponse.*/

/*
#include <stdio.h>
#include <stdlib.h>

int main(){
    int rep;

    rep = 0;
    while (rep != 4){
        printf("Combien font 2*2 ?\n");
        scanf("%d",&rep);
        printf("Faux, recommencez\n");
    }
    printf("Bravo !\n");


    return 0;
}*/

/*Exercice 7
Amélioration de l'exercice 6 : compter le nombre d'essais et l'afficher à la fin : "Bravo ! Vous avez trouvé en x essais."
*/

/*
#include <stdio.h>
#include <stdlib.h>

int main(){
    int rep,nb_try;

    nb_try = 0;
    rep = 0;
    while (rep != 4){
        printf("Combien font 2*2 ?\n");
        scanf("%d",&rep);
        printf("Faux, recommencez\n");
	nb_try += 1;
    }
    printf("Bravo ! Vous avez trouvé en %d essais.\n",nb_try);
    return 0;
}
*/

/*Exercice 8
Demander à l’utilisateur un nombre entier positif. Afficher tous les nombres pairs entre 0 et le nombre saisi."*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int ent1,res_mod,i;
	printf("Un nombre entier positif please :) UwU\n");
	scanf("%d",&ent1);

	printf("nb: %d\n",ent1);
	i=0;
	while(i != ent1){
		res_mod = i%2;
		if (res_mod == 0){
			printf("even_nb: %d\n",i);	
		}
		i += 1;
	}
	return 0;
}






