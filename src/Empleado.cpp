//
// Created by santi on 5/6/2025.
//

#include <string>
#include "Empleado.h"

Empleado::Empleado(string nombre, double salarioBase){
	this->nombre = nombre;
	this->salarioBase = salarioBase;
}

string Empleado::getNombre() const{
	return nombre;
}