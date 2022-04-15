
import java.util.ArrayList;
import java.util.Iterator;

public class IteratorTest {

    public static void main(String[] args) {
        Iterator<String> it = getArrayList().iterator();

        while(it.hasNext()) {
            System.out.println(it.next());
        }
    }

    private static ArrayList<String> getArrayList() {
        ArrayList<String> arrayListTest = new ArrayList<String>();

        arrayListTest.add("var");
        arrayListTest.add("test");
        arrayListTest.add("abc");

        return arrayListTest;
    } 


}