// Citirea până la numărul magic.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    const int numarMagic = 999;
    int numar, incercari = 0;

    std::cout << "Introduceti un numar: ";

    do {
        std::cin >> numar;
        incercari++;

        if (numar != numarMagic) {
            std::cout << "Mai incearca! Introduceti un alt numar: ";
        }
    } while (numar != numarMagic);

    // Scădem unul din numărul total de încercări pentru a elimina numărul magic
    incercari--;

    std::cout << "Ai introdus numarul magic dupa " << incercari << " incercari." << std::endl;

    return 0;
}