//M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.
//ex) 입력: 3 16
// 예제 출력:
// 3
// 5
// 7
// 11
// 13

#include<iostream>
using namespace std;

int main(){
    int num1, num2;

    cin >> num1 >> num2;

    for(; num1 <= num2; num1++){
        bool isprime = true;
        for(int i = 2; i < num1; i++){
            if(num1 % i == 0){
                isprime = false;
                break;            
            }            
        };
        if(isprime) cout << num1 << endl; 
    };
    return 0;
}