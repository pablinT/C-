#include<iostream>
#include<cmath>

using namespace std;

// Devuelve la posición del valor más grande de un array "A" de tamaño "n"

int posicion_del_max(int A[], int n) {
    int posicion = 0; // inicializamos la posicion en el primer elemento
    for (int i=1; i<n; i++) // para cada elemento del array
        if (A[posicion] < A[i]) // si A[i] es más grande
            posicion = i;// redefinimos "posicion"
            return posicion; // devuelve "posicion"
}


int main()
{
    int A[] = { 200, 1, 5, 15, 4, 1000, 40 };
    int n = sizeof(A) / sizeof(A[0]);
    
    int resultado = posicion_del_max(A, n);
    cout << "El mayor elemento se encuentra en el indice "<< resultado;
    return 0;
}

