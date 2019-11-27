#include <iostream>
using namespace std;

void menuRectas(){
    int op;
    bool ret = false;
    cout<<"\n---- MENU RECTAS ----\n";
    cout<<"[ 1 ] En el plano\n";
    cout<<"[ 2 ] En el espacio\n";
    cout<<"[ 0 ] Volver atras\n";
    cout<<"¿Que desea hacer?: ";
    cin>>op;
    do {
        switch(op){
            case 1:
                break;
            case 2:
                break;
            case 0:
                cout<<"\n";
                ret = true;
                break;
        }
    }while(op>0 && op<3 && !ret);
}

void menuPlanos(){
    int op;
    bool ret = false;
    cout<<"\n---- MENU PLANOS ----\n";
    cout<<"[ 1 ] Dos planos\n";
    cout<<"[ 2 ] Tres planos\n";
    cout<<"[ 0 ] Volver atras\n";
    cout<<"¿Que desea hacer?: ";
    cin>>op;
    do {
        switch(op){
            case 1:
                break;
            case 2:
                break;
            case 0:
                cout<<"\n";
                ret = true;
                break;
        }
    }while(op>0 && op<3 && !ret);
}

int main() {
    cout<<"-----------------------------------------------------------------\n";
    cout<<"                PROYECTO INTEGRADOR PEL + ALGEBRA                \n";
    cout<<"Autores: Carlos Valle, Julian de Pablo, Alfonso Vega, David Merle\n";
    cout<<"-----------------------------------------------------------------\n\n";
    int op;
    bool exit = false;
    do {
        cout<<"---- POSICIONES A ESTUDIAR ----\n";
        cout<<"[ 1 ] Recta - recta\n";
        cout<<"[ 2 ] Recta - plano\n";
        cout<<"[ 3 ] Plano - plano\n";
        cout<<"Que desea hacer?: ";
        cin>>op;
        switch(op){
            case 1:
                menuRectas();
                break;
            case 2:
                break;
            case 3:
                menuPlanos();
                break;
            case 0:
                cout<<"Nos vemos pronto!";
                exit = true;
                break;
        }
    }while(op>0 && op<4 && !exit);
}