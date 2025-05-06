//
// Created by santi on 5/6/2025.
//

#ifndef LIDERTECNICO_H
#define LIDERTECNICO_H

#include <string>
#include "Empleado.h"


class LiderTecnico : public Empleado {
public:
  LiderTecnico(string nombre, double salarioBase);
  double calcularSalaraio() const; override;
};



#endif //LIDERTECNICO_H
