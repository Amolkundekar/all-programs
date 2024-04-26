import java.util.ArrayList;
import java.util.List;

public class CollectionEx {

    public static void main(String[] args) {
        // Creating a list of Strings
        List<String> stringList = new ArrayList<>();

        // Adding elements to the list
        stringList.add("Java");
        stringList.add("Python");
        stringList.add("C++");

        // Displaying elements using enhanced for loop
        System.out.println("Elements in the list:");
        for (String language : stringList) {
            System.out.println(language);
        }
    }
}
