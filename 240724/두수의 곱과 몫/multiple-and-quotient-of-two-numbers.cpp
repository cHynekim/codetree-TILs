#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    int mul_sum = a * b, div_sum = a / b;
    cout << a << " * " << b << " = " << mul_sum << '\n';
    cout << a << " / " << b << " = " << div_sum;
    return 0;
}