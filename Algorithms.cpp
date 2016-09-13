//
// Created by Shion Fukuzawa on 9/12/16.
//

#include "Algorithms.h"


void switchValues(int& m, int& n) {
    int x = m;
    m = n;
    n = x;
}

/*!
 * Implementation of Euclid's Algorithm.
 *
 * Finds the greatest common divisor of the two values m and n.
 *
 * @param m
 *
 * @param n
 *
 * @return The greatest common divisor of m and n
 */
int EuclidAlgorithm(int m, int n) {

    if (m < n) {
        switchValues(m, n);
    }

    int r = m % n;
    while (r != 0) {
        m = n;
        n = r;
        r = m % n;
    }
    return n;
}
