#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << "Int addition: " << calc.add(3, 4) << endl;       // Calls int version
    cout << "Double addition: " << calc.add(3.5, 4.2) << endl; // Calls double version
    return 0;
}
