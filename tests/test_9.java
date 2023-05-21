
public class test_9 {
 
        int call(int x){
                call(x-1);
        }

        int main(int k){
                call(k);
        }
}