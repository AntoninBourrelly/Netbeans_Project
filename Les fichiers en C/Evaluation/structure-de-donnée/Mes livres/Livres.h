#ifndef LIVRES_H
#define LIVRES_H
#define ID 13
#define MAX 100
#define LIVREMAX 5000





    typedef enum {
        ROMAN, POLICIER, BD, JEUNESSE, LOISIRS, SCIENCES
    } typeGenre;

    typedef struct {
        char titre[MAX];
        char auteurs[MAX];
        int annee;
        typeGenre type[6];
        float prix;
        char identifiant[13];
        int quantite;
    } typeLivre;


char cleISBN(char *codeISBN);
int verificationISBN(char *codeISBN);
void actualiserPrixPrix(double taxe1, double taxe2, double *prix);
void afficherMenu(int compteurLivre);
void afficherUnLivre(typeLivre *ptrLivre);
void afficherGenre(typeGenre Untype);
typeLivre *creerUnLivre();
void afficherLivres(typeLivre *tab[ ], int nb);
void actualiserPrix(double taxe1, double taxe2, double *prix);
int rechercherNumLivre(typeLivre *tab[], int nb);

#endif /* LIVRES_H */

