#include <iostream>
#include <vector>
#include "src/DesarrolladorJunior.h"
#include "src/DesarrolladorSenior.h"
#include "src/LiderTecnico.h"
#include "src/Tester.h"

using namespace std;

void inicializarDatos(vector<Empleado*>& empleados){
  empleados.push_back(new DesarrolladorJunior("Santiago", 1500));
  empleados.push_back(new DesarrolladorJunior("Alexander", 1500));
  empleados.push_back(new DesarrolladorSenior("Alessandro", 1700));
  empleados.push_back(new DesarrolladorSenior("Diego", 1700));
  empleados.push_back(new LiderTecnico("Sebastian", 2000));
  empleados.push_back(new LiderTecnico("Mario", 2000));
  empleados.push_back(new Tester("Juan", 1200));
  empleados.push_back(new Tester("Carlos", 1200));
}

int main(){
    vector<Empleado*> empleados;
    inicializarDatos(empleados);
    double totalNomina = 0;

    cout<<"Nomina de empleados: "<<endl;
    for (Empleado* e : empleados){
      double salario = e->calcularSalario();
      cout<< e->getNombre()<<": $"<<salario<<endl;
      totalNomina += salario;
    }
    cout <<endl;
    cout<<"Total para pagar en Nomina: $"<<totalNomina<<endl;
    for(Empleado* e : empleados){
      delete e;
    }

    return 0;

}