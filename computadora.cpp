#include "computadora.h"

Computadora::Computadora()
{

}

Computadora::Computadora(const string &nombre,const string &sistema,float ram, int rom)
{
    this->nombre =nombre;
    this->sistema=sistema;
    this->ram=ram;
    this->rom =rom;
}

void Computadora::setNombre(const string &v)
{
    nombre=v;
}
string Computadora::getNombre()
{
    return nombre;
}

void Computadora::setSistema(const string &v)
{
    sistema=v;
}
string Computadora::getSistema()
{
    return sistema;
}
void Computadora::setRam(float v)
{
    ram=v;
}
float Computadora::getRam()
{
    return ram;
}
void Computadora::setRom(int v)
{
    rom=v;
}
int Computadora::getRom()
{
    return rom;
}
