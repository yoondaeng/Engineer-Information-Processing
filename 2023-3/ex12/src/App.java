class Person {
    private String name;
    public Person(String val) {
        name = val;
    }
    // static로 선언된 메소드는 메모리에 클래스를 위한 공간이 할당되지 않았다는 것을 의미
    // 객체 변수 선언을 하지 않은 경우 private 변수는 사용 불가능
    public static String get() {
        return name; // 오류 발생: name 객체 변수로 선언하지 않으면 사용 불가
    }
    public void print() {
        System.out.println(name);
    }
}
public class App {
    public static void main(String[] args) {
        Person obj = new Person("Kim");
        obj.print();
    }
}
