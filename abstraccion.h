/*
 * Copyright (C) 2025 Tec de Monterrey
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef ABSTRACCION_H
#define ABSTRACCION_H

#include <stdexcept>

class OperacionAbs {
protected:
    int x, y;
public:
    OperacionAbs(int a, int b) : x(a), y(b) {}
    virtual double calcular() const = 0;
    virtual ~OperacionAbs() = default;
};

class SumaAbs : public OperacionAbs {
public:
    SumaAbs(int a, int b) : OperacionAbs(a, b) {}
    double calcular() const override {
        return x + y;
    }
};

class RestaAbs : public OperacionAbs {
public:
    RestaAbs(int a, int b) : OperacionAbs(a, b) {}
    double calcular() const override {
        return x - y;
    }
};

class MultiplicacionAbs : public OperacionAbs {
public:
    MultiplicacionAbs(int a, int b) : OperacionAbs(a, b) {}
    double calcular() const override {
        return x * y;
    }
};

class DivisionAbs : public OperacionAbs {
public:
    DivisionAbs(int a, int b) : OperacionAbs(a, b) {}
    double calcular() const override {
        if (y == 0) throw std::runtime_error("División por cero");
        return static_cast<double>(x) / y;
    }
};

#endif

