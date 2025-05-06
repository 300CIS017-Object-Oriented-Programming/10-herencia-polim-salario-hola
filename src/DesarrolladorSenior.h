//
// Created by santi on 5/6/2025.
//

#ifndef DESARROLLADORSENIOR_H
#define DESARROLLADORSENIOR_H

#include "string"
#include "Empleado.h"


class DesarrolladorSenior : public Empleado {
public:
  DesarrolladorSenior(string nombre, double salarioBase);
  double calcularSalario() const override;
};



#endif //DESARROLLADORSENIOR_H
