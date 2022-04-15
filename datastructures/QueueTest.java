
import java.util.Queue;
import java.util.LinkedList;

public class QueueTest {

    public static void main(String[] args) {
        Queue<String> queue = new LinkedList<String>();
        queue.add("4");
        queue.add("3");
        queue.add("7");
        
        while(!queue.isEmpty()) {
            // or .poll()
            System.out.printf("Process element %s \n", queue.remove());
        }
        System.out.println();
    }
}