class SuperObject {
    public void draw() {
        System.out.println("A");
        draw();
    }
    public void paint() {
        System.out.print('B');
        draw(); // 자식클래스에서 오버라이딩을 통해 재정의했으므로 SubObject.draw()가 출력된다.
    }
}

class SubObject extends SuperObject { // 부모 클래스로부터 상속 자식클래스에도 똑같은 이름으로 메서드 재정의 -> 오버라이딩
    public void paint() { // 상속으로 인해 동일한 이름의 메소드가 여러 개인 경우 자식 클래스의 메소드만 사용됨.
        super.paint(); // super: 상속한 부모 클래스를 가리키는 예약어
        System.out.print('C');
        draw(); // this: 현재 실행중인 메소드가 속한 클래스를 가리키는 예약어
    }
    public void draw() { // public void draw(int x): 오버로딩 메소드의 이름은 동일하지만 인수를 받는 자료형과 개수가 다르면 서로 다른 메소드 이름은 같지만 자료형, 개수를 다르게
        System.out.print('D');
    }
}
public class App {
    public static void main(String[] args) {
        SuperObject a = new SubObject();
        a.paint(); // BDCD
        a.draw(); // D
        // BDCDD
    }
}
