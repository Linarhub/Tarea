//
// Created by Linarmode on 5/21/2025.
//

#ifndef PAQUETE_H
#define PAQUETE_H

#include "Envio.h"

class Paquete : public Envio {
public:
    Paquete();
    Paquete(double, double, double, unsigned int, unsigned int);
    [[nodiscard]] double calculaCosto() const;
    void setAdd(unsigned int, unsigned int);
private:
    double length;
    double width;
    double depth;
    unsigned int weight;
    unsigned int costperkg;
};



#endif //PAQUETE_H
