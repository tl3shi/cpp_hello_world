#include <iostream>
#include <string.h>
using namespace std;
const int MAXLEN=10;
class People
{
    char * name;
    int age;
public:
    People()
    {
    }
    People(char v_name[], int v_age)
    {
        name = new char[MAXLEN];
        strcpy(name, v_name);
        age = v_age;
    }
    ~People()
    {
        delete name;
        cout << "~People()" << endl;
    }
    void display()
    {
        cout << "name=" << name << ",age=" << age << endl;
    }
};
class Student:public People
{
    char * school;
public:
    Student(char v_name[], int v_age, char v_school[]):People(v_name, v_age)
    {
        school = new char[MAXLEN];
        strcpy(school, v_school);
    }
    ~Student()
    {
        delete school;
        cout << "~Student()" << endl;
    }
    virtual void display()
    {
        People::display();
        cout << "school = " << school << endl;
    }
};

int main()
{
    Student st1("tanglei", 22, "THU"),st2("tanglei", 22, "CSU");
    st1.display();
    st2.display();
    
    return 0;
}
