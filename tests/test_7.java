// testcase for while loop

class gfg {
    // Gcd of u and v using recursive method
    int GCD(int u, int v)
    {
        int x = u==0?v:GCD(v % u, u);
        return x;
    }
    
    int LCM(int u, int v){
        int x=u*v;
        return x/GCD(u,v);
    }

    // The Driver method
    public int main()
    {
        int u = 25, v = 15;
        return LCM(u, v);
    }
}