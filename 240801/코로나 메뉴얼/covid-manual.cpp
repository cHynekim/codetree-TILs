#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char a_sym, b_sym, c_sym;
    int a_tem, b_tem, c_tem;

    cin >> a_sym >> a_tem >> b_sym >> b_tem >> c_sym >> c_tem;

    int std = 0;
    if(a_sym == 'Y' && a_tem >= 37)
        std++;
    
    if(b_sym == 'Y' && b_tem >= 37)
        std++;
    
    if(c_sym == 'Y' && c_tem >= 37)
        std++;

    if(std > 1)
        cout << 'E';
    else
        cout << 'N';
        
    return 0;
}