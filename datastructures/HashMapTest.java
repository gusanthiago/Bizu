
import java.util.HashMap;
import java.util.Map;

public class HashMapTest {

    public static void main(String[] args) {
        HashMap<String, Integer> mapTest = new HashMap<String, Integer>();

        // put 
        // average case O(1)
        // worst case O(n) maybe we had collisions 
        mapTest.put("test", 2); 
        mapTest.put("abacate", 3);

        // return 2 because is the previous value on HashMap
        System.out.printf("The last value associated with test is ->  %s \n", mapTest.put("test", 5).toString());
        
        // return null if not exist
        System.out.printf("The last value associated with ok is -> %s \n", mapTest.put("ok", 5));


        final String element = "test";

        // for (Map.Entry<String, Integer> entry : mapTest.entrySet()) {
        //     System.out.println("Key : " + entry.getKey() + " Value : " + entry.getValue());
        // }
        // Lambda >= Java 8 
        mapTest.forEach((k, v) -> System.out.println("Key : " + k + " Value : " + v));


        // average case O(1)
        // worst case O(n)
        System.out.printf("Get [" + element + "] on map ->  %s \n", mapTest.get(element).toString());
        System.out.printf("ContainsKey [" + element + "] on map ->  %b \n", mapTest.containsKey(element));

    }

}