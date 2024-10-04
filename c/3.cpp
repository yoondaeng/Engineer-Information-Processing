#include <iostream>

// 열거형을 정의합니다. 이름을 Value로 변경합니다.
enum Value {
    a,      // 0 초기값을 설정하지 않으면 0부터 차례대로 할당
    b,      // 1
    c = 7,  // 7 7로 지정했으니까
    d       // 8 (c 다음 값) 7 다음 값인 8 할당
};

int main(){
    Value value;
    value = d;
    std::cout << value;  // 8
    return 0;
}
