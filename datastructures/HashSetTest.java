
import java.util.HashSet;
import java.util.Random;

public class HashSetTest {

    public static void main(String[] args) {
        // Complexity of operatinos equals HashTable which implements HashMap
        HashSet<Integer> set = new HashSet<Integer>();
        Random random = new Random();

        for (int i=0; i < 10; i++) {
            int numberRandom = random.nextInt(7);

            // add return true if can insert otherwise return false
            System.out.printf("Inserting number [%d] on set resulting -> %b \n", numberRandom, set.add(numberRandom));
        }

        System.out.printf("Get [%d] on Set -> %b \n", 2, set.contains(2));
       

    }

}