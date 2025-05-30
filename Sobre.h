//
// Created by Linarmode on 5/21/2025.
//

#ifndef SOBRE_H
#define SOBRE_H

#include "Envio.h"

class Sobre : public Envio{
public:
    Sobre();
    Sobre(double, double, double);
    [[nodiscard]] double calculaCosto() const;
    void setProportions(double, double);
private:
    double length;
    double width;
    double addcost;
};



#endif //SOBRE_H
