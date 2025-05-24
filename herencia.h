/*
 * Copyright (C) 2025 Tec de Monterrey
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef HERENCIA_H
#define HERENCIA_H

#include <stdexcept>

class OperacionHerencia {
protected:
    int x, y;
public:
    OperacionHerencia(int a, int b) : x(a), y(b) {}
    virtual double calcular() const = 0;
    virtual ~OperacionHerencia() = default;
};

class SumaHerencia : public OperacionHerencia {
public:
    SumaHerencia(int a, int b) : OperacionHerencia(a, b) {}
    double calcular() const override {
        return x + y;
    }
};

class RestaHerencia : public OperacionHerencia {
public:
    RestaHerencia(int a, int b) : OperacionHerencia(a, b) {}
    double calcular() const override {
        return x - y;
    }
};

class MultiplicacionHerencia : public OperacionHerencia {
public:
    MultiplicacionHerencia(int a, int b) : OperacionHerencia(a, b) {}
    double calcular() const override {
        return x * y;
    }
};

class DivisionHerencia : public OperacionHerencia {
public:
    DivisionHerencia(int a, int b) : OperacionHerencia(a, b) {}
    double calcular() const override {
        if (y == 0) throw std::runtime_error("División por cero");
        return static_cast<double>(x) / y;
    }
};

#endif

