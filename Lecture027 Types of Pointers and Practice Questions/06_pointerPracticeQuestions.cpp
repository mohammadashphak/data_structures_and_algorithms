#include <iostream>
using namespace std;

// Practice Questions

// Question 1
/*
int main()
{
    int first = 8;
    int second = 18;
    int *ptr = &second;
    *ptr = 9;
    cout << first << " " << second << endl;

    return 0;
}
*/

// Question 2
/*
int main()
{
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;
    cout << first << endl;

    return 0;
}
*/

// Question 3
/*
int main()
{
    int first = 8;
    int *p = &first;
    cout << (*p)++ << " ";
    cout << first << endl;

    return 0;
}
*/

// Question 4
/*
int main()
{
    int *p = 0;
    int first = 110;
    *p = first;
    cout << *p << endl;

    return 0;
}
*/

// Question 5
/*
int main()
{
    int first = 8;
    int second = 11;
    int *third = &second;
    first = *third;
    *third = *third + 2;
    cout << first << "  " << second << endl;

    return 0;
}
*/

// Question 6
/*
int main()
{
    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;
    (*ptr)++;
    *ptr = p;
    cout << *ptr << " " << f << " " << p << endl;

    return 0;
}
*/

// Question 7
/*
int main()
{
    int *ptr;
    int arr[5];
    cout << sizeof(arr) << " " << sizeof(ptr) << endl;

    return 0;
}
*/

// Question 8
/*
int main()
{
    int arr[] = {11, 21, 13, 14};
    cout << *(arr) << " " << *(arr + 1) << endl;

    return 0;
}
*/

// Question 9
/*
int main()
{
    int arr[6] = {11, 12, 31};
    cout << arr << " " << &arr << endl;

    return 0;
}
*/

// Question 10
/*
int main()
{
    int arr[6] = {11, 21, 13};
    cout << (arr + 1) << endl;

    return 0;
}
*/

// Question 11
/*
int main()
{
    int arr[6] = {11, 21, 31};
    int *p = arr;
    cout << p[2] << endl;

    return 0;
}
*/

// Question 12
/*
int main()
{
    int arr[] = {11, 12, 13, 14, 15};
    cout << *(arr) << " " << *(arr + 3);

    return 0;
}
*/

// Question 13
/*
int main()
{
    int arr[] = {11, 21, 31, 41};
    int *ptr = arr++; // be careful
    cout << *ptr << endl;

    return 0;
}
*/

// Question 14
/*
int main()
{
    char ch = 'a';
    char *ptr = &ch;
    ch++;
    cout << *ptr << endl;

    return 0;
}
*/

// Question 15
/*
int main()
{
    char arr[] = "abcde";
    char *p = &arr[0];
    cout << p << endl;

    return 0;
}
*/

// Question 16
/*
int main()
{
    char arr[] = "abcde";
    char *p = &arr[0];
    p++;
    cout << p << endl;

    return 0;
}
*/

// Question 17
/*
int main()
{
    char str[] = "hello";
    char *p = str;
    cout << str[0] << " " << p[0] << endl;

    return 0;
}
*/

// Question 18
/*
void update(int *p)
{
    *p = (*p) * 2;
}

int main()
{
    int i = 10;
    update(&i);
    cout << i << endl;

    return 0;
}
*/

// Question 19
/*
void fun(int arr[])
{
    cout << arr[0] << " ";
}

int main()
{
    int arr[] = {11, 12, 13, 14};
    fun(arr + 1);
    cout << arr[0] << endl;

    return 0;
}
*/

// Question 20
/*
void square(int *p)
{
    int a = 70;
    p = &a;
    *p = (*p) * (*p);
}

int main()
{
    int a = 70;
    square(&a);
    cout << a << endl;
}
*/

// Question 21
/*
int main()
{
    int first = 10;
    int *p = &first;
    int **q = &p;
    int second = 20;
    *q = &second;
    (*p)++;
    cout << first << " " << second << endl;

    return 0;
}
*/

// Question 22
/*
int main()
{
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;
    cout << first << " " << second << endl;

    return 0;
}
*/

// Question 23
/*
int main()
{
    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);
    cout << first << " " << second << endl;

    return 0;
}
*/

// Question 24
/*
void increment(int **p)
{
    ++(**p);
}

int main()
{
    int num = 110;
    int *ptr = &num;
    increment(&ptr);
    cout << num << endl;

    return 0;
}
*/

// Question 25
/*
int main()
{
    int arr[] = {41, 52, 36, 74};
    int *p = (arr + 1);
    cout << *arr + 8 << endl;

    return 0;
}
*/

// Question 26
/*
int main()
{
    char *p;
    char str[] = "pqrstuv";
    p = str;
    p += 3;
    cout << p << endl;

    return 0;
}
*/

// Question 27
/*
int main()
{
    char arr[20];
    int i;
    for (i = 0; i < 10; i++)
    {
        *(arr + i) = 65 + i;
    }
    *(arr + i) = '\0';
    cout << arr << endl;

    return 0;
}
*/

// Question 28
/*
int main()
{
    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
    cout << *ptr2 << " ";
    cout << ptr2 - ptr1;

    return 0;
}
*/

// Question 29
/*
int main()
{
    char st[] = "ABCD";
    for (int i = 0; st[i] != '\0'; i++)
    {
        cout << st[i] << *(st) + i << *(i + st) << i[st] << " ";
    }

    return 0;
}
*/

// Question 30
/*
void Q(int z)
{
    z += z;
    cout << z << " ";
}

void P(int *y)
{
    int x = *y + 2;
    Q(x);
    *y = x - 1;
    cout << x << " ";
}

int main()
{
    int x = 5;
    P(&x);
    cout << x;

    return 0;
}
*/

// Question 31
/*
int main()
{
    int ***r, **q, *p, i = 8;
    p = &i;
    (*p)++;
    q = &p;
    (**q)++;
    r = &q;
    cout << *p << " " << **q << " " << ***r;
    return 0;
}
*/

// Question 32
/*
int f(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}

int main()
{
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);

    return 0;
}
*/