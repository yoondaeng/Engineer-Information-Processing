class Connection {
    private static Connection _inst = null;
    private int count = 0;

    static public Connection get() {
        if(_inst == null) {
            _inst = new Connection();
            return _inst;
        }
        return _inst;
    }

    public void count() {
        count++;
    }

    public int getCount() {
        return count;
    }
}
public class App {
    public static void main(String[] args) {

        Connection conn1 = Connection.get();
        conn1.count(); // 1

        Connection conn2 = Connection.get();
        conn2.count(); // 2

        Connection conn3 = Connection.get();
        conn3.count(); // 3

        conn1.count(); // 4
        System.out.println(conn1.getCount()); // 4
    }
}
