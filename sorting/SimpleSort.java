import java.util.*;

public class SimpleSort {

    public static void main(String args[]) {
        int[] numbers = new int[]{22,1, 3, 3};
        Arrays.sort(numbers);
        // Arrays.sort(numbers, Collections.reverseOrder());

        for (Integer currentNumber : numbers) {
            System.out.printf(" %d | ", currentNumber);
        }
        System.out.println();

        List<Integer> numberList = new ArrayList<>(Arrays.asList(2, 3, -1, 22, 23, 111, 25));

        Collections.sort(numberList);

        for (Integer currentNumber : numberList) {
            System.out.printf(" %d | ", currentNumber);
        }
        System.out.println();

    }
}