//
// Created by ikuzin on 9/10/22.
//

#ifndef LABA1_RUNMETHOD_H
#define LABA1_RUNMETHOD_H

#include <memory>
#include "AbstractMethod.h"

using vec = std::vector<double>;
using vectorPtr = std::unique_ptr<std::vector<vec>>;

class RunMethod : public AbstractMethod<vectorPtr> {
private:
    std::vector<double> a;
    std::vector<double> b;
    std::vector<double> c;
    std::vector<double> f;
public:
    RunMethod() = default;
    void init(int n, vectorPtr args) override;
    std::vector<double> solve() const override;
};

#endif //LABA1_RUNMETHOD_H
