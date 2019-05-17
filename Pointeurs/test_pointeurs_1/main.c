/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: abourrelly
 *
 * Created on 12 décembre 2018, 10:37
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * 
 */
char *moisNom(int numero){
    
    char *mois[12]={"Janvier","Février","Mars","Avril","Mai","Juin","Juillet",
                        "Août","Septembre","Octobre","Novembre","Décembre"};
    int nbCar;
    char *ptrMois;
    nbCar = strlen(char *)malloc(nbCar * sizeof(char));
}

int main(int argc, char** argv) {

    char *ptrCar;
    int *ptrEntier;
    float *ptrReel;
    
    char *chaine = "12345678000A";
    int i=0;
    void *AdrPtrCar;
    void *AdrPtrEntier;
    void *AdrPtrReel;
    
    ptrCar    = chaine ;
ptrEntier = (int *)chaine ;
ptrReel   = (float *)chaine ;

for(i=0; i<3; i++)
{
	printf("ptrCar = %X\t*ptrCar = %c\n",ptrCar,*ptrCar);
	printf("ptrEntier = %X\t*ptrEntier = %d\n",ptrEntier,*ptrEntier);
	printf("ptrReel = %X\t*ptrReel = %f\n",ptrReel,*ptrReel);

	ptrCar++;
	ptrEntier++;
	ptrReel++;
	printf("\n");
}
    return (EXIT_SUCCESS);
}

