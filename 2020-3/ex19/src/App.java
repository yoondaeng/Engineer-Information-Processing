abstract class Vehicle { // abstract: 단독으로 구현될 수 없음, 상속으로만 생성 가능
    private String name;
    abstract public String getName(String val);

    public String getName() {
        return "Vehicle name:" + name;
    }
    public void setName(String val) {
        name = val;
    }
}

class Car extends Vehicle {
    public Car(String val) {
        setName(val);
    }
    public String getName(String val) {
        return "Car name : " + val;
    }
    public String getName(byte val[]) {
        return "Car name : " + val;
    }
}

public class App {
    public static void main(String[] args) {
        Vehicle obj = new Car("Spark");
        System.out.print(obj.getName()); // Vehicle name:Spark
    }
}
