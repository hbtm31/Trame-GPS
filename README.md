## Projet en langage C pour analyser une trame GPS de type GPGGA.
Développeurs: BERTHOMIEU Hugo et FAURE Mathias

Ce programme extrait et convertit l'heure, la longitude et la latitude d'une trame GPS GPGGA à l'aide de plusieurs fonctions :
- les fonctions d'extractions (ex : extraireHeure)
- les fonctions de convertions (ex : convertirLongitude)
- les fonctions d'affichages

Exemple de la trame utilisée pour effectuer des tests :
$GPGGA,123519,4807.038,N,01131.324,E,1,08,0.9,545.4,M,46.9,M,,*42

Afin d'utiliser le programme il faut compiler soit avec : make main soit avec : gcc main.c -o main et au final utiliser la commande ./main .

Affichage attendu :
Heure : xxhxxmxxs
Latitude : xx°xx'xx.xx"
Longitude : xxx°xx'xx.xx"

Documentation des fonctions :

La fonction "verifier" prend en paramètre une trame donnée par l'utilisateur puis vérifie que celle-ci contiennent au début "$GPGGA" et 14 virgules puis retourne true ou false.
La fonction extraireHeure prend en paramètres la trame et une chaîne de caractères dans laquelle sera copiée les données de la trame qui correspondent à l'heure.
La fonction extraireLatitude prend en paramètres la trame et une chaîne de caractères dans laquelle sera copiée les données de la trame qui correspondent à la latitude.
La fonction extraireLongitude prend en paramètres la trame et une chaîne de caractères dans laquelle sera copiée les données de la trame qui correspondent à la longitude.
La fonction formaterHeure prend en paramètres les données extraites de la rame concernant l'heure et une nouvelle chaîne de caractères dans laquelle seront mises en forme les données.
La fonction convertirLatitude prend en paramètres les données extraites de la rame concernant la latitude et une nouvelle chaîne de caractères dans laquelle seront mises en forme les données.
La fonction convertirLongitude prend en paramètres les données extraites de la rame concernant la longitude et une nouvelle chaîne de caractères dans laquelle seront mises en forme les données.
La fonction afficherHeure prend en paramètre l'heure après formatage et l'affiche.
La fonction afficherLongitudeLatitude prend en paramètres la longitude et la latitude après convertions et les affichent.
