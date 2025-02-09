#include <iostream>
using namespace std;
bool isValidTile(unsigned int n){
    unsigned int original = n, count=0;
    for (int i=0; i<33; i++){
       n= n << 1;
       //cout << n << endl;
       unsigned int compared = n&original;
       //cout << "compared value is:" << compared << endl;
        if ((n&original)!=0){
            count++;
        }
    }
    if((count==0)&&(n>0)){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
    int t;
    cin >> t;
    for (int j=0; j<t; j++){
    unsigned int a;
    cin >> a;
    cout << ((isValidTile(a)==1)?"yes" : "no") << endl;
    }
}
