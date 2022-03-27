#include <iostream>

using namespace std;
//Evidencia de Actividad 3, EDWIN ENRIQUE CANTOR SANABRIA
// una aplicación que calcule el promedio de las notas de sus estudiantes y determine si aprobaron o no aprobaron la materia. Es de tener en cuenta que el profesor a sacado 4 notas y que el promedio para aprobar debe estar entre 3.5 y 5.0 puntos.
//El codigo no debe permitir ingresar notas fuera del rango entre 0 y 5, si esto ocurre debe mostrar el mensaje por cada nota ingresada  " La nota no esta en el rango entre 0 y 5" y no avanza hasta cumplir la condicion.
//A través de una condición anidada pregunte si la nota definitiva está entre 3 y 3.5. Si es así, el estudiante tiene una oportunidad de recuperar y el mensaje a imprimir será el siguiente: “En este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidad de recuperar.”
//Si la nota definitiva está por debajo de 3 el mensaje será “No aprobado”.
//Si la nota definitiva está por encima de 3.5 el mensaje a imprimir será “Aprobado”.
//Defina variables del tipo float para poder hacer los cálculos y tener como resultado una parte decimal.  El usuario debe digitar 4 notas y con base a ellas calcular el promedio.


float nota1;
float nota2;
float nota3;
float nota4;
float resultado;

bool booleana = true;
int main()
{
    cout << "coloque su primer nota" <<endl;
    cin >> nota1;
    cout << "coloque su segunda nota" <<endl;
    cin >> nota2;
    cout << "coloque su tercera nota" <<endl;
    cin >> nota3;
    cout << "coloque su cuarta nota" <<endl;
    cin >> nota4;

    resultado= (nota1+nota2+nota3+nota4)/4;
    cout << "la calificacion es: " << resultado << endl;

    if (resultado < 0 || resultado >5)
    {
        cout << "La nota no esta en el rango entre 0 y 5" <<endl;
    }
    else if(resultado >= 3 && resultado <= 3.5)
    {
        cout << "En este momento no tiene aprobada la materia de tecnología, pero tiene la oportunidad de recuperar." <<endl;
    }
    
    if (resultado <= 3)
    {
        cout << "No aprobado."<<endl;
    }
    else if(resultado >= 3.5)
    {
        cout << "Aprobado" <<endl;
    }
    
    cin.get();

    return 0;

}