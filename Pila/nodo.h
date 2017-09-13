#ifndef INC_02_LISTAS_NODO_H
#define INC_02_LISTAS_NODO_H

template <class T>

class nodo{
private:
    T dato;
    nodo<T> *next;
public:
    nodo(T dato){
        this->dato=dato;
        next = NULL;
    }

    nodo(T dato, nodo<T> *next) : dato(dato), next(next){}


    T getDato() const {
        return dato;
    }

    void setDato(T dato) {
        nodo::dato = dato;
    }

    nodo *getNext() const {
        return next;
    }

    void setNext(nodo *next) {
        nodo::next = next;
    }

};

#endif //INC_02_LISTAS_NODO_H
