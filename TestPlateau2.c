#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



int main(int argc, char *argv[])
{
  int plateau[50][100]; // le tableau 2D représentant le plateau de jeu
  int hauteur, largeur; // taille utile
  int blanc, noir;
  int ligne, colonne; // indices pour parcourir le tableau
  int PV=0, ATQ=0, DEF=0, LVL=0, XP=0, OR=0, PVMAX=0;

  int NOM = 0;
  int Ennemie =0;



  char case_blanche;

  case_blanche = 219; // Code ASCII d'une case blanche

  hauteur = 50;
  largeur = 100;

  blanc = 1;
  noir = 0;

  printf ("_______________________________________________________________________________\n\n");
printf ("                              BashLife\n");
printf ("_______________________________________________________________________________\n\n");


  for (ligne = 0 ; ligne<hauteur-1 ; ligne++)
  {
       for (colonne = 0 ; colonne<largeur-1 ; colonne++)
       {
            plateau[ligne][colonne]=(ligne+colonne) %2; // cela alterne des 0 et des 1
       }
  }

  for (ligne = 0 ; ligne<hauteur-1 ; ligne++)
  {
       for (colonne = 0 ; colonne<largeur-1 ; colonne++)
       {
            if (plateau[ligne][colonne]==0)
            {
            printf("%c", case_blanche);
            //printf(" "); // espace pour les cases noires
            }
            else
            {
            printf("%c", case_blanche);
            }
       }
       printf("\n");
  }
  printf("NOM: %s;\n PV: %d;\n LVL: %d;\n OR: %d;\n PVMAX: %d;\n ATQ: %d;\n DEF: %d;\n", NOM,PV,LVL,OR,XP,PVMAX,ATQ,DEF);
  printf("\n");
  printf("Ennemie: %s;\n PV: %d;\n LVL: %d;\n OR: %d;\n ", Ennemie,PV,LVL,OR);

  system("PAUSE");   // Le programme se met en pause
  return 0;          // Le programme renvoie le nombre 0 puis s'arrête
}
