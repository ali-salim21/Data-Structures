package week3;
import java.util.ArrayList;

public class Bubble {
    int j, k;
    boolean exchangeMode;
    int temp;
    ArrayList<Integer> vector;

    public Bubble() {
    }

    public void bubble(ArrayList<Integer> list, int n) {
        k = 0; // count the length list
        exchangeMode = true;

        while (k < n-1 && exchangeMode) {
            exchangeMode = false;
            k++;
            for (j = 0; j < n-k; j++) {
                if (list.get(j) > list.get(j+1)) {
                    temp = list.get(j);
                    list.set(j, j+1);
                    list.set(j+1, temp);
                    exchangeMode = true;
                }
            }
        }
        vector = list;
    }

    public ArrayList<Integer> getList() {
        return vector;
    }
}