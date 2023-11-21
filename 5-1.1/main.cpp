#include <iostream>

int main() {
    system("chcp 65001");
    int v1;
    int p1;
    double answ;
    std::cout << "Введіть об'єм бака: " << std::endl;
    std::cin >> v1 ;

    std::cout << "Введіть ціну палива (грн/л): " << std::endl;
    std::cin >> p1 ;
    answ = (p1*v1) ;
    std::cout << "Вартість пального в баку " <<answ<< std::endl;
    return 0;
}
