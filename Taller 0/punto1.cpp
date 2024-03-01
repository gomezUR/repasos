#include <iostream>
using namespace std;

int main (){
    double deuda 
    double descuento
    double valortotal

    cout <<"ingrese la deuda: ";
    cin >> deuda;

    if (deuda > 60000 && deuda <= 150000){
        descuento 0 0.20;
    } else if (deuda > 150000 && deuda <=300000){
        descuento = 0.30
    
    } else if (deuda > 300000 && deuda <= 800000){
        descuento = 0.40;
    }else if (deuda > 800000){
        descuento = 0.50;
    }
valortotal = deuda - (deuda * descuento);
cout << "descuento:" << (descuento * 100) << "%" << endl;
cout << "valor total con descueento:" <<  valortotal << "pesos" << endl
return 0
}