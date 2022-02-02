# const-experiment
a experiment for const in C++, and there is some sommary

### const pointer
there are 3 kind of const pointer type

- const ptr
  - Declaration
    - int *const ptr1 = &value; 
    - must initialize
  - After initialiezed, it cannot point to another value
  - But can asign new value by `*ptr1 = 11;`
- const int
  - Declaration
    - const int *ptr2;
    - int const *ptr3;
    - Don't need to be initialized
  - Can point to another value by `ptr2 = &value2;`
  - Cannot asign new value from ptr2, but still can asign value from value
- const int and ptr
  - Declaration
    - const int *const ptr4 = &value1;
  - Get all restriction of const ptr and const int

### const reference
Unlike const pointer, there is only 1 type
- const int
  - Declaration
    - const int &ref2 = value1;
    - int const &ref3 = value1;
    - must initialize
  - Cannot reference to another variable
  - Cannot asign new value
