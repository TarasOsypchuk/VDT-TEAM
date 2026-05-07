#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

class Calculator {
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
  cout << "6 * 7 = " << calc.multiply(6, 7) << endl;
    try {
        cout << "20 / 4 = " << calc.divide(20, 4) << endl;
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
    }
  return 0;
}
