// ConsoleApplication7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
    //1.- progrma que pida 10 nnumeros y los muestre en un orden inverso al que fueron agregados.

    int numeros[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        cout << "Ingrese los numeros: ";
        cin >> numeros[i];
    }
    cout << "los numeros ingresados en el orden inverso son:" << endl;
    for (int i = 9; i >=0; i--)
    {
        cout << numeros[i] << endl;
    }
    //2 programa que pida 10 numeros,calcule su medida y luego muestre los que estan por encima de la media .
    double numero[10], suma = 0, media;
    int i;
    for (i=0; i <10; i++)
    {
        cout << "ingresa los numeros: ";
        cin >> numero[i];
        suma += numero[i];
    }
    //3 Programa que pida 10 números, para que calcule cuál es el mayor de ellos.

    int vector[10];
    int mayor = 0;
    int i;
    for (i = 0; i < 10; i++)
    {
        cout << "introduce el" << i << "valor\n";
        cin >> vector[i];
        if(vector[i]>mayor)
        {
            mayor = vector[i];
        }

    }
    cout << "el nuemro mayor es " << mayor;
            
}
