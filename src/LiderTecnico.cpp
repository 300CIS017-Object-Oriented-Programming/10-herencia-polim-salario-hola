//
// Created by santi on 5/6/2025.
//

#include <string>
#include "LiderTecnico.h"

LiderTecnico::LiderTecnico(string nombre, double salarioBase) : Empleado(nombre, salarioBase) {}

double LiderTecnico::calcularSalario() const {
  return salarioBase * 1.25;
}