//calculate basic function application

#include <iostream>
#include <limits>
using namespace std;

class ADD{
    public:
    int add(int a, int b){
        return a + b;
    }

    int subtract(int a, int b){
        return a - b;
    }

    int multiply(int a, int b){
        // Check for overflow
        if (a != 0 && b != 0 && (a > std::numeric_limits<int>::max() / b || a < std::numeric_limits<int>::min() / b)) {
            cerr << "Error: Integer overflow" << endl;
            return 0; // or handle the error as needed
        }
        return a * b;
    }
};
