#include <iostream>
using namespace std;

bool isAnagram(int n, int m){

    int sum=0, sumnew=0, product=1, prodnew=1;
    for (int i=0; i< n; i++){
        char c;
        cin >> c;
        if (c>=97){
            c=c-32;
        }
        sum=sum+c;
        product=product*c;
    }
    for (int i=0; i<m; i++){

        char c;
        cin >>c;
        if (c>=97){
            c=c-32;
        }
        sumnew=sumnew+c;
        prodnew=prodnew*c;
    }
    if (sumnew==sum && product==prodnew && n==m){
        return true;
    }
    else {
        return false;
    }
}
int main(){
    int t;
    cin >> t;
    for (int j=0; j<t; j++){
    int n, m;
    cin >> n >> m;
    cout << isAnagram(n, m) << endl;
    }
}
