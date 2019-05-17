/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: mcoeurjoly&abourelly keur keur <3
 *
 * Created on 9 janvier 2019, 10:48
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float nb1, nb2;
    char op;
    if (argc != 4) {


        printf("usage  %s op nb1 nb2\n", argv[0]);
    } else {
        op = argv[1][0];
        nb1 = atof(argv[2]);
        nb2 = atof(argv[3]);
    }
    switch (op) {
        case '+':
            printf("%f %c %f = %f", nb1, op, nb2, nb1 + nb2);
            break;
        case '-':
            printf("%f %c %f = %f", nb1, op, nb2, nb1 - nb2);
            break;
        case 'x':
            printf("%f %c %f = %f", nb1, op, nb2, nb1 * nb2);
            break;
        case '/':
            printf("%f %c %f = %f", nb1, op, nb2, nb1 / nb2);
            break;
        default:
            printf("Opération Inconnue: %s", argv[1]);
    }
    return (EXIT_SUCCESS);
}

