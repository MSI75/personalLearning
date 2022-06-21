#include <iostream>
using namespace std;

/* void callByValue(int n);
void callByReference(int *n); */

void swap(int a, int b);
void swapReference(int *a, int *b);
int main()
{
    // int age = 22;
    // int *ptr = &age;
    // int _age = *ptr;
    // cout << age << endl;
    // cout << ptr << endl;
    // cout << *(&age) << endl;
    // cout << &age << endl;
    // cout << *ptr << endl;
    // cout << _age << endl;
    // cout << &ptr << endl;

    // pointer to pointer
    /*   int a = 75;
      int *b = &a;
      int **c = &b;

      // output
      cout << a << endl;
      cout << *b << endl;
      cout << **c << endl;
      cout << *(&a) << endl;
      cout << **(&b) << endl;

      // Address
      cout << b << endl;
      cout << &a << endl;
      cout << *c << endl;
      cout << c << endl;
      cout << &b << endl;
      cout << *(&b) << endl; */

    /* int n = 5;
    // value
    callByValue(n);

    // reference
    callByReference(&n); */
    int a = 5;
    int b = 7;

    swap(a, b);
    swapReference(&a, &b);
    return 0;
}

/* void callByValue(int n)
{
    cout << n * n << endl;
}
void callByReference(int *n)
{
    cout << *n * *n << endl;
} */

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
    cout << a << endl;
    cout << b << endl;
}

void swapReference(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    cout << *a << endl;
    cout << *b << endl;
}