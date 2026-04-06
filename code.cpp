#include <iostream>
using namespace std;


//                 ..............      Basic problems   ..............
//   ......................................................................................

// ....  Print "Hello world"        

// int main(){
  
//     cout << "Hello World";
//     return 0;
// }


// ....  Q1. Check Even or Odd number   
// Given a number n, check whether it is even or odd. Return true for even and false for odd.

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n % 2 == 0)
//         cout << "Even";
//     else
//         cout << "Odd";

//     return 0;
// }


// ....  Q2. Multiplication table 

// int main(){
//     int n; 
//     cout << "Enter a number ";
//     cin >> n;

//     for(int i=0; i<=10; i++){
//         cout << n << 'x' << i << '=' << n * i << endl;
//   }
//   return 0 ;
// }


// ....  Q3. Sum of Naturals Number

// int main(){
//     int n , sum = 0;
//     cout << "Enter a number ";
//     cin >> n;

//     for(int i=1; i<=n; i++){
//         sum = sum + i;
//     }
//     cout <<"Sum = " << sum ;
//     return 0;
// }


// .... Q4. Sum of Squares numbers

// int main(){
//     int n, sum = 0;
//     cout <<"Enter a number ";
//     cin >> n;

//     for(int i=1 ; i<=n ; i++){
//         sum = sum + (i*i);
//     }
//     cout <<"Sum = "<< sum ;
//     return 0;
// }


// .... Q5. Swap Two Numbers

// int main(){
//     int a,b ;
//     cout <<"Enter number "<< "a = " ;
//     cin >> a;
//     cout << "b = ";
//     cin >> b;

//     a = a + b;
//     b = a - b;
//     a = a - b;
    
//     cout << "After swap "<< "a = "<< a << ", b = " << b;
//     return 0;
// }


// .... Q6. Closest Number
//      Closest multiple

// int main() {
//     int n = 13, m = 4;

//     int lower = (n / m) * m;        // smaller multiple
//     int upper = (n / m + 1) * m;    // bigger multiple

//     if (n - lower < upper - n)
//         cout << lower;
//     else
//         cout << upper;

//     return 0;
// }