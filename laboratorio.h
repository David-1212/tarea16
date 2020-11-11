#ifndef LABORATORIO_H
#define LABORATORIO_H
#include<vector>
#include "computadora.h"

class laboratorio
{

     vector<Computadora> computadoras;
public:
    laboratorio();
    void agregarComputadora(const Computadora &P);
    void mostrar();
    void respaldar_tabla();
    void respaldar();
    void recuperar();
    Computadora*buscar(const Computadora &p);

    void insertar(const Computadora&p, size_t pos);
    size_t size();
    void inicializar(const Computadora &p, size_t n);
    void eliminar(size_t pos);
    void ordenar();

    friend laboratorio& operator<<(laboratorio &v,const Computadora &p)
    {

        v.agregarComputadora(p);
        return v;
    }
};
#endif