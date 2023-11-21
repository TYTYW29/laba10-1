#include <iostream>
#include <cmath>

#include <math.h>
int main() {
    system("chcp 65001");

//    std::cout << "Введіть значення кута a в градусах: ";

//    std::cin >> a ;
    std::cout << "Введіть значення кута a в градусах: ";
//    double alpha;
//    std::cin >> alpha;
    double z1;
    double z2;

//    double answ_1;
//    double answ;
//    double  alpha_radians = alpha * M_PI / 180.0;
//    double s = 0;
//    double sin= s;
//    double c;
//    double cos = c;
    double a;
    std::cin >> a;
//    a = a * M_PI/180;


//    double result1 = 1 - 1/4 * std::pow(std::sin(2 * a), 2) + 3 * std::cos(a);
//    double result2 = std::pow(std::sin(a), 2) + std::pow(std::sin(4 * a), 2);
//    answ = 1 - 1/4 * pow(s , 2) * 2 * a + 3 * c * a;
//    answ_1 = pow(c , 2) * a + pow(c , 4) * a;
//    std::cout << "Значення виразу z1: " << answ << std::endl;
//    std::cout << "Значення виразу z2: " << answ_1 << std::endl;
//    double z1 = 1 - 1/4 * pow(sin(alpha_radians), 2) + 3 * cos(alpha_radians);
//    double z2 = pow(cos(alpha_radians), 2) + pow(cos(alpha_radians), 4);
    z1 = 1 - 1.0 / 4 * std::pow(sin(2 * a),2) + 3 * cos(a);
    z2 = std::pow(cos(a),2) + pow(cos(a),4);
    std::cout << "Значення виразу z1: " << z1 << std::endl;
    std::cout << "Значення виразу z2: " << z2 << std::endl;
    return 0;
}
// #include <iostream>
// #include <cmath>
// #include <math.h>
//
//int main() {
//
//    double test_cases [] = {0,  M_PI/2,  M_PI / 4, M_PI};
//    int num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);
//
//    for (int i = 0; i < num_test_cases; ++i) {
//        double alpha = test_cases[i];
//
//        double result1 = 1 - 1/4 * std::pow(std::sin(2 * alpha), 2) + 3 * std::cos(alpha);
//        double result2 = std::pow(std::sin(alpha), 2) + std::pow(std::sin(4 * alpha), 2);
//
//        std::cout << "alpha = " << alpha << std::endl;
//        std::cout << "Formula 1 result: " << result1 << std::endl;
//        std::cout << "Formula 2 result: " << result2 << std::endl;
//        std::cout << "---" << std::endl;
//    }
//
//    return 0;
//}
//int main () {
//    system("chcp 65001");
//
//    double z1, z2, a;
//
//    std::cout << "Введіть значення a в градусах: ";
//    std::cin >> a;
//    if (a == 0) {
//        std::cout << "Неправильне число";
//    }
//
//    else {
//        a = a * M_PI / 180;
//
//        z1 = (1 - 2 * pow(sin(a), 2)) / (1 + sin(2 * a));
//        z2 = (1 - tan(a)) / (1 + tan(a));
//
//        std::cout << "z1 = " << z1 << "\nz2 = " << z2 << std::endl;
//    }
//    return 0;
//
//}
//int main() {
