/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   biblioLivre.h
 * Author: nderouelle
 *
 * Created on 16 janvier 2019, 10:21
 */

#ifndef BIBLIOLIVRE_H
#define BIBLIOLIVRE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

char cleISBN(char *codeISBN);
int  verifierISBN(char *codeISBN);
void actualiserPrix(double taxe1, double taxe2, double *prix);

#endif /* BIBLIOLIVRE_H */

