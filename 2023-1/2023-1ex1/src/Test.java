class Static {
    public int a = 20;
    static int b = 0; 
    // 메인 메소드가 시작하기 전에 메모리(Static 영역) 기억장소에 저장
}
public class Test {
    public static void main(String[] args) throws Exception {
        int a = 10;
        Static.b = a;
        Static st = new Static();
        System.out.println(Static.b++); // 10 ln이면 줄바꿈!
        System.out.println(st.b); // 11
        System.out.println(a); // 10
        System.out.print(st.a); // 20
    }
}
