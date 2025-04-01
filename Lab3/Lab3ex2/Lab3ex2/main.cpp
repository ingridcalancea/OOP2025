#include "Canvas.h"
#include <iostream>

int main() {
    Canvas canvas(40, 20);

    canvas.DrawLine(1, 1, 30, 15, '1');
    canvas.DrawCircle(20, 10, 5, '2');
    canvas.FillCircle(30, 5, 3, '3');
    canvas.DrawRect(5, 5, 15, 10, '4');
    canvas.FillRect(25, 12, 35, 17, '5');
    canvas.SetPoint(10, 10, '6');

    std::cout << "\n";
    canvas.Print();

    std::cout << "\n";
    canvas.Clear();
    canvas.Print();

    return 0;
}
