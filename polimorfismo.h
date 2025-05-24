/*
 * Copyright (C) 2025 Tec de Monterrey
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef POLIMORFISMO_H
#define POLIMORFISMO_H

#include <stdexcept>

class OperacionPoli {
public:
    virtual double calcular(int x, int y) const = 0;
    virtual ~OperacionPoli() = default;
};

class SumaPoli : public OperacionPoli {
public:
    double calcular(int x, int y) const override {
        return x + y;
    }
};

class RestaPoli : public OperacionPoli {
public:
    double calcular(int x, int y) const override {
        return x - y;
    }
};

class MultiplicacionPoli : public OperacionPoli {
public:
    double calcular(int x, int y) const override {
        return x * y;
    }
};

class DivisionPoli : public OperacionPoli {
public:
    double calcular(int x, int y) const override {
        if (y == 0) throw std::runtime_error("División por cero");
        return static_cast<double>(x) / y;
    }
};

#endif


