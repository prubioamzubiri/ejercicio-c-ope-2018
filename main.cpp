#include <iostream>
#include "funciones.h"

using namespace std;

void recoger20elementosDistintos(int lista[]);
void mostrarLista(int lista[], int elementos);

int main()
{

    int lista[20], primos[20],compuestos[20];
    int numeroDePrimos = 0, numeroDeCompusetos = 0;

    recoger20elementosDistintos(lista);

    for(int i = 0; i < 20; i++)
    {
        if(esPrimo(lista[i]))
        {
            primos[numeroDePrimos] = lista[i];
            numeroDePrimos++;
        }
        else{
            compuestos[numeroDeCompusetos] = lista[i];
            numeroDeCompusetos++;
        }
    }

    ordenar(primos, numeroDePrimos);
    ordenar(compuestos, numeroDeCompusetos);

    cout<< " \n primos: " << numeroDePrimos << " elementos" << "\n";
    mostrarLista(primos, numeroDePrimos);
    cout<< "\n compuestos: " << numeroDeCompusetos << " elementos" << "\n";
    mostrarLista(compuestos, numeroDeCompusetos);




    return 0;
}

void recoger20elementosDistintos(int lista[])
{
    int dato;
    int elementosRecogidos = 0;

    cin >> dato;

    while(elementosRecogidos<20)
    {
        if((dato>0)&&(!contains(lista,elementosRecogidos,dato)))
        {
            lista[elementosRecogidos] = dato;
            elementosRecogidos++;
            cout << "Elemento añadido \n";
        }
        else{
            cout<< "Elemento no añadido \n";
        }
        if(elementosRecogidos<20)
        {
            cin>> dato;
        }

    }


}

void mostrarLista(int lista[], int elementos)
{
    for (int i=0; i < elementos; i++)
    {
        cout<< "\n" << lista[i];
    }
}