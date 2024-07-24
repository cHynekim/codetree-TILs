#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float ft_std = 30.48;
    int mi_std = 160934;

    float ft = 9.2, mi = 1.3;

    cout << fixed;

    double ft_cm = ft_std * ft, mi_cm = mi_std * mi;

    cout.precision(1);
    cout << ft << "ft = " << ft_cm << "cm\n";
    cout << mi << "mi = " << mi_cm << "cm";
    return 0;
}