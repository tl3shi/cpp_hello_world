struct Integer
{
    int a;
    Integer(int i):a(i){};
    Integer():a(0){};
    /*Integer& operator = (const Integer & another)
    {
        a = another.a;
        return *this;
    }*/
};
int main()
{
    Integer i(5);
    Integer  x,y,z;
    x = y = z = i;

    return 0;
}
