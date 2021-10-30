#include <bits/stdc++.h>
using namespace std;

//PRINT ITEMS IN 0/1 KNAPSACK
void printItems(vector<vector<int>> dp, int i, int sum, int w, int wt[], int val[])
{
    //i =n
    //sum = dp[n][w]

    while (i && sum)
    {
        if (sum == dp[i - 1][w])
            continue;
        else
        {
            cout << "Item added: " << i - 1 << "\n";

            sum = sum - val[i - 1];
            w = w - wt[i - 1];
        }
    }
}

bool subsetSum(int a[], int sum, int n)
{
    bool t[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0 && j != 0)
                t[i][j] = false;
            else if (i == 0 || j == 0)
                t[i][j] = true;
            else if (a[i - 1] <= j)
                t[i][j] = t[i - 1][j - a[i - 1]] || t[i - 1][j];
            else
                t[i][j] = t[i - 1][j];
        }
    return t[n][sum];
}

int countSubset(int a[], int sum, int n)
{
    int t[n + 1][sum + 1];

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= sum; j++)
        {
            if (i == 0 && j != 0)
                t[i][j] = 0;
            else if (i == 0 || j == 0)
                t[i][j] = 1;
            else if (a[i - 1] <= j)
                t[i][j] = t[i - 1][j - a[i - 1]] + t[i - 1][j];
            else
                t[i][j] = t[i - 1][j];
        }
    return t[n][sum];
}

int minDiff(int a[], int n)
{
    int sum = accumulate(a, a + n, 0);

    //same as subset sum
    bool t[n + 1][sum / 2 + 1];
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= sum / 2; j++)
        {
            if (i == 0 && j != 0)
                t[i][j] = false;
            else if (i == 0 || j == 0)
                t[i][j] = true;
            else if (a[i - 1] <= j)
                t[i][j] = t[i - 1][j - a[i - 1]] || t[i - 1][j];
            else
                t[i][j] = t[i - 1][j];
        }
    int s1;
    // for (int j = 1; j <= sum / 2; j++)
    //     if (t[n][j])
    //         s1 = j;
    for (int j = sum / 2; j > 0; j--)
        if (t[n][j])
        {
            s1 = j;
            break;
        }

    return sum - 2 * s1;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int sum;
    cin >> sum;

    cout << "\nSUbset Sum : ";
    if (subsetSum(a, sum, n))
        {cout << "YES";
            cout << "\n No. of subsets: " << countSubset(a, sum, n);
        }
    else
        cout << "NO";

    cout << "\nMinimum subset sum difference : " << minDiff(a, n);
}