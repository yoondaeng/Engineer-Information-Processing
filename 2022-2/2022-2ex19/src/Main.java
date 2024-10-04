class Cal {
    int a;
    Cal (int a) {
        this.a = a;
    }
    int func() {
        int b = 1;
        for(int i = 1; i<a; i++) b = a * i + b; // 6 16 31 51 
        return a + b; // 5 + 51 = 56
    }
}

public class Main {
    public static void main(String[] args) {
        Cal obj = new Cal(3);
        obj.a = 5;
        int b = obj.func(); // 56
        System.out.println(obj.a + b);
    }
}
