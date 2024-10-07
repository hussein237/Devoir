#include <iostream>

int main() {
    int choix;
    float A = 0, P = 0;
    float c, Longueur, largeur, Base, Hauteur, rayon, a, b;

    std::cout << "Choisissez une forme:\n";
    std::cout << "1. Rectangle\n";
    std::cout << "2. Triangle\n";
    std::cout << "3. Cercle\n";
    std::cout << "Entrez votre choix (1-3): ";
    std::cin >> choix;

    switch (choix) {
        case 1:
            std::cout << "Entrez la longueur du rectangle: ";
            std::cin >> Longueur;
            std::cout << "Entrez la largeur du rectangle: ";
            std::cin >> largeur;
            if (Longueur < 0 or largeur < 0) {
                std::cout << "Veuillez entrer des valeur de longueur et largeur positive.\n";
            } else {
                A = Longueur * largeur;
                P = 2 * (Longueur + largeur);
            }
            break;
        case 2:
            std::cout << "Entrez la base : ";
            std::cin >> Base;
            std::cout << "Entrez le premier côté : ";
            std::cin >> a;
            std::cout << "Entrez le deuxième côté : ";
            std::cin >> b;
            std::cout << "Entrez la hauteur : ";
            std::cin >> Hauteur;
            if (Base < 0 or Hauteur < 0 or a < 0 or b < 0) {
                std::cout << "Veuillez entrer des valeurs positive.\n";
            } else {
                A = 0.5 * Base * Hauteur;
                P = a + b + Base;
            }
            break;
        case 3:
            std::cout << "Entrez le rayon : ";
            std::cin >> rayon;
            if (rayon < 0) {
                std::cout << "Veuillez entrer une de rayon valeur positive.\n";
            } else {
                A = 3.14 * rayon * rayon;
                P = 2 * 3.14 * rayon;
            }
            break;
        default:
            std::cout << "Choix invalide.\n";
            return 1;
    }

    if (choix >= 1 and choix <= 3) {
        std::cout << "L'aire de votre figure est: " << A << std::endl;
        std::cout << "Le perimetre de votre figure est: " << P << std::endl;
    } else {
        std::cout << "Vous ne pouvez qu'entrer de 1 à 3.\n";
    }

    return 0;
}
