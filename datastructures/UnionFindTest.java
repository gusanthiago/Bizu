
import java.util.HashMap;
import java.util.Map;
import java.util.HashSet;


class UnionFindTest {

    public static int[] nodes = new int[1000];
    public static int[] weight = new int[1000];

    static int find(int search) {
        if(nodes[search] == search || nodes[search] == 0) {
            return search;
        }
        return nodes[search] = find(nodes[search]);
    }

    static void join(int x, int y) {
        nodes[find(x)] = find(y);
    }

    static void joinOptimized(int x, int y) {
        x = find(x);
        y = find(y);

        // attach on smaller to minimize tree
        if (weight[x] > weight[y]) {
            nodes[y] = x;
        } else if (weight[y] > weight[x]) {
            nodes[x] = y;
        } else {
            nodes[y] = x;
            weight[x]++;
        }

    }

    public static void main(String args[]) {

        int nMax = 5;

        HashMap<Integer, Integer> fusions = new HashMap<Integer, Integer>();
    
        fusions.put(2, 3);
        fusions.put(1, 2);
        fusions.put(3, 5);
        fusions.put(4, 4);

        fusions.forEach((k, v) -> {
            System.out.printf("Join -> %d - %d \n", k, v);
            joinOptimized((int)k, (int)v);
        });

        HashSet<Integer> groupsRoot = new HashSet<Integer>();

        for (int i=1; i <= nMax; i++) {
            groupsRoot.add(find(i));
        }

        System.out.println("Roots of sets "+ groupsRoot); // [4, 5]
        System.out.println("Number of sets "+ groupsRoot.size()); // 2
    }
}

