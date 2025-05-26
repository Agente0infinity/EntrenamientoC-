#include <iostream>
using namespace std;

struct Nodo {
    int valor;
    Nodo* siguiente;
    Nodo(int v) : valor(v), siguiente(nullptr) {}
};

Nodo* CrearNodoMultiplos(int multiplo, int cantidad) {
    if (cantidad <= 0) return nullptr; 

    Nodo* cabeza = new Nodo(multiplo);
    Nodo* actual = cabeza;
    
    for (int i = 1; i < cantidad; i++) {
        actual->siguiente = new Nodo(multiplo * (i + 1));
        actual = actual->siguiente;
    }
    
    return cabeza;
}

void recorrerNodo(Nodo* probar) {
    Nodo* actual = probar;
    while (actual != nullptr) {
        cout << actual->valor << " ";
        actual = actual->siguiente;
    }
    cout << endl;
}

void liberarNodos(Nodo* cabeza) {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* siguiente = actual->siguiente;
        delete actual;
        actual = siguiente;
    }
}
Nodo* agregar(Nodo* cabeza, int valor){
  Nodo* nuevo= new Nodo(valor);
  nuevo->siguiente=cabeza;
  return nuevo;
}
Nodo* agregar_en_orden(Nodo* cabeza, int numero) {
    Nodo* nuevo = new Nodo(numero);
    if (cabeza == nullptr || numero <= cabeza->valor) {
        nuevo->siguiente = cabeza;
        return nuevo;
    }
    Nodo* actual = cabeza;
    while (actual->siguiente != nullptr && numero > actual->siguiente->valor) {
        actual = actual->siguiente;
    }
    nuevo->siguiente = actual->siguiente;
    actual->siguiente = nuevo;
    
    return cabeza;
}

Nodo* aniquilar(Nodo* cabeza, int numero) {
    if (cabeza == nullptr) {
        return nullptr;
    }
    while (cabeza != nullptr && cabeza->valor == numero) {
        Nodo* fatality = cabeza;
        cabeza = cabeza->siguiente;
        delete fatality;
    }
    if (cabeza == nullptr) {
        return nullptr;
    }
    Nodo* actual = cabeza;
    while (actual->siguiente!= nullptr) {
        if (actual->siguiente->valor == numero) {
            Nodo* fatality =actual->siguiente;
            actual->siguiente=actual->siguiente->siguiente;
            delete fatality;
        } else {
            actual = actual->siguiente;
        }
        
    }
    return cabeza;
}


int main() {
    Nodo* probar = CrearNodoMultiplos(2, 21);
    recorrerNodo(probar);
    Nodo* agregado = agregar_en_orden(probar,15);
    recorrerNodo(agregado);
    Nodo* muerte=aniquilar(agregado,42);
    recorrerNodo(muerte);
    liberarNodos(muerte);
    
    
    
    
    
    return 0;
}

