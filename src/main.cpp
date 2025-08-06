#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    cout << "#####-Conversor Temperatura-#####" << endl;
    cout << "******************************" <<endl;
    cout << "******************************" <<endl;
    cout << "******************************" <<endl;

    int iTipoTemp;
    cout << "Escolha uma grandeza de temperatura" << endl;
    cout << "1-Celsius" << endl;
    cout << "2-Fahrenheit" << endl;
    cout << "3-Kelvin" << endl;
    cin >> iTipoTemp;

    if (iTipoTemp == 1)
    {
        //Insere a temperatura em Celsius
        double dCelsius;
        cout << "Entre com a temperatura em Celsius: ";
        cin >> dCelsius;
        if (cin.fail()) 
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Entrada inválida! Digite um número válido para Celsius." << endl;
            return 1;
        }
    
        // Converte a temperatura para Fahrenheit usando a fórmula padrão
        double dFahrenheit;
        dFahrenheit = (dCelsius * 9) / 5 + 32;

        //Calculo de Celsius para Kelvin
        double dKelvin;
        dKelvin = dCelsius + 273.15;

        cout << fixed << setprecision(2);
        cout << "----------------------------" << endl;
        cout << "A conversão para Fahrenheit é: ";
        cout << dFahrenheit << endl;
        cout << "----------------------------" << endl;

        cout << "A conversão para Kelvin é: ";
        cout << dKelvin << endl;
        cout << "----------------------------" << endl;
    }
    else if (iTipoTemp == 2)
    {
        //Insere a temperatura em Fahrenheit
        double dFahrenheit;
        cout << "Entre com a temperatura em Fahrenheit: ";
        cin >> dFahrenheit;
        if (cin.fail()) 
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Entrada inválida! Digite um número válido para Fahrenheit." << endl;
            return 1;
        }
    
        // Converte a temperatura para Celsius usando a fórmula padrão
        double dCelsius;
        dCelsius = (dFahrenheit - 32)* 5/9;

        //Calculo de Fahrenheit para Kelvin
        double dKelvin;
        dKelvin = (dFahrenheit + 459.67) * 5 / 9;

        cout << fixed << setprecision(2);
        cout << "----------------------------" << endl;
        cout << "A conversão para Celsius é: ";
        cout << dCelsius<< endl;
        cout << "----------------------------" << endl;

        cout << "A conversão para Kelvin é: ";
        cout << dKelvin << endl;
        cout << "----------------------------" << endl;
    }
    else if (iTipoTemp == 3)
    {
        //Insere a temperatura em Kelvin
        double dKelvin;
        cout << "Entre com a temperatura em Kelvin: ";
        cin >> dKelvin;
        if (cin.fail()) 
        {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Entrada inválida! Digite um número válido para Kelvin." << endl;
            return 1;
        }
    
        //Calculo de Kelvin para Celsius
        double dCelsius;
        dCelsius = dKelvin - 273.15;

        // Converte a temperatura para Fahrenheit usando a fórmula padrão
        double dFahrenheit;
        dFahrenheit = (dKelvin * 9 / 5) - 459.67;

        

        cout << fixed << setprecision(2);
        cout << "----------------------------" << endl;
        cout << "A conversão para Celsius é: ";
        cout << dCelsius << endl;
        cout << "----------------------------" << endl;

        cout << "A conversão para Fahrenheit é: ";
        cout << dFahrenheit << endl;
        cout << "----------------------------" << endl;
    }
    else
    {
        cout << "Valor Inválido" << endl;
    }
    

    cout << "Pressione qualquer tecla para continuar: ";
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}