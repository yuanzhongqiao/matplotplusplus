#include <iostream>
#include <thread>
#include <vector>
#include <set>
#include <matplot/matplot.h>

int main() {
    using namespace matplot;

    auto x = linspace(0,10);
    auto y = transform(x, [](double x) {return sin(x); });
    plot(x,y);

    ylim(manual);
    ylim({-1,+1});
    hold(on);
    auto y2 = transform(x, [](double x) {return 2*sin(x); });
    plot(x,y2);
    hold(off);

    ylim(automatic);

    wait();
    return 0;
}