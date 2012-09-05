#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class People
{
    private:
        char * name;
        int id;
    public:
        void display()
        {
            cout<<"name:"<<name<<",ID:"<<id<<endl;
            cout<<"(int)name:"<<(int)name<<endl;
            cout<<"(int)&name:"<<(int)&name<<endl;
        }
        
        People * deepClone()
        {
            People *newP = new People();
            newP->id = this->id;
            newP->name = new char[10];
            strcpy(newP->name, this->name);
            //cout<<this->name;
            //cout<<"new:"<<newP->name;
            //*(newP->name) = *(this->name); no
            return newP;
        }
        
        People(){}
        People(People &p)
        {
            id = p.id;
            name = p.name;
        }
        People(int tid, char * tname)
        {
            id = tid;
            name = new char[10];
            strcpy(name,tname);
        }
        ~People()
        {
            delete name;
        }
};
int main()
{
    People p1(1, "tanglei"), p2(p1), *p;
    p1.display();
    p2.display();
    p = p1.deepClone();
    p->display();
    return 0;
}
