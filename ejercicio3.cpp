/*Una compañia dedicada al alquiler de automoviles, cobra $30 hasta un maximo
de 500km de distancia recorrida. Para mas de 500km y hasta 1,000km, cobra $30
mas un monto adicional del 5% por cada kilometro en exceso sobre 500. Para mas 
de 1,000km, cobra $30 mas un monto adicional del 8% por cada kilometro en exceso
sobre 1,000. Los precios ya incluyen el 15% de impuestos(IVA). 
Escriba un progrma, que determine el monto a pagar por el alquiler de un vehiculo
sin impuesto, y el monto a pagar con el impuesto incluido. Dar enfasis al uso de la 
estructura de desicion anidada (if-then-else, if-then-else, if...)*/

#include <iostream>

using namespace std;

int main() {
    int distancia;
    double costoBase = 30.0;
    double costoAdicional = 0.0;
    double costoTotalSinImpuestos, costoTotalImpuestos;

    cout << "Ingresa la distancia recorrida en kilometros: ";
    cin >> distancia;

    if (distancia <= 500) {
        costoTotalSinImpuestos = costoBase;
    } else if (distancia <= 1000) {
        costoAdicional = (distancia - 500) * 0.05;
        costoTotalSinImpuestos = costoBase + costoAdicional;
    } else {
        costoAdicional = 30 + (distancia - 1000) * 0.08;
        costoTotalSinImpuestos = costoBase + costoAdicional;
    }

    costoTotalImpuestos = costoTotalSinImpuestos * 1.15;

    cout << "El costo total sin impuestos es: $" << costoTotalSinImpuestos <<endl;
    cout << "El costo total con impuestos es (incluyendo 15% de impuestos): $" << costoTotalImpuestos <<endl;

    return 0;
}