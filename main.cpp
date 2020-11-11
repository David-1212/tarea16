#include<iostream>
#include "laboratorio.h"
using namespace std;

int main(){
    laboratorio v;
    string op;
    while(true){
        cout<<"1) Agregar personaje"<<endl;
        cout<<"2) Mostrar"<<endl;
        cout<<"3) Respaldar"<<endl;
        cout<<"4) Recuperar"<<endl;
        cout<<"5) insertar"<<endl;
        cout<<"6) inicializar"<<endl;
        cout<<"7) Eliminar"<<endl;
        cout<<"8) Ordenar"<<endl;
        cout<<"9) Buscar"<<endl;
        cout<<"0) salir"<<endl;
        getline(cin,op);
        if (op=="1"){
            Computadora p;
            cin>>p;
            v.agregarComputadora(p);
            cin.ignore();
        }
        else if(op=="2"){
            v.mostrar();
        }
        else if(op=="3"){
            v.respaldar();
        }
        else if(op=="4"){
            v.recuperar();
        }
        else if (op=="0"){
            break;
        }
        else if(op=="5"){
            Computadora p;
            cin>>p;
            size_t pos; 
           cout<<"pocision: "<<endl;
            cin>>pos;cin.ignore();
            if(pos>=v.size()){
                cout<<"pocision no valida"<<endl;
            }
            else{
                v.insertar(p,pos);
            }
        }
        else if(op=="6"){
            Computadora p;
            cin>>p;
            size_t n; 
            cout<<"n: ";
            cin>>n;cin.ignore();
            v.inicializar(p,n);
        }
        else if(op=="7"){
            size_t pos; 
           cout<<"pocision: ";
            cin>>pos;cin.ignore();
            if(pos>=v.size()){
                cout<<"pocision no valida"<<endl;
            }
            else{
                v.eliminar(pos);
            }
        }
        else if(op=="8"){
            v.ordenar();
        }
        else if(op=="9"){
           Computadora p;
            cin>>p;cin.ignore();
            Computadora *ptr = v.buscar(p);
            if(ptr ==nullptr){
                cout<<"no encontrado"<<endl;
            }
            else
            {
                cout <<*ptr <<endl;
            }
            
        }
    }
    return 0;
}