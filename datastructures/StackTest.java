
import java.util.Stack;

public class StackTest {

    public static void main(String[] args) {
        Stack<String> stack = new Stack<String>();
        stack.push("4");
        stack.push("+");
        stack.push("7");
        
        // .search is distance of top
        System.out.printf("Searching stack element [+] in index %d \n", stack.search("4"));

        while(!stack.empty()) {
            // System.out.print(stack.peek());
            System.out.print(stack.pop());
        }
        System.out.println();
    }
}