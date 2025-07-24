#include "arrayInt.h"

// Constructor por defecto que inicializa un arreglo vacio de tamaño 100
Arrayint::Arrayint(){
    Size = 100; // Tamaño máximo por defecto
    elements = new int[Size](); // Crear un arreglo de objetos Array, con valores defectos en 0
}

// Constructor que inicializa el arreglo de tamaño n
Arrayint::Arrayint(int n) : Size(n){
    elements = new int[Size](); // Asigna memoria para el arreglo de tamaño n, con valores defecto en 0.
}

// Destructor para liberar la memoria
Arrayint::~Arrayint() {
    // Libera la memoria asignada al arreglo bidimensional
    delete[] elements;
}

// Inserta un número en la posición i
void Arrayint::insert(const int data, int i) {
    if (i < 0 || i >= Size ) {
        throw std::out_of_range("Índice fuera de rango");
    }
        elements[i] = data;
}

// Verifica si la matriz está vacía (todos son 0)
bool Arrayint::isEmpty() const {
    for (int k = 0; k < Size; ++k) {
        if (elements[k] != 0) {
            return false;
        }
    }
    return true;
}

// Elimina el entero en la posición (i)
void Arrayint::remove(int i) {
    if (i < 0 || i >= Size) {
        throw std::out_of_range("Índice fuera de rango al eliminar de la matriz");
    }
    // Se reemplaza en 0
    elements[i] = 0;
}

// Intercambia dos enteros según las posiciones (i y j)
void Arrayint::swap(int i, int j) {
    if (i < 0 || i >= Size || j < 0 || j >= Size) {
        throw std::out_of_range("Índice fuera de rango al intercambiar elementos en la matriz");
    }

    int temp = elements[i];
    elements[i] = elements[j];
    elements[j] = temp;
}

// Retorna el número de columnas de la matriz
int Arrayint::getSize() const {
    return Size;
}

// Obtiene el entero en la posición i
int Arrayint::get(int i) const {
    if (i < 0 || i >= Size) {
        throw std::out_of_range("Índice fuera de rango al obtener elemento de la matriz");
    }
    return elements[i];
}

// Lista todos los elementos del array.
void Arrayint::mostrar() const {
     for (int i = 0; i <Size; i++){
        std::cout << "[" << i << "] : " << elements[i] << "\n";
    }
    std::cout << "fin." << std::endl;
}