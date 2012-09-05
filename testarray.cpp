#include <iostream>
using namespace std;
float avg(int [][4], int, int );
float avg(int [],int );

int main(void)
{
    int score[][4] = {92, 65, 68, 23, \
                      34, 54, 69, 34, \
                      53, 23, 43,45};
    int *p = &score[0][0];
    cout<<"avg: " << avg(score, 3, 4)<<endl;
    cout<<"avg2: " << avg(p, 3*4)<<endl;
    cout<<"avg3: " << avg((int *)score, 3*4)<<endl;
    //cout<<"avg2: " << avg(&score[0][0], 3*4)<<endl;
    return 0;
}
float avg(int a[][4], int n, int m)
{
    float s = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            s += a[i][j];
    return s / (n * m);
}

float avg(int a[], int n)
{
    float s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    return s/n;
}
