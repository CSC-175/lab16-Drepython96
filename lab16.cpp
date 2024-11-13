// Code to implement the gcf function goes here
#include <iostream>

int gcf(int a, int b) {
    // Base case: if b is zero, a is the GCF
    if (b == 0) {
        return a;
    }
    // Recursive case: call gcf with b and the remainder of a divided by b
    return gcf(b, a % b);
}

