import java.util.ArrayList;
import java.util.List;

 class Generics {

    public static void main(String[] args) {
        // Creating a generic class instance with Integer type
        MyGenericList<Integer> intList = new MyGenericList<>();
        intList.add(1);
        intList.add(2);
        intList.add(3);

        System.out.println("Integer List:");
        intList.display();

        // Creating a generic class instance with String type
        MyGenericList<String> stringList = new MyGenericList<>();
        stringList.add("Java");
        stringList.add("Python");
        stringList.add("C++");

        System.out.println("\nString List:");
        stringList.display();
    }
}

class MyGenericList<T> {
    private List<T> elements;

    public MyGenericList() {
        this.elements = new ArrayList<>();
    }

    public void add(T element) {
        elements.add(element);
    }

    public void remove(T element) {
        elements.remove(element);
    }

    public void display() {
        for (T element : elements) {
            System.out.println(element);
        }
    }
}
