#include <iostream>
#include <math.h>

float get_delta(const int& a, const int& b, const int& c);
void root_finder(const int& a, const int& b, const int& c);

int main() {
    std::cout << "Please enter a, b, and c consecutively (a b c): " << std::endl;
    int a, b, c;
    std::cin >> a >> b >> c;
    root_finder(a, b, c);
    system("Pause");
    return 0;
}

void root_finder(const int& a, const int& b, const int& c) {
    float del = get_delta(a, b, c);
    if (del > 0) {
        float r1 = (-b + std::sqrt(del)) / (2 * a);
        float r2 = (-b - std::sqrt(del)) / (2 * a);
        std::cout << "r1 = " << r1 << " , r2 = " << r2 << std::endl;
    } 
    else if (del == 0) {
        float r = -b / (2 * a);
        std::cout << "r1 = r2 = " << r << std::endl;
    } else {
        float del_prime = -del;
        float imaginary = std::sqrt(del_prime) / (2 * a);
        float real = -b / (2.0 * a);
        //std::string r1 = std::to_string(real) + " + " + std::to_string(imaginary) + "i";
        //std::string r2 = std::to_string(real) + " - " + std::to_string(imaginary) + "i";
        std::cout << "r1 = " << real << " + " << imaginary << "i" << std::endl;
        std::cout << "r2 = " << real << " - " << imaginary << "i" << std::endl;
    }
}

float get_delta(const int& a, const int& b, const int& c) {
    return std::pow(b, 2) - (4 * a * c);
}