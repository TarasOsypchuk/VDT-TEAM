#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

class Calculator {
private:
    // --- Зона відповідальності Учасника 3 ---
    double power(double base, double exponent) {
        return pow(base, exponent);
    }
    double squareRoot(double number) {
        if (number < 0) {
            throw invalid_argument("Помилка: Корінь з від'ємного числа!");
        }
        return sqrt(number);
    }
};

int main() {
    // Тести Учасника 3
    cout << "2 ^ 3 = " << calc.power(2, 3) << endl;
    try {
        cout << "Корінь з 16 = " << calc.squareRoot(16) << endl;
    }
    catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
    return 0;
}
