import java.util.HashMap;
class Test
{
    public static void main(String[] args)
    {
        HashMap<Double, Integer> map = new HashMap<Double, Integer>();
        map.put(+0.0, 1);
        map.put(-0.0, 1);
        System.out.println(map.size());
    }
}
