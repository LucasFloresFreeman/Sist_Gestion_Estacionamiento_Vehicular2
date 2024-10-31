#include <iostream>
#include <cstring>
#include <string>


#include "Vehiculo.h"
using namespace std;

void Vehiculo::setPatente (std::string patente)
{
    _patente = patente;
}

void Vehiculo::setTipo (int tipoVehiculo)
{
    _tipoVehiculo = tipoVehiculo;
}

