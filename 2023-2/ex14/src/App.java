public class App {
    public static void main(String[] args) {
        String str1 = "Programming";
        String str2 = "Programming";
        String str3 = new String("Programming");
        System.out.println(str1 == str2); // true
        System.out.println(str1 == str3); // == 연산자: 참조 주소를 비교하는 연산자 false
        System.out.println(str1.equals(str3)); // equals(): 값을 비교하는 함수 true
        System.out.println(str2.equals(str3)); // true
    }
}
