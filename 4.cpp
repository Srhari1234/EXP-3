//Name: Saaj Mulik
//PRN: 23070123109
//EnTC B-2
#include<iostream>
using namespace std;
int main() {
    int a, b, sum, diff, prod, div, mod, incr, decr;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    sum = a+b;
    cout<<"Sum of no.s is: "<<sum<<endl;
    diff = a-b;
    cout<<"Difference of no.s is: "<<diff<<endl;
    prod = a*b;
    cout<<"Product of no.s is: "<<prod<<endl;
    div = a/b;
    cout<<"Division of no.s is: "<<div<<endl;
    mod = a%b;
    cout<<"Modulus of no.s is: "<<mod<<endl;
    incr = ++a;
    cout<<"Increment of a is: "<<incr<<endl;
    decr = --b;
    cout<<"Decrement of b is: "<<decr<<endl;
    return 0;
}
/* OUTPUT: 
Enter the value of a: 2
Enter the value of b: 4
Sum of no.s is: 6
Difference of no.s is: -2
Product of no.s is: 8
Division of no.s is: 0
Modulus of no.s is: 2
Increment of a is: 3
Decrement of b is: 3

--------------------------------
Process exited after 4.298 seconds with return value 0
Press any key to continue . . . */
