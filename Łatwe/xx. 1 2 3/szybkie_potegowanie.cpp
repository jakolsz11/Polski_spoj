#include <iostream>
#include <math.h>

using namespace std;

unsigned long long fast_pow(int base, long long exponent) {
  if (exponent == 0) {
    return 1.0;
  }

  unsigned long long result = fast_pow(base, exponent / 2);
  result *= result;

  if (exponent % 2 != 0) {
    result *= base;
  }
  
  result%=101010101;

  return result;
}

int main() {

    std::ios::sync_with_stdio(false);

    int tests;
    cin>>tests;

    for(int i=0; i<tests; i++){

        int liczba;
        cin>>liczba;

        unsigned long long result;

        result=fast_pow(2, ceil(double (liczba)/2));
    
        result%=101010101;

        unsigned long long sum=result;

        result=fast_pow(2, floor(double (liczba)/2));

        result%=101010101;

        sum+=result;

        sum%=101010101;

        cout<<sum<<"\n";
    }

  return 0;
}