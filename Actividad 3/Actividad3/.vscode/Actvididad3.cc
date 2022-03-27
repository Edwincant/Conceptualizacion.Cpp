#include <iostream>
using namespace std;

//aplicación en C++ que le pregunte al usuario la edad de su hijo.
//Si el niño tiene entre 0 y 6 años el programa debe imprimir que el niño pertenece al grupo de la primera infancia 
//Si la edad está entre los 6 y los 12 años el programa debe imprimir que el niño pertenece al grupo de la segunda infancia;
//y en caso de que el niño tenga entre 12 y 18 años el mensaje impreso dirá que pertenece al grupo de los adolescentes.

bool booleana = true;
int main()
{
   int programa1 = 0 || 6;
   int programa2 = 6 || 12;
   int programa3 = 12 || 18;

    cout << "escriba la edad de su hijo" <<endl;
    cin >> programa1, programa2, programa3;

    if (programa1 >=0 && programa1 <=6)
    {
      cout << "el niño pertenece al grupo de la primera infancia";
    }
    else if (programa1 >=6)
    {
      cout << "el niño pertenece al grupo de la segunda infancia";
    }
    if (programa2 >=6 && programa2 <=12)
    {
      cout << "el niño pertenece al grupo de la segunda infancia";
    }
    else if (programa1 >=12)
    {
      cout << "el niño pertenece al grupo de la segunda infancia";
    }
    if (programa3 >=12 && programa3 <=18)
    {
      cout << "el niño pertenece al grupo de la segunda infancia";
    }

   cin.get();
   
 system("pause");
 return EXIT_SUCCESS;
}