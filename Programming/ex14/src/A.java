public class A {
    int a = 10;
    public A() {
        System.out.print("가");
    }
    public A(int x) {
        System.out.print("나");
    }
    public static void main(String[] a) {
        B b1 = new B(); // 가다
        A b2 = new B(1); // 가라
        System.out.print(b1.a+b2.a); // 20 + 10
    }
}
class B extends A {
    int a = 20;
    public B() {
        System.out.print("다");
    }
    public B(int x) {
        System.out.print("라");
    }
}

