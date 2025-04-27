/******************************************************************************
*  ASR => 4R2.04                                                              *
*******************************************************************************
*                                                                             *
*  N° de Sujet : 1                                                            *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé : Analyse trame GPS type GPGGA                                    *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 : BERTHOMIEU Hugo                                              *
*                                                                             *
*  Nom-prénom2 : FAURE Mathias                                                *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier : Analyse.c                                                 *
*                                                                             *
******************************************************************************/

#include <stdio.h>      // pour les entrées et sorties
#include <stdbool.h>    // pour utiliser les types booléens
#include <string.h>     // pour utiliser les chaînes de caractères
#include "analyse.h"
#include "analyse.c"

void main() {
	// Trame à tester
    char trame[] = "$GPGGA,123519,4807.038,N,01131.324,E,1,08,0.9,545.4,M,46.9,M,,*42";
	
	// Vérifie que la trame contient 14 virgules et commence par $GPGGA
    if (verifier(trame) == false) {
        printf("Le format n'est pas bon, veuillez recommencer avec un format valide. La conversion ci-dessous est par conséquent incorrecte.\n");
    }

    char heure[7], latitude[9], longitude[10];			// Extractions
    char heure2[20], latitude2[20], longitude2[20];		// Mises en forme

    // Extraction des données depuis la trame
    extraireHeure(trame, heure);
    extraireLatitude(trame, latitude);
    extraireLongitude(trame, longitude);

    // Mise en forme 
    formaterHeure(heure, heure2);
    convertirLatitude(latitude, latitude2);
    convertirLongitude(longitude, longitude2);

    // Affichage des résultats
    afficherHeure(heure2);
    afficherLongitudeLatitude(longitude2, latitude2);
}