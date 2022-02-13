package week3;
import java.util.ArrayList;

public class Test {
    public static void main(String[] args) {
        ArrayList<Integer> numbers = new ArrayList<Integer>();
        //for (int i = 0; i < 10; i++) {}
        numbers.add(10);
        numbers.add(40);
        numbers.add(15);
        numbers.add(8);
        numbers.add(9);
        numbers.add(3);
        numbers.add(25);
        numbers.add(1);
        System.out.println(numbers);

        Bubble myList = new Bubble();
        myList.bubble(numbers, numbers.size());
        System.out.println(myList.vector);
    }
}
