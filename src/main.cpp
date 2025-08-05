#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    //Insere a temperatura em Celsius
    double celsius;
    cout << "Entre com a temperatura em Celsius: ";
    cin >> celsius;
   
    // Converte a temperatura para Fahrenheit usando a fórmula padrão
    double fahrenheit;
    fahrenheit = (celsius * 9) / 5 + 32;

    //Calculo de Celsius para Kelvin
    double kelvin;
    kelvin = celsius + 273.15;

    cout << fixed << setprecision(2);
    cout << "----------------------------" << endl;
    cout << "A conversão par Fahrenheit é: ";
    cout << fahrenheit << endl;
    cout << "----------------------------" << endl;

    cout << "A conversão para Kelvin é: ";
    cout << kelvin << endl;
    cout << "----------------------------" << endl;

    cout << "Pressione qualquer tecla para continuar: ";
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}