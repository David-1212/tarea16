#include "laboratorio.h"
#include <fstream>
#include<algorithm>
laboratorio::laboratorio()
{
    
}
void laboratorio::agregarComputadora(const Computadora &p)
{
    computadoras.push_back(p);
    
}
void laboratorio::mostrar()
{
    cout << left ;
    cout <<setw(15)<<"Nombre";
    cout <<setw(16)<<"Sistema";
    cout <<setw(7)<<"Ram";
    cout <<setw(7)<<"Rom";
    cout <<endl;
    for(size_t i=0;i<computadoras.size(); i ++){
        Computadora &p=computadoras[i];
        cout <<p;
       
    }
}

void laboratorio::respaldar_tabla()
{
     
    ofstream archivo("computadoras_tabla.txt");
    if(archivo.is_open()){
        archivo << left ;
        archivo <<setw(15)<<"Nombre";
        archivo <<setw(16)<<"Sistema";
        archivo <<setw(7)<<"Ram";
        archivo <<setw(7)<<"Rom";
        archivo <<endl;
        
        for(size_t i=0;i<computadoras.size(); i ++){
                Computadora &p=computadoras[i];
                archivo <<p;
        }
}
archivo.close();
}
void laboratorio::respaldar()
{
     
    ofstream archivo("computadoras.txt");
    if(archivo.is_open()){
        for(size_t i=0;i<computadoras.size(); i ++){
                Computadora &p=computadoras[i];
                archivo <<p.getNombre()<<endl;
                archivo <<p.getSistema()<<endl;
                archivo <<p.getRam()<<endl;
                archivo <<p.getRom()<<endl;
        }
}
    archivo.close();
}
void laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if(archivo.is_open()){
        string temp;
        float ram;
        int rom;
        Computadora p;

        while (true)
        {
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            p.setNombre(temp);

            getline(archivo,temp);
            p.setSistema(temp);

            getline(archivo,temp);
            ram = stof(temp);
            p.setRam(ram);

            getline(archivo, temp);
            rom = stoi(temp);
            p.setRom(rom);

            agregarComputadora(p);
        }
        
    }
    archivo.close();
}
void laboratorio::insertar(const Computadora&p, size_t pos)
{
    computadoras.insert(computadoras.begin()+pos,p);
}
size_t laboratorio::size()
{
    return computadoras.size();
}

void laboratorio::inicializar(const Computadora&p,size_t n)
{
    computadoras=vector<Computadora>(n, p);
}
void laboratorio::eliminar(size_t pos)
{
    computadoras.erase(computadoras.begin()+pos);
}
void laboratorio::ordenar()
{
    sort(computadoras.begin(),computadoras.end());
}
Computadora*laboratorio::buscar(const Computadora &p)
{
    auto it = find(computadoras.begin(),computadoras.end(), p);
    if(it ==computadoras.end()){
        return nullptr;
    }
    else
    {
        return &(*it);
    }
    
}