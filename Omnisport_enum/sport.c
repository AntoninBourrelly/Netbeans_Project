/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "sport.h"

typeAdherent *creerAdherent()
{
    
    typeAdherent *unAdherent;
    unAdherent = (typeAdherent *)malloc(1 * sizeof(unAdherent));
    
    printf("Donnez votre nom : \n");
    scanf("%s",&unAdherent->nom);
    
    printf("Donnez votre prénom : \n");
    scanf("%s",&unAdherent->prenom);
       
    printf("Donnez votre date de naissance : \n");
    scanf("%s", &unAdherent->Date);
    
    printf("Donnez votre n° de licence : \n");
    scanf("%s",&unAdherent->identifiant);
    
    printf("Donnez votre activité : \n");
    printf("\nNatation ----> 0 \n");
    printf("Athletisme --> 1 \n");
    printf("Basket ------> 2 \n");
    printf("Aviron ------> 3 \n");
    printf("Tennis ------> 4 \n");
    scanf("%u",&unAdherent->idActivite);
    
    printf("vous êtes inscrit.\n\n");
    
    return unAdherent;
}

void afficherAderent(typeAdherent *unAdherent)
{
    printf("%s\n%s\n%s\n", unAdherent->nom,
                            unAdherent->prenom,
                            unAdherent->identifiant );
    switch(unAdherent->idActivite)
    {
        case NATATION :
            printf("Natation\n");
            break;
            
        case ATHLETISME :
            printf("Athletisme \n");
            break;
            
        case BASKET :
            printf("Basket \n");
            break;
            
        case AVIRON :
            printf("Aviron \n");
            break;
            
        case TENNIS :
            printf("Tennis \n");
            break;
            
        default :
            printf("Activité inconnue\n");
            break;
    }
}

void afficherMenu()
{
    
    int compteurAdherent = 3;
    char choix;
  
   
    do{
        printf("Actions possibles\n\n");
        printf("\t\tA - - -> Ajouter un Adherent\n");
       if( compteurAdherent != 0) 
       {
        printf("\t\tS - - -> Spprimer un Adherent\n");
        printf("\t\tM - - -> Modifier une fiche\n");
        printf("\t\tV - - -> Voir le conenu d'une fiche\n");
        printf("\t\tL - - -> Voir le conenu de l'ensemble des fiches\n");
        printf("\t\tE - - -> Supprimer toutes les fiches\n");
       }else{
        printf("\t\tQ - - -> Quitter\n");
       }
        printf("\n\t\t\tVotre choix : \n");
        scanf("%c", &choix);
        getchar();
        
          switch (choix) 
        {
            case 'A':printf("Ajouter");
                break;
            case 'S':printf("Supprimer");
                break;
            case 'M':printf("Modifier");
                break;
            case 'V':printf("Voir une fiche");
                break;
            case 'L':printf("Voir les fiches");
                break;
            case 'E':printf("Supprimer tous");
                break;
            case 'Q':printf("Fin");
                break;
            default: printf("Erreur de choix , recommencer !\n");
                break;
        }
    }while (choix != 'Q');
}

void afficherDate(typeDate date)
{
    printf("\tLa date de naissance de l'adhérent est : ");
    printf("%u/%u/%u",date.jour,date.mois,date.annee); 
}

void afficherActivite(sports activite)
{
    char *tabSports[NBMAXSPORTS] = { "NATATION", "ATHLETISME", "AVIRON", "BASKETBALL", "TENNIS"};
    printf("%s ",tabSports[activite]);
}

void afficherUnAdherent(typeAdherent *ad)
{
    unsigned int indActivite;
    
    printf("\tNom : %s\n",ad->nom);
    printf("\tPrénom : %s\n",ad->prenom);
    afficherDate(ad->Date);
    
    printf("\tNombre des disciplines pratiquées : %d\n",ad->nbdiscipline);
    printf("\tNuméro de licence : %s\n",ad->identifiant);
    
    for(indActivite = 0; indActivite < ad->nbdiscipline; indActivite++)
    {
        afficherActivite(ad-> idActivite[indActivite]);
    }
}