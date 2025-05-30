//
// Created by Linarmode on 5/21/2025.
//

#ifndef ENVIO_H
#define ENVIO_H

#include <string>
using namespace std;

class Envio {
public:
    Envio();
    explicit Envio(double);
    [[nodiscard]] double calculaCosto() const;
    void setCost(double);
private:
    string sendername;
    string senderaddress;
    string sendercity;
    string senderstate;
    string senderpostal;
    string recipientname;
    string recipientaddress;
    string recipientcity;
    string recipientstate;
    string recipientpostal;
    double stddeliverycost;
};

#endif //ENVIO_H
