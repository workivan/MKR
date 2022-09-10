//
// Created by ikuzin on 9/10/22.
//

#include <stdexcept>
#include "RunMethod.h"

void RunMethod::init(int n, vectorPtr args) {
    if (args->size() < 4) {
        throw std::runtime_error("not enough args");
    }
    a = args->at(0);
    b = args->at(1);
    c = args->at(2);
    f = args->at(3);
}

std::vector<double> RunMethod::solve() const {
    int n = (int) a.size();
    std::vector<double> p = std::vector<double>(n, .0);
    std::vector<double> q = std::vector<double>(n, .0);
    std::vector<double> x = std::vector<double>(n, .0);


    p[0] = c[0] / b[0];
    q[0] = f[0] / b[0];
    p[n - 1] = 0.0;
    q[n - 1] = 0.0;

    for (int i = 1; i < n; i++) {
        p[i] = c[i] / b[i] - a[i] * p[i - 1];
        q[i] = (f[i] - a[i] * q[i - 1]) / (b[i] - a[i] * p[i - 1]);
    }

    x[n - 1] = q[n - 1];
    for (int i = n - 2; i > -1; i--) {
        x[i] = q[i] - p[i] * x[i + 1];
    }

    return x;
}