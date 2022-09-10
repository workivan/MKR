#include <vector>
#include <valarray>
#include "iostream"
#include "RunMethod.h"


int main() {
    std::cout << "start" << std::endl;
    int n = 10;
    float h = .1;
    std::vector<vec> args{
            vec(n, 1),
            vec(n, 2),
            vec(n, -1),
            vec(n, 2 * h * h)
    };
    std::unique_ptr<std::vector<vec>> init = std::make_unique<std::vector<vec>>(args);

    RunMethod method{};
    method.init(n, std::move(init));

    const std::vector<double> &vector = method.solve();
    for (auto value: vector) {
        printf("%.5f\n", value);
    }
    return 0;
}
