//
// Created by santi on 5/6/2025.
//

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using namespace std;

class Empleado {
protected:
  string nombre;
  double salarioBase;

public:
  empleado(string nombre, double salarioBase);
  virtual ~Empleado(){}
  string getNombre() const;
  virtual double calcularSalario() const = 0;
};



#endif //EMPLEADO_H
