public class test_8
{
    int whilefun(int i, int j, int inc){
        return whilefun(i+inc,j,inc);
    }

    public static void main(int args) 
    {
        int i=0;
        int j=10;
        int inc=1;
        whilefun(i,j,inc);
    }
}