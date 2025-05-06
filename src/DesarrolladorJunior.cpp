//
// Created by santi on 5/6/2025.
//

#include <string>
#include "DesarrolladorJunior.h"


DesarrolladorJunior::DesarrolladorJunior(string nombre, double salarioBase) : Empleado(nombre, salarioBase) {}

double DesarrolladorJunior::calcularSalario() const {
  return salarioBase;
 }