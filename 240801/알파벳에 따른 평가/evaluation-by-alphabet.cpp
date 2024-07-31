#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char cap;
    cin >> cap;

    if(cap == 'S'){
        cout << "Superior";
    }
    else if(cap == 'A'){
        cout << "Excellent";
    }
    else if(cap == 'B'){
        cout << "Good";
    }
    else if(cap == 'C'){
        cout << "Usually";
    }
    else if(cap == 'D'){
        cout << "Effort";
    }
    else cout << "Failure";
    
    return 0;
}