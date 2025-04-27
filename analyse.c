#include <stdio.h>      // pour les entrées et sorties
#include <stdbool.h>    // pour utiliser les types booléens
#include <string.h>     // pour utiliser les chaînes de caractères
#include "analyse.h"

// Vérifie que la trame contient exactement 14 virgules et commence par $GPGGA
bool verifier(char trame[]) {
    int virgules = 0;
    for (int i = 0; i < strlen(trame); i++) {
        if (trame[i] == ',') {
            virgules++;
        }
    }
    
    // Prend les 6 premiers caractères de la trame pour comparer
    char id[6];
    strncpy(id, trame + 0, 6);
    id[6] = '\0';
    
    // Vérifications
    if (virgules != 14) {
    	return false;
    }
    if (strcmp(id,"$GPGGA")!=0){
    	return false;
    }
    return true;
}

// Extrait les 6 premiers chiffres de l’heure à partir de l’indice 7
void extraireHeure(char trame[], char heure[]) {
    strncpy(heure, trame + 7, 6);
    heure[6] = '\0';
}

// Extrait la latitude (8 caractères à partir de l’indice 14)
void extraireLatitude(char trame[], char latitude[]) {
    strncpy(latitude, trame + 14, 8);
    latitude[8] = '\0';
}

// Extrait la longitude (9 caractères à partir de l’indice 25)
void extraireLongitude(char trame[], char longitude[]) {
    strncpy(longitude, trame + 25, 9);
    longitude[9] = '\0';
}

// Transforme l'heure dans le format voulu
void formaterHeure(char heure[], char heurebis[]) {
    sprintf(heurebis, "%c%ch%c%cm%c%cs", heure[0], heure[1], heure[2], heure[3], heure[4], heure[5]);
}

// Transforme la latitude dans le format voulu
void convertirLatitude(char latitude[], char latitudebis[]) {
    sprintf(latitudebis, "%c%c°%c%c'%c%c.%c%c\"", latitude[0], latitude[1], latitude[2], latitude[3], latitude[5], latitude[6], latitude[7], latitude[8]);
}

// Transforme la longitude dans le format voulu
void convertirLongitude(char longitude[], char longitudebis[]) {
    sprintf(longitudebis, "%c%c%c°%c%c'%c%c.%c%c\"", longitude[0], longitude[1], longitude[2], longitude[3], longitude[4], longitude[6], longitude[7], longitude[8], longitude[9]);
}

// Affiche l’heure formatée
void afficherHeure(char heure[]) {
    printf("Heure : %s\n", heure);
}

// Affiche la latitude et la longitude converties
void afficherLongitudeLatitude(char longitude[], char latitude[]) {
    printf("Latitude : %s\n", latitude);
    printf("Longitude : %s\n", longitude);
}