//
// Created by Daniel on 9/18/2017.
//
/*
 *  EE312 Assignment 3.
 *  On my honor, Daniel Canterino, this programming assignment is my own work.
 *
 *  A program to print out a Rocketship in ASCII art form.
 *
 *  Name: Daniel Canterino
 *  email address: dnc1231@verizon.net
 *  UTEID: djc3323
 *  Section 5 digit ID: 16115
 *  Number of slip days used on this assignment: 0
 *. Total number of slip days used this semester: 0
 */

#include <stdio.h>

const int SIZE=3;
void printTip();
void printSplit();
void topHalf();
void bottomHalf();

int main(){
    printTip();
    printSplit();
    topHalf();
    bottomHalf();
    printSplit();
    bottomHalf();
    topHalf();
    printSplit();
    printTip();
}


/*This function prints the tip as well as the flame for the rocketship. It takes into account
 * the correct amount of spaces and \/ as well based off slope and size*/
void printTip(){
    for (int i = 1; i < 2 * SIZE; i++){
        for (int j = 1; j <= -i + (2 * SIZE); j++) {
            printf (" ");
        }
        for (int j = 1; j <= i; j++){
            printf ("/");
        }
        printf ("**");
        for (int k = 1; k <= i; k++){
            printf ("\\");
            }
        for (int l = 1; l <= -i + (2 * SIZE); l++){
            printf (" ");
        }
        printf ("\n");
    }
}

/*This function prints the split between the sections for the rocketship. It takes into account
 * the correct amount of + and =* well based off slope and size*/
void printSplit(){
    printf("+");
    for (int i = 1; i <= 2 * SIZE; i++){
        printf("=*");
    }
    printf("+\n");
}

/*This function prints the upward arrow portions of the middle sections of the rocketship aka the upward
 * facing diamonds /\. It does this based off slope and size*/
void topHalf(){
    for (int i = 1; i <= SIZE; i++){
        printf("|");
        for (int j = 1; j <= -i + SIZE; j++){
            printf(".");
        }
        for (int k = 1; k <= i; k++){
            printf("/\\");
        }
        for (int l = 1; l <= -i + SIZE; l++){
            printf("..");
        }
        for (int m = 1; m <= i; m++){
            printf("/\\");
        }
        for (int n = 1; n <= -i + SIZE; n++){
            printf(".");
        }
        printf("|\n");
    }
}

/*This function prints the downward arrow portions of the middle sections of the rocketship aka the downward
 * facing diamonds \/. It does this based off slope and size*/
void bottomHalf(){
    for (int i = 1; i <= SIZE; i++){
        printf("|");
        for (int j = 1; j <= i - 1; j++){
            printf(".");
        }
        for (int k = 1; k <= -i + SIZE + 1; k++){
            printf("\\/");
        }
        for (int l = 1; l <= i - 1; l++){
            printf("..");
        }
        for (int m = 1; m <= -i + SIZE + 1; m++){
            printf("\\/");
        }
        for (int n = 1; n <= i - 1; n++){
            printf(".");
        }
        printf("|\n");
    }
}

