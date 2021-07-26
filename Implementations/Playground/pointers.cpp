/*
Author : humanbeeng
*/
#include <bits/stdc++.h>
using namespace std;

/* 
 KEY TAKEAWAYS : 
	1. lets say we have int a = 5
		cout << a will print the DATA FIELD OF a
		cout << &a will print the ADDRESS FIELD OF a
	2. Lets say we declare a pointer int *b  and feed it the address of a ie.,
		int *b = &a;

		now,
		cout << b will print the data field of b, which will be having the address of a
		now, 
		if we use the * unary operator on the address, * returns the value of the address. Hence. 
		cout << *b, the * will take the content of the data field(which had the address of a) and then return the 'Value of the address of a', hence printing the value of a itself. 
	3. If we take a pointer as a parameter and we do this, 
		void increment(int *b){
			int num = b;
			num++;
		} 
		main(){
			int b = 5;
			increment(&b);
			cout << b; it will print 5 only since,
				we are copying the value of *b to num and incrementing num
				it doesn't modify b
		}

	4. Remember the pointer declaration 
		int *b_pointer = &b;
		this holds well and syntactically same for passing pointer as a parameter
		how ?

		void increment(int *b_pointer){

		}
		main(){
			int b = 5;
			increment(&b); //notice the syntax 
			------------------------
			increment func    main
			int *b_pointer = &b

			------------------------
			cout << b -> prints 6
		}
 
  */

// void pointer_arr(int arr_pointer[]) {
//     int n = sizeof()
// }

void increment(int *n_pointer) {

    (*n_pointer)++;
}

int main() {
    int n;
    cin >> n;
    int arr[] = {1, 2, 3, 4, 5};
    int *arr_pointer = arr;

    // cout << "Address of n is " << &n << '\n';
    int *n_pointer = &n;
    cout << "Value of n : " << n << '\n';
    increment(&n);
    cout << "value of n : " << n << '\n';

    // int *b = &n;
    // pointer_arr(arr_pointer);
    // cout << "Address of n is " << &n << '\n';
    // cout << "Value of n is " << *(&n) << '\n';
    // cout << "Address field of b contains " << &b << '\n';
    // cout << "Data field of b is " << b << '\n';

    return 0;
}