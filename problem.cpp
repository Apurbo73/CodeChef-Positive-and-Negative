#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num == 0)
    {
        cout << "Zero" << endl;
    }
    if (num < 0)
    {
        cout << "Negative" << endl;
    }
    if (num > 0)
    {
        cout << "Positive" << endl;
    }
    return 0;
}