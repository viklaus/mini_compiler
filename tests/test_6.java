class gfg {
    // Gcd of u and v using recursive method
    static int GCD(int u, int v)
    {
        int x = u==0?v:GCD(v % u, u);
        return x;
    }
 
    // The Driver method
    public static int main()
    {
        int u = 25, v = 15;
        return GCD(u, v);
    }
}