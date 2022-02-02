#include <iostream>

using namespace std;

int main()
{
    int value1 = 1;
    int value2 = 2;
    
    int *const ptr1 = &value1;
    const int *ptr2 = &value1;
    int const *ptr3 = &value1;
    const int *const ptr4 = &value1;
    const int *ptr5;
    //int *const ptr6; //error: uninitialized const 'ptr6'
    
    //int &const ref1 = value1; //error: ‘const’ qualifiers cannot be applied to 'int&'
    const int &ref2 = value1;
    int const &ref3 = value1;
    //const int &const ref4 = value1; //error: ‘const’ qualifiers cannot be applied to 'int&'
    
    value1 = 0;
    
    //ptr1 = &value2; //error: assignment of read-only variable 'ptr1'
    ptr2 = &value2;
    ptr3 = &value2;
    //ptr4 = &value2; //error: assignment of read-only variable 'ptr4'
    
    *ptr1 = 11;
    //*ptr2 = 12; //error: assignment of read-only location '* ptr2'
    //*ptr3 = 13; //error: assignment of read-only location '* ptr3'
    //*ptr4 = 14; //error: assignment of read-only location '* ptr2'
    
    //ref2 = 22; //error: assignment of read-only reference 'ref2'
    //ref3 = 23; //error: assignment of read-only reference 'ref3'
    
    //ref2 = value2; //error: assignment of read-only reference 'ref2'
    //ref3 = value2; //error: assignment of read-only reference 'ref2'
    
    cout << typeid(ptr1).name() << ' ' << *ptr1 << endl;
    cout << typeid(ptr2).name() << ' ' << *ptr2 << endl;
    cout << typeid(ptr3).name() << ' ' << *ptr3 << endl;
    cout << typeid(ptr4).name() << ' ' << *ptr4 << endl;
    cout << endl;
    //cout << typeid(ref1).name() << ' ' << *ptr1 << endl;
    cout << typeid(ref2).name() << ' ' << ref2 << endl;
    cout << typeid(ref3).name() << ' ' << ref3 << endl;
    //cout << typeid(ref4).name() << ' ' << *ptr1 << endl;

    return 0;
}
