import java.util.*;

public class SimpleSortWithComparator {

    public static void main(String args[]) {

        ArrayList<List<Integer>> tasks = new ArrayList<>();
        tasks.add(new ArrayList<Integer>(Arrays.asList(30,75)));
        tasks.add(new ArrayList<Integer>(Arrays.asList(50,70))); 
        tasks.add(new ArrayList<Integer>(Arrays.asList(72,10))); 
        tasks.add(new ArrayList<Integer>(Arrays.asList(0,1)));
        tasks.add(new ArrayList<Integer>(Arrays.asList(1,2)));
        tasks.add(new ArrayList<Integer>(Arrays.asList(1,3)));
        tasks.add(new ArrayList<Integer>(Arrays.asList(1,3)));
        tasks.add(new ArrayList<Integer>(Arrays.asList(2,3)));

        Collections.sort(tasks, (List<Integer> a, List<Integer> b) -> {
            return a.get(0).compareTo(b.get(0));
        });

        System.out.println("My tasks");
        for (List<Integer> task : tasks) {
            System.out.printf("%d <-> %d \n", task.get(0), task.get(1));
        }
    }
}