class P {
    public int calc(int n) {
        if (n <= 1) return n;
        return calc(n-1) + calc(n-2);
    }
}

class C extends P { // 오버라이딩: 상속받은 자식클래스에서 메소드 재정의
    public int calc(int n) {
         if (n <= 1) return n;
         return calc(n-1) + calc(n - 3); // calc(6) + calc(4)
    }
}

public class App {
    public static void main(String[] args) {
        P obj = new C();
        System.out.print(obj.calc(7));
    }
}
