package week4;
import java.util.ArrayList;

public class Sequential {
    private int k = 0;
    private boolean found = false;
    int object;

    public Sequential() {
    }

    /**
     * This is a mutatot method to find the number in list of numbers
     * @param list takes the list of numbers
     * @param target finds the request number
     */
    public void found(ArrayList<Integer> list, int target) {
        int n = list.size();
        while(k < n && !found) {
            if( list.get(k) == target) {
                found = true;
            } else {
                ++k;
            }
        }
        if (found) {
            object = list.get(k);
        }
    }
}
