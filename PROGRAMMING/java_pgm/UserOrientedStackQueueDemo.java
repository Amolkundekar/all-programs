import java.util.LinkedList; 
 
// Define the Stack interface 
interface Stack<T> { 
    void push(T item); 
    T pop(); 
    T peek(); 
    boolean isEmpty(); 
} 

// Define the Queue interface 
interface Queue<T> { 
    void enqueue(T item); 
    T dequeue(); 
    T peek(); 
    boolean isEmpty(); 
} 
 
// Implement Stack and Queue interfaces in a single class 
class MyDataStructure<T> implements Stack<T>, Queue<T> { 
    private LinkedList<T> list = new LinkedList<>(); 
 
    @Override 
    public void push(T item) { 
        list.push(item); 
    } 
 
    @Override 
    public T pop() { 
        if (!isEmpty()) { 
            return list.pop(); 
        } 
        return null; 
    } 
 
    @Override 
    public T peek() { 
        if (!isEmpty()) { 
            return list.getFirst(); 
        } 
        return null; 
    } 
 
    @Override 
    public boolean isEmpty() { 
        return list.isEmpty(); 
    } 
 
    @Override 
    public void enqueue(T item) { 
        list.addLast(item); 
    } 
 
    @Override 
    public T dequeue() { 
        if (!isEmpty()) { 
            return list.removeFirst(); 
        } 
        return null; 
    } 
} 
 
 class UserOrientedStackQueueDemo{ 
    public static void main(String[] args) { 
        MyDataStructure<String> dataStructure = new MyDataStructure<>(); 
 
        System.out.println("Welcome to the User-Oriented Stack and Queue Demo!"); 
 
        while (true) { 
            System.out.println("\nSelect an option:"); 
            System.out.println("1. Push (Stack)"); 
            System.out.println("2. Pop (Stack)"); 
            System.out.println("3. Peek (Stack)"); 
            System.out.println("4. Enqueue (Queue)"); 
            System.out.println("5. Dequeue (Queue)"); 
            System.out.println("6. Peek (Queue)"); 
            System.out.println("7. Quit"); 
            System.out.print("Enter your choice: "); 
 
            java.util.Scanner scanner = new java.util.Scanner(System.in); 
            int choice = scanner.nextInt(); 
 
            switch (choice) { 
                case 1: 
                    System.out.print("Enter an item to push onto the stack: "); 
                    String item = scanner.next(); 
                    dataStructure.push(item); 
                    break; 
                case 2: 
                    String poppedItem = dataStructure.pop(); 
                    if (poppedItem != null) { 
                        System.out.println("Popped from stack: " + 
poppedItem); 
                    } else { 
                        System.out.println("Stack is empty."); 
                    } 
                    break; 
                case 3: 
                    String peekedItem = dataStructure.peek(); 
                    if (peekedItem != null) { 
                        System.out.println("Top of the stack: " + peekedItem); 
                    } else { 
                        System.out.println("Stack is empty."); 
                    } 
                    break; 
                case 4: 
                    System.out.print("Enter an item to enqueue in the queue: "); 
                    String queueItem = scanner.next(); 
                    dataStructure.enqueue(queueItem); 
                    break; 
                case 5: 
                    String dequeuedItem = dataStructure.dequeue(); 
                    if (dequeuedItem != null) { 
                        System.out.println("Dequeued from queue: " + 
dequeuedItem); 
                    } else { 
                        System.out.println("Queue is empty."); 
                    } 
                    break; 
                case 6: 
                    String frontItem = dataStructure.peek(); 
                    if (frontItem != null) { 
                        System.out.println("Front of the queue: " + 
frontItem); 
                    } else { 
                        System.out.println("Queue is empty."); 
                    } 
                    break; 
                case 7: 
                    System.out.println("Thank you for using the User-Oriented Stack and Queue Demo."); 
                    System.exit(0); 
                default: 
                    System.out.println("Invalid choice. Please enter a valid option."); 
            } 
        } 
    } 
} 
