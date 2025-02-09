#include <iostream>
using namespace std;

char type_1(int a){
    char output = 64 + a;
    return output;
}

char type_2(char input1, int input2){
    input1 = input1 - input2;

    if (input1 < 65){
        input1 = (input1-65)+91;
    }
    return input1;
}

void type_3(char input1, int input2){
    for (int i=0; i < input2; i++){
        cout << input1;
    }
}
int main(){
    int testcases;
    cin >> testcases;
    for (int j=0; j < testcases; j++){
        int input0;
        cin >> input0;
        if (input0==1){
            int input1;
            cin >> input1;
            cout << type_1(input1);
        }
        if (input0==2){
            char inPut1; int inPut2;
            cin >> inPut1 >> inPut2;
            cout << type_2(inPut1, inPut2);
        }
        if (input0==3){
            char inPut1; int inPut2;
            cin >> inPut1 >> inPut2;
            type_3(inPut1, inPut2);
        }

    }
}
