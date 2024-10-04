public class App {
    public static void main(String[] args) throws Exception {
        int i = 3;
        int sum = 0;
        switch(i) {
            case 0: sum++;
            case 1: sum += 3;
            case 2: sum -= 10;
            case 3: sum = 0;
            case 4: sum += 3;
            case 5: sum -= 10;
            default: sum--;
        }
        System.out.println(sum);
    }
}
