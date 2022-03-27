//con la funcion include añadimos la biblioteca que utilizaremos para el desarrollo de codigo
#include <iostream>
//la funcion using la usamos para no tener que colocar en cada linea de codigo salto de linea 
using namespace std;

//SERVICIO NACIONAL DE APRENDIZAJE SENA
//Procedimiento de Desarrollo Curricular
//GUÍA DE APRENDIZAJE
//GFPI-F-019 V3
//Página 4 de 7

int main()
{
  // Se aplica variable a y b poder realizar la operacion de +-*/r
     int a, b;
 //se utiliza la variable tipo entero con etiqueta cout para poder imprimir un resultado que en de teclado numerico
    cout << "Ingresa el primer numero"<<endl;
 //se utiliza la etiqueta cin para poder capturar un resultado de numero entero a
    cin >> a;
 //se utiliza la variable tipo entero para poder imprimir un resultado que en de teclado numerico
    cout << "Ingresa el segundo numero"<<endl;
 //se utiliza la etiqueta cin para poder capturar un resultado de numero entero b
    cin >> b;
 
 //a continuaciòn se aplica la funcion cut para imprimir el resultado de la suma de a+b
    cout <<"La suma de los numeros es: "<< a+b <<endl;
 //a continuaciòn se aplica la funcion cut para imprimir el resultado de la resta de a-b
    cout <<"La resta de los numeros es: "<< a-b <<endl;
 //a continuaciòn se aplica la funcion cut para imprimir resultado de la multiplicacion de a*b
    cout <<"La multiplicacion de los numeros es: "<< a*b <<endl;
 //a continuaciòn se aplica la funcion cut para imprimir el resultado de la division de a/b
    cout <<"La division de los numeros es: "<< a/b <<endl;
 //a continuaciòn se aplica la funcion cut para imprimir el resultado %, es para calcular el residuo entre dos números
    cout <<"El residuo es: "<< a%b <<endl;

 //la etiqueta system la aplicamos para que el programa no se cierre despues de hacer la operacion al oprimir una tecla
 system("pause");
 //la instrucción return termina la ejecución de una función y devuelve el control a la función de llamada
 return EXIT_SUCCESS;
}