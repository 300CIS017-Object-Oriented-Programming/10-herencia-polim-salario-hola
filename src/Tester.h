//
// Created by santi on 5/6/2025.
//

#ifndef TESTER_H
#define TESTER_H

#include <string>
#include "Empleado.h"

class Tester : public Empleado {
public:
    Tester(string nombre, double salarioBase);
    double calcularSalario() const override;
};



#endif //TESTER_H
