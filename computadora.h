#ifndef COMPUTADORA_H
#define COMPUTADORA_H
#include <iomanip>
#include<iostream>

using namespace std;

class Computadora {
  private:
    string nombre;
    string sistema;
    float ram;
    int rom;

  public:
    Computadora();
    Computadora(const string &nombre, const string &sistema, float ram,int rom);

    void setNombre(const string &v);
    string getNombre();

    void setSistema(const string &v);
    string getSistema();

    void setRam(float v);
    float getRam();

    void setRom(int v);
    int getRom();

    friend ostream& operator<<(ostream &out, const Computadora &p)
    {
      out<<left;
      out <<setw(15)<<p.nombre;
      out <<setw(16)<<p.sistema;
      out <<setw(7)<<p.ram;
      out <<setw(7)<<p.rom;
      out <<endl;
      return out;
    }
    friend istream& operator>>(istream &in, Computadora &p)
    {
      //string temp;
      //float ram;
     // int rom;
    
      cout <<"Nombre: ";
      getline(cin, p.nombre);
      cout <<"sistema: ";
      getline(cin, p.sistema);
      cout <<"Ram: ";
      cin>>p.ram;
      cout <<"Rom: ";
      cin>>p.rom;



      return in;
    }
    bool operator==(const Computadora& p)
    {
      return nombre==p.nombre;
    }
    bool operator==(const Computadora& p)const
    {
      return nombre==p.nombre;
    }
    bool operator<(const Computadora& p)
    {
      return nombre < p.nombre;
    }
    bool operator<(const Computadora& p)const
    {
      return nombre< p.nombre;
    }
  };

#endif
