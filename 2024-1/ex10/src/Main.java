class Parent {
    int x, y;

    Parent(int x, int y) { // 4. 1번
        this.x=x; // 4
        this.y=y; // 3
    }

    int getT() { // 6. 2번
        return x*y; 
    }
}

class Child extends Parent {
    int x;
    Child (int x) { // 3. 3번
        super(x+1, x);
        this.x=x;
    }

    int getT(int n) {
        return super.getT()+n;
    }
}

class Main {
    public static void main(String[] args) { // 1. 5번
        Parent parent = new Child(3); // 2.6번
        System.out.println(parent.getT()); // 5. 7번 12
    }
}
