#include <iostream>
using namespace std;


//int first and int last in the functi8on sum_from_to will declare my variables
int sum_from_to(int first, int last) {
    int sum = 0;

    if (first > last) {
        int secondary_variable = first;
        first = last;
        last = secondary_variable;
    }

    for (int i = first; i <= last; ++i) {
        sum += i;
    }

    return sum;
}

int main() {
    int first, last;

    //Message displayed to me when I first run my program;
    cout << "Enter the first value: ";
    cin >> first;
    cout << "Enter the last value: ";
    cin >> last;

    /*This will store the result of computing first and last to the variable result.
     */

    int result = sum_from_to(first, last);
    // This will display the result of running my code
    cout << "The sum from " << first << " to " << last << " is " << result << endl;

    return 0;
}

