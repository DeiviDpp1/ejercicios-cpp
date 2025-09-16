#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double A, P, r;
    int n, t;

        std::cout << "Introduce el valor de la cantidad inicial invertida" << std::endl;
        cin >> P;

         std::cout << "Introduce el valor de la tasa de interes anual en decimales" << std::endl;
        cin >> r;

         std::cout << "Introduce la cantidad de veces que se aplica el interes al año" << std::endl;
        cin >> n;
    
           std::cout << "Introduce la cantidad de años" << std::endl;
        cin >> t;

A = P * pow((1 + r / n), n * t);
cout << "El monto final sera: " << A << endl;
    return 0;

}
// A = cantidad de dinero acumulada despues de n años, incluyendo intereses.
// P = cantidad principal (inicial)
// r = tasa de interes anual (en decimales)
// n = numero de veces que se aplica el interes por año
// t = numero de años que el dinero es invertido o prestado

