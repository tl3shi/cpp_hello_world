//#include <priority_queue>
#include <queue>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void gen(int *data, int n)
{
    for(int i = 0; i < n; i++)
        data[i] = rand() % 100;
}
void print(int *data, int n)
{
    for(int i = 0; i < n; i++)
        cout << data[i] << " ";
    cout << endl;
}
void myheapsort(int *data, int n)
{
    //// wrong, data is 4/8 byte priority_queue<int> v(data, data + sizeof(data)/sizeof(int));
    //priority_queue<int> v;//default, the top is biggest,
    priority_queue<int, vector<int>, greater<int>> v; // increaseing seq, the top is smallest
    for(int i = 0; i < n; i++)
        v.push(data[i]);
    for(int i = 0; i < n; i++)
    {
        data[i] = v.top(); v.pop();
    }
}

int getMax(int * data , int n)
{
    vector<vector<int> > dp(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++)
        dp[i][i] = data[i];
    for(int j = 0; j < n; j++)
        for(int i = j-1; i >= 0; i--)
            for(int k = 0; k < j - i; k++)
            {
                int add = dp[i][i+k] + dp[i+k+1][j];
                int mul = dp[i][i+k] * dp[i+k+1][j];
                dp[i][j] = std::max(dp[i][j], std::max(add, mul));
            }
    return dp[0][n-1];
}
int main()
{
    {
        int data1 [] = {2,1,1,2};
        int n = sizeof(data1) / sizeof(int);
        int r = getMax(data1, n);
        cout << r << endl;
    }
    const int n = 10;
    int data[n];
    gen(data, n);
    print(data, n);
    myheapsort(data, n);
    print(data, n);
}
