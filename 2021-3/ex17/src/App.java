public class App {
    public static void main(String[] args){
        int w = 3, x = 4, y = 3, z = 5;
        if((w == 2 | w == y) & !(y>z) & (1 == x ^ y != z)) {
            w = x + y; // 7
            if(7 == x ^ y != w) System.out.println(w); // ^: XOR 연산 둘다 다르면 1 같으면 0
            // 7 == 4 ^ 3 != 7 -> 0 ^ 1 = 1
            else System.out.println(x);
        }
        else {
            w = y + z;
            if(7 == y ^ z != w) System.out.println(w);
            else System.out.println(z);
        }
    }
}
