#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int res;
    cin >> res;

    string ind = res == 100 ? "pass" : "failure";
    cout << ind;
    return 0;
}