#include <iostream>

using namespace std;

int main()
{
    int cantidad;
    float promedio, calif, suma=0;

   
    cout << "Digite la cantidad de notas"<<endl;
    cin >> cantidad;

    float calculo[cantidad];

    cout << "ingrese las calificaciones: " <<endl;

    for (int i = 0; i < cantidad; i++)
    {
        cin >> calif;
        calculo[i]=calif;
        suma=suma+calculo[i];

        if (promedio = 1)
    {
        cout << "continuar" <<endl;
    }
    else if(promedio >= 1)
    {
        cout << "continuar" <<endl;
    }

    if (promedio = 0)
    {
        cout << "ejecucion terminada" <<endl;
    }
    else if(promedio >= 0)
    {
        cout << "ejecucion terminada" <<endl;
    }
    }
            
        promedio = suma / cantidad;
        cout << "El promedio de la nota es: " << promedio<<endl;
    
        if (promedio < 0 || promedio >5)
    {
        cout << "La nota no esta en el rango entre 0 y 5" <<endl;
    }
    else if(promedio >= 3 && promedio <= 3.5)
    {
        cout << "En este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidad de recuperar." <<endl;
    }
    
    if (promedio <= 3)
    {
        cout << "No aprobado."<<endl;
    }
    else if(promedio >= 3.5)
    {
        cout << "Aprobado" <<endl;
    }

    return 0;
}