#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a_age, b_age;
    char a_gen, b_gen;

    cin >> a_age >> a_gen >> b_age >> b_gen;

    cout << ((a_age > 18 && a_gen == 'M') || (b_age > 18 && b_gen == 'M'));

    return 0;
}