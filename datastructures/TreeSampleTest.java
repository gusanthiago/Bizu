
public class TreeSampleTest {

    //      2
    //    1    6
    //  0        7
    //             8
    //               10
    public static void main(String args[]) {
        Node root = new Node(2);

        root.insertElement(1);
        root.insertElement(0);
        root.insertElement(6);
        root.insertElement(7);
        root.insertElement(8);
        root.insertElement(10);

        System.out.printf("Test root get height %d \n", root.getHeight()); // 5
        System.out.printf("Test root->left get height %d \n", root.left.getHeight()); // 4
        System.out.printf("Test root->right get height %d \n", root.right.getHeight()); // 4
    }

    static class Node {

        int value;
        Node left;
        Node right;

        public Node(int value) {
            this.value = value;
        }

        public  void insertElement(int value) {
			if (value >= this.value) {
				if (right != null) {
					right.insertElement(value);
				} else {
					right = new Node(value);
				}
			} else {
				if (left != null) {
					left.insertElement(value);
				} else {
					left = new Node(value);
				}
			}
		}

        public int getHeight() {
            if (this == null) {
                return 0;
            }
            return Math.max(
                this.right != null ? this.right.getHeight() : 0,
                this.left != null ? this.left.getHeight() : 0
            ) + 1;
        }
    }
}