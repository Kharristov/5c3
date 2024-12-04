#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int b, k; 
    double N; 
    cin >> b >> k >> N;

    string result = "0.";

 
    for (int i = 0; i < k; i++) {
        N *= b;
        int digit = static_cast<int>(N);
        N -= digit;
        if (digit < 10) {
            result += char(digit + '0'); 
        }
        else {
            result += char(digit - 10 + 'a'); 
        }

  
        if (abs(N) < 1e-5) {
            break;
        }
    }


    while (result.back() == '0') {
        result.pop_back();
    }

    if (result.back() == '.') {
        result.pop_back();
    }

    cout << result;

    return 0;
}

