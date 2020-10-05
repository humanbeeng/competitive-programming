#include <iostream>

using namespace std;

void evenwatermelon(int n)
{

    if (n > 2)
    {
        if (n % 2 == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else{
        cout << "NO";
    }
}

int main()
{
    int n;
    cin >> n;
    evenwatermelon(n);
    return 0;
}