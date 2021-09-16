#include <bits/stdc++.h>
using namespace std;
  

// Obtiene la posición de un elemento "K" de un array "A" ordenado de
// tamaño "n". Si "K" no está en "A", devuelve el valor "n".
int binaria(int A[], int n, int K) {

    // define cotas para buscar "K" 
    int l = -1; // l una cota inferior de los índices
    int r = n; // r una cota superior de los índice

    while (l+1 != r) { // se detiene cuando l y r son consecutivos
        int i = (l+r)/2; // define el punto medio entre cada l y r
        if (K < A[i]) r = i; // K debería estar de i hacia la izquierda del array
        if (K == A[i]) return i; // K está en la entrada i
        if (K > A[i]) l = i; // K debería estar de i hacia la derecha del array
        }
    return n; // devuelve n si no encuentra K
}


int main()
{
    int A[] = { 2, 3, 4, 10, 40 };
    int K = 10;
    int n = sizeof(A) / sizeof(A[0]);
    int result = binaria(A, n - 1, K);
    (result == n) ? cout << "El elemento no se encuentra en el array"
                   : cout << "El elemento se encuentra en el indice " << result;
    return 0;
}

// la complejidad de este algoritmo es de orden la longitud del array "log(n)"