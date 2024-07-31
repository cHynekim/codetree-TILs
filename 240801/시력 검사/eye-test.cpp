#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float lvis, rvis;
    cin >> lvis >> rvis;

    if(lvis >= 1.0 && rvis >= 1.0){
        cout << "High";
    }
    else if(lvis >= 0.5 && rvis >= 0.5){
        cout << "Middle";
    }
    else
        cout << "Low";

    return 0;
}