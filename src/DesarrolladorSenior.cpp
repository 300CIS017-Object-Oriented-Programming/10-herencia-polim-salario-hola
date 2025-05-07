//
// Created by santi on 5/6/2025.
//

#include <string>
#include "DesarrolladorSenior.h"

DesarrolladorSenior::DesarrolladorSenior(string nombre, double salarioBase) : Empleado(nombre, salarioBase) {}

double DesarrolladorSenior::calcularSalario() const {
  return salarioBase * 1.20;
}
