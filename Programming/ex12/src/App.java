class A {
    int i;
    public A(int i) {
        System.out.println("A:"+i); // A:14
        this.i = i;
        get(); // 오버라이딩 D:0
    }
    int get() {
        System.out.println("B:"+i);
        return i;
    }
}
class B extends A {
    int i;
    public B(int i) {
        super(2*i); // super(14)
        this.i = i; // 7
        System.out.println("C:"+i); // C:7
    }
    int get() {
        System.out.println("D:"+i);
        return i;
    }
}
public class App {
    public static void main(String[] args) throws Exception {
        A ab = new B(7);
        // A:14
        // D:0
        // C:7
    }
}
