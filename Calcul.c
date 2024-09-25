#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void addition() {
    int n, num;
    float sum = 0;

    printf("Combien de nombres voulez-vous additionner ? ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Entrer le numero %d: ", i+1);
        scnaf("%d", &num);
        sum += num;
    }

    printf("La so,,e est: %.2f\n", sum);
}

void soustraction() {
    int a,b;
    printf("Entrer le premier nombre: ");
    scnaf("%d", &a); 
    printf("Entrer le deuxieme nombre: ");
    scnaf("%d", &b); 

    printf("La difference est: %d\n", a - b);   
}

void multiplication() {
    int n, num;
    long long produit;

        printf("\nCombien de nombres voulez-vous multiplier? ");
        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            printf("Entrer le numero %d: ", i+1);
            scanf("%d", &num);
            produit *= num;
    } printf("Le produit est: %lld\n", produit);
}

void division() {
    double a, b;

    printf("Entrer le premier nombre: ");
    scnaf("%lf", &a); 
    printf("Entrer le deuxieme nombre: ");
    scnaf("%lf", &b);

    if(b != 0) {
        printf("Le resultat de la division est: %lf", a/b);
    }
}

void moyenne() {
    int n, num;
    float sum=0;

    printf("\nCombien de nombre voudre-vouz calculer leur moyenne: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Entrer le nombre %d", i+1);
        sum += num;
    }
    printf("La moyenne est %.2f", sum / n);
}

void valeurAbso() {
    int num;

    printf("Entrer un nombre: ");
    scanf("%d", &num);

    printf("La valeur absolue du %d, est: %d", num, abs(num));
}

void exponentiation() {
    int base, expo;
    double result = 1.0;

    printf("Entrer la base: ");
    scanf("%d", &base);
    printf("Entrer l'exposant");
    scanf("%d", &expo);

    for(int i = 0; i < expo; i++) {
        result *= base;
    } printf("%d ^ %d = %.2lf\n", base, expo, result);
}

void racinne_carree() {
    float num;

    do {
        if(num <= 0) {
            printf("Entrer un nombre positif: ");
            scanf("%f", &num);
            printf("Number invalid. Saisir un nombre positif.");
        }
    }while(num < 0);

    if(num >= 0) {
        printf("La racine carree de %.2f est: %.2f\n", num, sqrt(num));
    } 
}

int main() {
    int choix;

    do {
        printf("\n**** MENU ****\n");
        printf("1. Addition\n");
        printf("2. Soustraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Moyenne\n");
        printf("6. Valeur absolue\n");
        printf("7. Exponentiation\n");
        printf("8. Racine carrée\n");
        printf("9. Quitter\n");
        printf("Choisiser une option: ");
        scanf("%d", &choix);
    
    switch (choix) {
        case 1 : addition(); break;
        case 2 : soustraction(); break;
        case 3 : multiplication(); break;
        case 4 : division(); break;
        case 5 : moyenne(); break;
        case 6 : valeurAbso(); break;
        case 7 : exponentiation(); break;
        case 8 : racinne_carree(); break;
        case 9 : printf("Quitter....\n"); break;
        default : printf("Choix invalide."); break;

        }
        
    }while (choix != 9);

    return 0;
}
