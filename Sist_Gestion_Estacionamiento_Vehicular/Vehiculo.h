#pragma once
#include <string>

class Vehiculo
{
private:
    std::string _patente;
    int _tipoVehiculo;

public:
    void setPatente (std::string patente);
    void setTipo (int tipoVehiculo);
};
