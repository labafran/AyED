/*a. Se desea calcular el valor de π usando la serie de Liebniz, sin usar ninguna optimización.
b. Debe iterar hasta que el valor de π se correcto en sus 6 primeros decimales (3,141592)*/
#include <iostream>
using namespace std;

int numerador(int n);
int denominador(int n);

int main(){
    unsigned int n=0;
    int dividendo, divisor;
    long double resultado = 0;

    do{
        dividendo = numerador(n);
        divisor = denominador(n);
        resultado += static_cast<long double>(4 * dividendo) / divisor;
        cout.precision(6); // Establecer la precisión en 6 decimales
        cout << fixed << resultado << endl; // Mostrar resultado con 6 decimales
        n++;
    }while(resultado<3.141592 || resultado>=3.141593);

    return 0;
}


int numerador(int n){
    return (n % 2 == 0) ? 1 : -1;
}

int denominador(int n){
    int x;
    x = 2*n+1;
    return x;
}