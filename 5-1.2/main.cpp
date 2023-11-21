#include <iostream>
int main() {
    system("chcp 65001");
    int v1;
    int p1;
    double answ;
    std::cout << "Вартість одного номера: " << std::endl;
    std::cin >> v1 ;

    std::cout << "Періодичність видання: " << std::endl;
    std::cin >> p1 ;
    answ = (p1*v1*12) ;
    std::cout << "Вартість річної підписки " <<answ<< std::endl;
    return 0;
}
