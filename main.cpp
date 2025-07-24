// Importaciones
#include "arrayInt.h"
#include <iostream>

using namespace std;

// Método principal
int main(){
    cout << "Ingrese la cantidad de numeros para el arreglo unidimensional:\n";
    int n;
    cin >> n;
    Arrayint arreglo = Arrayint(n);
    while(true){
        n = 0;
        cout << "Menu:\n 1. Ingresar entero en el array. \n 2. Imprimir datos. \n"; 
        cout << " 3. Eliminar un dato \n 4. Intercambiar dos datos. \n 5. Salir\n";
        cin >> n;
        system("cls");
        if(n == 1){
            cout << "Ingresa el numero que deseas ingresar\n";
            int num;
            cin >> num;
            cout << "Ingresa la posicion a la que lo quieres ingresar.\n";
            int i;
            cin >> i;
            arreglo.insert(num,i);
            cout << "\n";

        }
        else if(n == 2){
            arreglo.mostrar();
            cout << "\n";
        }
        else if(n == 3){
            cout << "Ingresa la posicion que deseas eliminar\n";
            cin >> n;
            arreglo.remove(n);
            cout << "\n";
        }
        else if (n == 4) {
            cout << "Elige las dos posiciones de los que deseas intercambiar.\n";
            cout << "Posicion 1:\n";
            cin >> n;
            int i;
            cout << "Posicion 2:\n";
            cin >> i;
            arreglo.swap(i,n);
            cout << "\n";
        }
        else if(n == 5){
            cout << "Gracias." << endl;
            break;
        }
        else{
            cout << "Ingresa bien el numero. \n \n";
            continue;
        }
    }
    return 0;
}