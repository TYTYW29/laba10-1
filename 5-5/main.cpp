#include <iostream>
#include <cmath>
#include <math.h>
int main() {
    system("chcp 65001");


    double b, a, s, answer;
    std::cout << "введіть значення b:";
    std::cin >> b ;
    std::cout << "введіть значення a:";
    std::cin >> a;
    std::cout << "введіть значення s:";
    std::cin >> s;



    answer = ((34 * sin(b) + a) / (sqrt(2 * a + 4 * s / (5 * s)))) + 4 * a * b;

    if (a != -0.4) {
        std::cout << answer;
    }
    else {
        std::cout << "a не знаходиться в області визначення " << std::endl;
    }


}
