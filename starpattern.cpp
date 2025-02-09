#include <iostream>
using namespace std;


void print_starry_line(int num_spaces, int num_stars){
    for (int a=0; a <3; a++){
        for (int b=0; b < num_spaces; b++){
            cout << " ";
        }
        for (int c=0; c < num_stars; c++){
            cout << "*";
        }
        for (int d=0; d<= num_spaces; d++){
            cout << " ";
        }

    }
}
int main(){
    int n;
    cin >> n;
    int x, y;
    for (int i=0; i<n; i++){
        x = (2*i)+1;
        y = (n-1)-i;

        print_starry_line(y, x);
        cout << endl;


    }
}
