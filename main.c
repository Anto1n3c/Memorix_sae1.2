#include "declaration.h"

int main(void) {

  Joueur joueurs[MAX_PLAYERS];
  int nombre_joueurs;

  printf("Entrez le nombre de joueurs (maximum 4) : ");
  scanf("%d", &nombre_joueurs);

  for (int i = 0; i < nombre_joueurs; i++) {
    printf("Entrez le nom du joueur %d : ", i + 1);
    scanf("%s", joueurs[i].nom);
  }

  int nbpaires = 31;
  creer_jeu_de_cartes(nbpaires);

  return 0;
}
