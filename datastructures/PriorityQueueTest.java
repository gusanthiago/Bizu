
import java.util.PriorityQueue;

public class PriorityQueueTest {

    public static void main(String[] args) {
        PriorityQueue<String> queue = new PriorityQueue<String>();
        queue.add("z");
        queue.add("y");
        queue.add("a");
        // print a y z

        while(!queue.isEmpty()) {
            // or .poll()
            System.out.printf("Process element %s \n", queue.remove());
        }

    }
}