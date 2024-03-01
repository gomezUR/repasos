#include <iostream>
using namesapce

int main() {
    int main() {
    char tipodeplan;
    double costodeplan;
    double descuento;
    double costototal;  

    cout << "Ingrese el tipo de plan P para prepago po para postpago: ";
    cin >> tipodePlan;

    cout << "Ingrese el costo del plan: ";
    cin >> costodePlan;
    if (tipodeplan == po){
        if (costodeplan > 500000){
            descuento = 0.15
        }else if (costodeplan <= 500000 && costodeplan > 100000){
            descuento = 0.20
        }else if (costodeplan < 100000){
            descuento = 0.25
        }
    } else if (tipodeplan == P){
        if (tipoPlan == 'P') { // Plan prepago
        if (costoPlan >= 100000 && costoPlan < 1000000) {
            descuento = 0.10;
        } else if (costoPlan >= 1000000) {
            descuento = 0.20;
        } else {
            descuento = 0.0;


    } else {
        cout << "tipo de plan no valido. " << endl;
        return 1;
    }
    costototal =  costodeplan - (costodeplan * descuento);

    cout << "descuento total: " << (descuento * 100) << "%" << endl
    cout << "valor total:" << costototal << "pesos " << endl;
    return 0

}
