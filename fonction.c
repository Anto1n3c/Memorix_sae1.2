#include "declaration.h"
// fonction qui crée le jeu de carte
void creer_jeu_de_cartes(int n) {
  int nombre_paires = n;
  int total_cartes = 2 * n + 1;
  int *cartes = malloc(total_cartes * sizeof(int));

  // Assigner des nombres aux cartes
  for (int i = 0; i < nombre_paires; i++) {
    cartes[i] = i + 1;
    cartes[i + nombre_paires] = i + 1;
  }
  cartes[total_cartes - 1] = 0; // ajoue du jocker

  // Mélanger les cartes
  srand(time(0));
  for (int i = total_cartes - 1; i > 0; i--) {
    int j = rand() % (i + 1);
    int temp = cartes[i];
    cartes[i] = cartes[j];
    cartes[j] = temp;
  }

  // Afficher les cartes mélangées sous forme de tableau
  int column_count = 7;
  for (int i = 0; i < total_cartes; i++) {
    if (i % column_count == 0 && i != 0) {
      printf("\n");
    }
    printf("%d\t", cartes[i]);
  }

  free(cartes);
}
