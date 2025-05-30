//
// Created by Linarmode on 5/21/2025.
//

#include "Paquete.h"

Paquete::Paquete() {
    length = 1;
    width = 1;
    depth = 1;
    weight = 1;
    costperkg = 1;
}
Paquete::Paquete(double a, double b, double c, unsigned int d, unsigned int e) {
    this->length = a;
    this->width = b;
    this->depth = c;
    this -> weight = d;
    this->costperkg = e;
}
[[nodiscard]] double Paquete::calculaCosto() const{
    double a = Envio::calculaCosto();
    return a + (costperkg * weight);
}
void Paquete::setAdd(unsigned int a, unsigned int b) {
    weight = a;
    costperkg = b;
}



