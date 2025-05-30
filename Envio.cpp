//
// Created by Linarmode on 5/21/2025.
//

#include "Envio.h"

using namespace std;
Envio::Envio() {
    sendername = "";
    senderaddress = "";
    sendercity = "";
    senderstate = "";
    senderpostal = "";
    recipientname = "";
    recipientaddress = "";
    recipientcity = "";
    recipientstate = "";
    recipientpostal = "";
    stddeliverycost = 1.0;
}
Envio::Envio(double a) {
    this->stddeliverycost = a;
}

[[nodiscard]] double Envio::calculaCosto() const{
    return stddeliverycost;
}
void Envio::setCost(double a) {
    stddeliverycost = a;
}
