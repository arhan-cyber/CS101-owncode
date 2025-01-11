#include <simplecpp>
main_program{
      long double input, factorial, sum, pdeg, i=1, j=4, k=5;
      cout << "Enter input:";
      cin >> input;

      factorial = 6;
      input = (input/180)*(PI);
      sum = input;



      cout << "Enter precision degree:";
      cin >> pdeg;
      repeat(pdeg)
      {
          cout << "sum is before:" << sum;
          //sum = sum + (pow (-1,i))*((pow (input, 2*i+1))/factorial);
          sum = sum + (pow(-1, i) * pow(input, 2*i + 1) / factorial);
          factorial = factorial*(j)*(k);
          cout << "factorial is currently:" << factorial << endl;
          i = i+2;
          j = j+2;
          k = k+2;
          cout << "sum is currently:" << sum << endl;
      }
      cout << "the output is:" << sum;
  }
/* this was written with the following considerations in mind:
1. no explicit usage of the for command
2. efficient memory usage for factorial calculation
*/
