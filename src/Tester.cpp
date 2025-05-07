//
// Created by santi on 5/6/2025.
//

#include <string>
#include "Tester.h"

Tester::Tester(string nombre, double salarioBase) : Empleado(nombre, salarioBase) {}

double Tester:calcularSalario() const {
  return salarioBase * 1.05;
}
