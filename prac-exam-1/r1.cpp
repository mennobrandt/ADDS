#include <cmath> // for pow()

// Tail recursive function (with accumulator)
int sum_of_squares(int n, int acc) {
    if(n <= 1) {
        return acc;
    }
    return sum_of_squares((n-1), acc+pow(n, n));
}

// Helper function
int sum_of_squares(int n) {
    return sum_of_squares(n, 1);
}