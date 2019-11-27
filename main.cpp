#include <iostream>
using namespace std;

void menuRectas(){
    int op;
    cout<<"---- MENU RECTAS ----\n";
    cout<<"[ 1 ] En el plano\n";
    cout<<"[ 2 ] En el espacio\n";
    cout<<"Que desea hacer?: ";
    cin>>op;
    do {
        switch(op){
            case 1:
                break;
            case 2:
                break;
        }
    }while(op>0 && op<3);
}

void menuPlanos(){
    int op;
    cout<<"---- MENU PLANOS ----\n";
    cout<<"[ 1 ] En el plano\n";
    cout<<"[ 2 ] En el espacio\n";
    cout<<"Que desea hacer?: ";
    cin>>op;
    do {
        switch(op){
            case 1:
                break;
            case 2:
                break;
        }
    }while(op>0 && op<3);
}

int main() {
    cout<<"-----------------------------------------------------------------\n";
    cout<<"                PROYECTO INTEGRADOR PEL + ALGEBRA                \n";
    cout<<"Autores: Carlos Valle, Julian de Pablo, Alfonso Vega, David Merle\n";
    cout<<"-----------------------------------------------------------------\n\n";
    int op;
    cout<<"---- POSICIONES A ESTUDIAR ----\n";
    cout<<"[ 1 ] Recta - recta\n";
    cout<<"[ 2 ] Recta - plano\n";
    cout<<"[ 3 ] Plano - plano\n";
    cout<<"Que desea hacer?: ";
    cin>>op;
    do {
        switch(op){
            case 1:
                menuRectas();
                break;
            case 2:
                break;
            case 3:
                menuPlanos();
                break;
        }
    }while(op>0 && op<4);
}