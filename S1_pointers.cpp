#include <iostream>
#include <math.h>

using namespace std;

void pointerSample(){
    /*
    The reference operator (&) returns the variable’s address.
    The dereference operator (*) helps us get the value that has been stored in a memory address.
    */
    int  x = 27;  
	int  *ip;// it is equal to int* ip      
	ip = &x;      

    //------------------------------------------- 

	cout << "Value of x is: ";
	cout << x << endl;
	cout << "Value of ip is: ";
	cout << ip<< endl;
	cout << "Value of *ip is: ";
	cout << *ip << endl;

    //------------------------------------------- 

    cout << "Value of &ip is: ";
	cout << &ip << endl;
    cout << "Value of &x is: ";
	cout << &x << endl;

    //------------------------------------------
    //change the value of ip 
    *ip = 300;
    cout<< "\n\nafter changing the *ip value:\n";
    cout << "Value of x is: ";
	cout << x << endl;
	cout << "Value of ip is: ";
	cout << ip<< endl;
	cout << "Value of *ip is: ";
	cout << *ip << endl;
}


void pointerToArray(){
    /*The array name itself denotes the base address of the array. 
    This means that to assign the address of an array to a pointer, 
    you should not use an ampersand (&).*/

    char *ip;
	char arr[] ={'a', 'b', 'c', 'd', 'e', 'f'};//{ 10, 34, 13, 76, 5, 460 };
	ip = arr;
    cout<<"ip: "<<ip<<endl;
	for (int x = 0; x < 2; x++) {
		//cout << *(ip+x) << endl;
        cout<<ip+x<<"     "<< *(ip+x)<<endl;//&arr[x]<<"  "<<
		//ip++;
	}
    
    //what if?
    /*for (int x = 0; x < 6; x++) {
		cout << *ip << endl;
		ip++;
	}*/
}

void nullPointer(){
    /* If there is no exact address that is to be assigned, then the pointer variable can be assigned a NULL. 
    It should be done during the declaration. Such a pointer is known as a null pointer. 
    Its value is zero and is defined in many standard libraries like iostream. */

    int  *ip = NULL;
	cout << "Value of ip is: " << ip << endl;
    cout << "Value of &ip is: " << &ip << endl;
    cout << "Value of *ip is: " << *ip << endl;
	
}

int main() {
	
    //pointerSample();
    //nullPointer();
    pointerToArray();
    //cout<< __cplusplus;
    return 0;
}