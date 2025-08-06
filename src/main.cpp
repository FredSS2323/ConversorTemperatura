#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    //Insere a temperatura em Celsius
    double dCelsius;
    cout << "Entre com a temperatura em Celsius: ";
    cin >> dCelsius;
   
    // Converte a temperatura para Fahrenheit usando a fórmula padrão
    double dFahrenheit;
    dFahrenheit = (dCelsius * 9) / 5 + 32;

    //Calculo de Celsius para Kelvin
    double dKelvin;
    dKelvin = dCelsius + 273.15;

    cout << fixed << setprecision(2);
    cout << "----------------------------" << endl;
    cout << "A conversão par Fahrenheit é: ";
    cout << dFahrenheit << endl;
    cout << "----------------------------" << endl;

    cout << "A conversão para Kelvin é: ";
    cout << dKelvin << endl;
    cout << "----------------------------" << endl;

    cout << "Pressione qualquer tecla para continuar: ";
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}