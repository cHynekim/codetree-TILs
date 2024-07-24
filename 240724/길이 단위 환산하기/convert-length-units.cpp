#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float ft_std = 30.48;
    float ft;
    cin >> ft;

    cout << fixed;
    cout.precision(1);

    double res = ft * ft_std;
    cout << res;
    return 0;
}