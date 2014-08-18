#include <iostream>
#include <fstream>
#include <unordered_set>
#include <vector>
#include <set>
using namespace std;
//#define SET
struct PointA
{
    int x;
    int y;
#ifdef SET
    bool operator < (const PointA &p) const
    {
        return (x < p.x ||  (x == p.x && y < p.y));
    }
#else
    bool operator == (const PointA &p) const
    {
        return (x == p.x && y == p.y);
    }
#endif

    PointA(int xx, int yy):x(xx), y(yy)
    {}
};

struct PointAHash
{
    size_t operator()(const PointA &p) const
    {
        //return p.x * 3 + p.y;
        hash<int> xx;
        return xx(p.x * 3 + p.y);
    }
};

int main()
{
#ifdef SET
    {
        cout << "set test" << endl;
        set<PointA> points; //only need bool operator < (const PointA &p) const
        PointA p0(1,1);
        PointA p1(1,2);
        PointA p2(1,1);
        points.insert(p0);
        points.insert(p1);
        points.insert(p2);
        cout << points.size() << endl;
    }
#else
    {
        cout << "hashset/unordered_set test" << endl;
        unordered_set<PointA, PointAHash> points;//need operator == + hashfunc
        PointA p0(1,1);
        PointA p1(1,2);
        PointA p2(1,1);
        points.insert(p0);
        points.insert(p1);
        points.insert(p2);
        cout << points.size() << endl;
    }
#endif
}

