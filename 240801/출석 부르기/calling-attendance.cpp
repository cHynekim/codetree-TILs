#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int std_n;
    cin >> std_n;

    if(std_n == 1){
        cout << "John";
    }
    else if(std_n == 2){
        cout << "Tom";
    }
    else if(std_n == 3){
        cout << "Paul";
    }
    else cout << "Vacancy";
    
    return 0;
}