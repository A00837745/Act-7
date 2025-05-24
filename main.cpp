#include <iostream>
#include "sum.h"
#include "sub.h"
#include "div.h"
#include "mul.h"
#include "abstraccion.h"
#include "polimorfismo.h"
#include "herencia.h"

using namespace std;

int main() {

    SumaAbs SumAb(1, 5);
    RestaAbs SubAb(5, 1);
    MultiplicacionAbs MulAb(3, 4);
    DivisionAbs DivAb(9, 3);

    OperacionHerencia* SumHer = new SumaHerencia(1, 5);
    OperacionHerencia* SubHer = new RestaHerencia(5, 1);
    OperacionHerencia* MulHer = new MultiplicacionHerencia(3, 4);
    OperacionHerencia* DivHer = new DivisionHerencia(9, 3);

    OperacionPoli* SumPol = new SumaPoli();
    OperacionPoli* SubPol = new RestaPoli();
    OperacionPoli* MulPol = new MultiplicacionPoli();
    OperacionPoli* DivPol = new DivisionPoli();
    
    cout << endl;
    cout << "--- Operaciones Basicas ---" << endl;
    cout << "Suma(1, 5) = " << sum(1, 5) << endl;
    cout << "Resta(5, 1) = " << sub(5, 1) << endl;
    cout << "Multiplicacion(3, 4) = " << mul(3, 4) << endl;
    cout << "Division(9, 3) = " << divide(9, 3) << endl;

    cout << endl;
    cout << "--- Abstraccion ---" << endl;
    cout << "Suma: " << SumAb.calcular() << endl;
    cout << "Resta: " << SubAb.calcular() << endl;
    cout << "Multiplicacion: " << MulAb.calcular() << endl;
    cout << "Division: " << DivAb.calcular() << endl;

    cout << endl;
    cout << "--- Herencia ---" << endl;
    cout << "Suma: " << SumHer->calcular() << endl;
    cout << "Resta: " << SubHer->calcular() << endl;
    cout << "Multiplicacion: " << MulHer->calcular() << endl;
    cout << "Division: " << DivHer->calcular() << endl;
    delete SumHer; delete SubHer; delete MulHer; delete DivHer;

    cout << endl;
    cout << "--- Polimorfismo ---" << endl;
    cout << "Suma: " << SumPol->calcular(1, 5) << endl;
    cout << "Resta: " << SubPol->calcular(5, 1) << endl;
    cout << "Multiplicacion: " << MulPol->calcular(3, 4) << endl;
    cout << "Division: " << DivPol->calcular(9, 3) << endl;
    delete SumPol; delete SubPol; delete MulPol; delete DivPol;

    return 0;
}

