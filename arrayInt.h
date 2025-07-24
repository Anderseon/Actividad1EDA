#ifndef ARRAYINT_H
#define ARRAYINT_H

#include <iostream> 
#include <stdexcept>

class Arrayint{
private:
    int Size;                         
    int *elements;  

public:
    Arrayint();

    Arrayint(int n);

    ~Arrayint();

    void insert(const int data, int i); 
    bool isEmpty() const;                               
    void remove(int i);                      
    void swap(int i, int j);  
    int getSize() const;                                
    int get(int i) const;                   

    void mostrar() const;

};

#endif // ARRAYINT_H
