// testcase for recursion

public class test_4 
{
    public static int factorial(int k) {
      return k==0?1:factorial(k-1);
    }
    public static int main() 
    {
      int x=10;
      return factorial(x);
    }
}