#include <iostream>
#include <string>
using namespace std;
#include "Envio.h"
#include "Paquete.h"
#include "Sobre.h"

int main() {
    Envio envio;
    envio.setCost(250);
    double a = envio.calculaCosto();
    cout << a << endl;
    Paquete paquete;
    paquete.setCost(250);
    paquete.setAdd(7, 30);
    double b = paquete.calculaCosto();
    cout << b << endl;
    Sobre sobre;
    sobre.setCost(250);
    sobre.setProportions(26, 31);
    double c = sobre.calculaCosto();
    cout << c << endl;
    return 0;
}