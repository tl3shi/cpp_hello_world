#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
//std::hex  std::dec  std::oct
string num2str(int x, ios_base & (*base)(ios_base&))
{
    stringstream ss;
    ss << base << x;
    return ss.str();
}
int str2num(string str, ios_base & (*base)(ios_base&))
{
    stringstream ss;
    ss << base << str;
    int x;
    ss >> x;
    return x;
}

string int2HexStr(int x)
{
    stringstream ss;
    ss << std::hex << x;
    return ss.str();
}

int hex2Int(string str)
{
    int x;
    stringstream ss;
    ss << std::hex << str;
    ss >> x;
    return  x;
}

int main()
{
    int x;
    cout <<  hex2Int("FE") << endl;
    cout <<  hex2Int("fe") << endl;
    cout <<  int2HexStr(255) << endl;
    cout <<  int2HexStr(254) << endl;
    cout << "----" << endl;
    cout << num2str(256, std::hex) << endl;
    cout << num2str(256, std::oct) << endl;
    cout << num2str(256, std::dec) << endl;
    cout << "----" << endl;
    cout << str2num("100", std::hex) << endl;
    cout << str2num("400", std::oct) << endl;
    cout << str2num("256", std::dec) << endl;
    return 0;
}
