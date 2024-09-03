
#include <iostream>

using namespace std;

int main() {
    // Function to compute the greatest common divisor (GCD) using Euclid's algorithm
    auto gcd = [](int q, int r) -> int {
        while (r != 0) {
            int TemporaryValue = r;  // Changed from temp to TemporaryValue
            r = q % r;
            q = TemporaryValue;
        }
        return q;
    };

    // Function to reduce the fraction
    auto reduce = [&gcd](int& num, int& denom) {
        if (denom == 0) {
            // Denominator cannot be zero
            cout << "Denominator cannot be zero." << endl;
            return;
        }
        if (denom < 0) {
            // Move negative sign to the numerator
            denom = -denom;
            num = -num;
        }
        if (num == 0) {
            // Fraction is 0, so reduce to 0/1
            denom = 1;
            return;
        }
        // Compute the greatest common divisor
        int divisor = gcd(abs(num), abs(denom));
        // Reduce the fraction
        num /= divisor;
        denom /= divisor;
    };

    int numerator, denominator;

    // Input numerator and denominator
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    // Call the reduce function
    reduce(numerator, denominator);

    if (denominator == 0) {
        cout << "Cannot reduce fraction with zero denominator." << endl;
    } else {
        cout << "Reduced fraction is: " << numerator << "/" << denominator << endl;
    }

    return 0;
}







