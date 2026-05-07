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
public:
  double multiply(double a, double b) {
        return a * b;
    }
    double divide(double a, double b) {
        if (b == 0) {
            throw invalid_argument("Помилка: Ділення на нуль!");
        }
        return a / b;
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
  cout << "6 * 7 = " << calc.multiply(6, 7) << endl;
    try {
        cout << "20 / 4 = " << calc.divide(20, 4) << endl;
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
  return 0;
}
