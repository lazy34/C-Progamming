#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    char arr[n + 1];
    cin >> arr;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            count = 1;
            break;
        }
    }

    if (count == 1)
    {
        cout << "The word is not a palindrome" << endl;
    }
    else
    {
        cout << "The word is a palindrome" << endl;
    }

    return 0;
}