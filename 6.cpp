//Name: Saaj Mulik
//PRN: 23070123109
//EnTC B-2
#include <iostream>
using namespace std;
int main() {
	int a, b;
	cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
	if (a==b)
		cout<<"a is equal to b"<<endl;
	else
		cout<<"a is not equal to b"<<endl;

	if (a!=b)
		cout<<"a is not equal to b"<<endl;
	else
		cout<<"a is equal to b"<<endl;

	if (a>b)
		cout<<"a is greater than b"<<endl;
	else
		cout<<"a is not greater than b"<<endl;

	if (a<b)
		cout<<"a is less than b"<<endl;
	else
		cout<<"a is not less than b"<<endl;

	if (a>=b)
		cout<<"a is greater than or equal to b"<<endl;
	else 
		cout<<"a is not greater than or equal to b"<<endl;

	if (a<=b)
		cout<<"a is less than or equal to b"<<endl;
	else
		cout<<"a is not less than or equal to b"<<endl;
	return 0;
}
/* OUTPUT:
Enter the value of a: 7
Enter the value of b: 8
a is not equal to b
a is not equal to b
a is not greater than b
a is less than b
a is not greater than or equal to b
a is less than or equal to b

--------------------------------
Process exited after 2.99 seconds with return value 0
Press any key to continue . . . */
