//
// Created by ikuzin on 9/10/22.
//

#ifndef LABA1_ABSTRACTMETHOD_H
#define LABA1_ABSTRACTMETHOD_H

#include <vector>

template<typename T> class AbstractMethod {
public:
    virtual ~AbstractMethod() = default;
    virtual void init(int n, T args) = 0;
    virtual std::vector<double> solve() const = 0;
};

#endif //LABA1_ABSTRACTMETHOD_H
