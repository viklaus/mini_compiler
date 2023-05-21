// testcase for for loop

public class test_5
{
    int add(int k, int d) {
      return k+d;
    }

    int dif(int k, int d) {
      return k-d;
    }

    int main() 
    {
        int x1=5, y1=6;
        int x2=8, y2=9;
        int y=dif(y2,y1);
        int x=dif(x2,x1);
        return add(x,y);
    }
}
