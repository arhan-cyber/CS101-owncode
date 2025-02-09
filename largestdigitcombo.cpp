#include <iostream>

using namespace std;


int largestDigitfinder(int n){
	int largestDigit=-1, tenpow=1, divider=10;
	while (divider <=(n*10)){
		int digit;
		digit = (n%divider)/tenpow;
		tenpow= tenpow *10;
		divider= divider *10;
		
		if (digit>=largestDigit){
			largestDigit= digit;
		}
		
		
		
		
		
	}
	return largestDigit;
    
}
int main(){
	int iterations, inputNum, outputNo=0, tenpower=1;
	cin >> iterations;
	
	for (int i=1; i<=iterations; i++){
	cin >> inputNum;
	// cout << "largest numebr is :" <<  largestDigitfinder(inputNum) << endl;
	outputNo = (outputNo*10)+(largestDigitfinder(inputNum));

	// cout << "output no is " << outputNo << endl;
	tenpower = tenpower*10;
	
	
	
	
	
	}
	cout << outputNo;

}
