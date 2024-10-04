import java.util.HashSet;
import java.util.Set;
import java.util.Scanner; // 키보드로 입력받을 수 있게하는 클래스

public class App {
    public static void main(String[] args) throws Exception {
        int a = 12, b = 5, sum = 2;
        b *= a /= 4; // 12*5 / 4 = 15
        sum += ++a * b-- / 4; // (13 * 15 / 4) + 2
        // b--는 후치 증가 연산자라 라인이 끝난 뒤에 반영되기에 여기서는 반영되지 않음.
        System.out.printf("%d", sum); // 17

        // Scanner scan = new Scanner(System.in);
        // int a = scan.nextInt();
        // int b = scan.nextInt();
        // System.out.printf("%d", a+b);

    //     Set a = new HashSet(); 
    //     // 해시셋은 중복된 원소를 허용하지 않는 성질은 가진 클래스이며, 순서에 구애받지 않습니다.
    //     // 5가 삽입되었을때 중복이 되므로 추가되지 않는것이 포인트입니다.

    //     a.add(7);
    //     System.out.println(a); // [7]

    //     a.add(5);
    //     System.out.println(a); // [5, 7]
        
    //     a.add(5);
    //     System.out.println(a); // [5, 7]
        
    //     a.remove(5);
    //     System.out.println(a); // [7]
        
    //     System.out.println(a.size());  // 1
    }
}
