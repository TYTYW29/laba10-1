#include <iostream>
#include <cmath>

int main() {
    system("chcp 65001");
    double Ax = 0, Ay = 0;
    double Bx = 5, By = 5 - 1;
    double Cx = -5, Cy = 5 + 1;


    double median_Bx = (Ax + Bx) / 2;
    double median_By = (Ay + By) / 2;


    double median_length_B = sqrt(pow(Bx - median_Bx, 2) + pow(By - median_By, 2));


    double mid_ACx = (Ax + Cx) / 2;
    double mid_ACy = (Ay + Cy) / 2;


    double length_AC = sqrt(pow(Cx - Ax, 2) + pow(Cy - Ay, 2));


    double bisector_length_C = (2 * length_AC * sqrt(1 + pow(sqrt(pow(Bx - mid_ACx, 2) + pow(By - mid_ACy, 2)) / length_AC, 2))) / (sqrt(pow(Bx - mid_ACx, 2) + pow(By - mid_ACy, 2)) + length_AC);

    std::cout << "Довжина медіани  B: " << median_length_B << std::endl;
    std::cout << "Довжина бісектриси  C: " << bisector_length_C << std::endl;

    return 0;
}