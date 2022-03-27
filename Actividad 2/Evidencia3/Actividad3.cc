#include <iostream>
using namespace std;

//𝑎 = (𝑣𝑒𝑙𝑜𝑐𝑖𝑑𝑎𝑑 𝑓𝑖𝑛𝑎𝑙 − 𝑣𝑒𝑙𝑜𝑐𝑖𝑑𝑎𝑑 𝑖𝑛𝑖𝑐𝑖𝑎𝑙)/𝑡𝑖𝑒𝑚𝑝o

int main()
{
     float a, velocidadfinal, velocidadinicial, tiempo;
    cout << "Ingresa la velocidad final" <<endl;
    cin >> velocidadfinal;
    cout << "Ingresa la velocidad inicial" <<endl;
    cin >> velocidadinicial;
    cout << "Ingresa el tiempo" <<endl;
    cin >> tiempo;

    a = velocidadfinal-velocidadinicial/tiempo;

    cout <<"El resultado del multiplo por uno es: "<< a <<endl;

 system("pause");
 return EXIT_SUCCESS;
}