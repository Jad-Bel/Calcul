#include <stdio.h>
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

    for(int i = 0; i < n; i++) {
        printf("Entrer le nomb")
    }
}
