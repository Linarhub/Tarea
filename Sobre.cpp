//
// Created by Linarmode on 5/21/2025.
//

#include "Sobre.h"

Sobre::Sobre() {
    length = 1;
    width = 1;
    addcost = 45;
}
Sobre::Sobre(double a, double b, double c) {
    this -> length = a;
    this -> width = b;
    this -> addcost = c;
}
double Sobre::calculaCosto() const {
    double a = Envio::calculaCosto();
    if (length > 25 && width > 30) {
        return a + addcost;
    }
        return a;
}
void Sobre::setProportions(double a, double b) {
    length = a;
    width = b;
}
