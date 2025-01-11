#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long double input, sum, i;

    cout << "Enter input:";
    cin >> input;
    sum = input;
    for (i=1; i<=10000000; i++){
        //sum = sum + (((input^(i+1))/i+1)*(-1^i));
        sum = sum + ((pow (input, i+1))/(i+1))*(pow (-1, i));
        //cout << sum << endl;
    }
    cout << "The output is:" << sum;
}
