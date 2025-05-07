//
// Created by santi on 5/6/2025.
//

#ifndef DESARROLLADORJUNIOR_H
#define DESARROLLADORJUNIOR_H

#include <string>
#include "Empleado.h"

class DesarrolladorJunior : public Empleado {
public:
    DesarrolladorJunior(string nombre, double salarioBase);
    double calcularSalario() const override;
};



#endif //DESARROLLADORJUNIOR_H
