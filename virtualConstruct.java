class Base
{
    public Base()
    {
        log();
    }
    void log()
    {
        System.out.println("Base log");
        System.out.println(this.getClass().getName());
    }
}
class Derived extends Base
{
    @Override
    void log()
    {
        System.out.println("Derived log");
        System.out.println(this.getClass().getName());
    }
}

class Test
{
    public static void main(String[] args)
    {
        Derived d = new Derived();
    }
}


