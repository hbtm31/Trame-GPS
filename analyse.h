#include <stdbool.h>

// Vérifie si la trame est bien formée
bool verifier(char trame[]);

// Fonctions d'extraction
void extraireHeure(char trame[], char heure[]);
void extraireLatitude(char trame[], char latitude[]);
void extraireLongitude(char trame[], char longitude[]);

// Fonctions de transformation de format
void formaterHeure(char heure[], char heurebis[]);
void convertirLatitude(char latitude[], char latitudebis[]);
void convertirLongitude(char longitude[], char longitudebis[]);

// Fonctions d'affichage
void afficherLongitudeLatitude(char longitude[], char latitude[]);
void afficherHeure(char heure[]);