// _____________________ Sum of n natural no ______________________

// #include <iostream>
// using namespace std;

// int sum(int n)
// {
//     int ans = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         ans += i;
//     }
//     return ans;
// }
// int32_t main()
// {
//     int n;
//     cin >> n;

//     cout << sum(n) << endl;
// }

// _________________ Check Pythagorean Triplet ____________________

#include <iostream>
using namespace std;
bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if (a * a == b * b + c * c)
        return true;
    else
        return false;
}
int32_t main()
{
    int x, y, z;
    cin >> x >> y >> z;

    if (check(x, y, z))
    {
        cout << "Pythagorean Triplet";
    }
    else
    {
        cout << "Not a Pythagorean Triplet";
    }

    return 0;
}

