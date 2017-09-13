#include <iostream>
#include "../Cola/Cola.h"
using namespace std;
int main() {

    int x1,y1,n, p=0, resultado;


    Cola<int> a1;
    Cola<int> a2;

    cout<<"cant de vueltas"<<endl;
    cin>>n;

    while(p != n){
        p++;

        cin>>x1>>y1;
        a1.encolar(x1);
        a2.encolar(y1);
    }


    p = 0;

    while (p != n){
        p++;

        if (a1.desencolar() != a2.desencolar())
            resultado = 0;

    }

    if (resultado == 0)
        cout<<"No son iguales"<<endl;
    else
        cout<<"Son iguales"<<endl;
}