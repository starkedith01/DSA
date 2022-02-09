#include <iostream>

using namespace std;

int max(int prev, int cur)
{
    if (prev <= cur)
        return cur;
    else
        return prev;
}
int freq(int arr[], int n)
{
    int res = 0;
    int curr = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            curr = 0;
        else
        {
            curr++;
            res = max(res, curr);
        }
    }

    return res;
}
int main()
{
    int arr[] = {0, 1, 1, 1, 1, 0};
    int result = freq(arr, 6);
    cout << result;

    return 0;
}
