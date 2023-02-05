#include <iostream>
using namespace std;
template <class T1,class T2 >
T1 add(T1 a, T2 b)
{
    T1 result = a + b;
    return result;
}
int main()
{
    // int i = 2;
    // int j = 3;
    // float m = 2.3;
    // float n = 1.2;
    cout << " Addition pf i & j = " << add(2.4,3);
    // cout << "\n Addition pf m & n = " << add(m, n);
}