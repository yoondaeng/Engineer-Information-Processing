public class Test {
    public static void main(String[] args) throws Exception {
        // Test test = new Test();
        // System.out.print(test.check(1));
        System.out.print(Test.check(1));
    }
    // static: 클래스 내에서 객체 생성 없이 사용할 수 있는 메소드
    static String check (int num) {
        return (num >= 0) ? "positive" : "negative";
    }
}
