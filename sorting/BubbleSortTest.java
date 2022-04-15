

// bubble sort
// swapFlag = true
// while swapFlag
// swapFlag = false
// each i..n-1
// 		if (all[i] > all[i+1])
//      swap(all[i], all[i+1])
//      swapFlag = true

class BubbleSortTest {

    public static void main(String args[]) {

        int []array = {231, 2, 1, 99, 2, 33, 45};
        System.out.println("Array before");
        printArray(array);

        array = bubbleSort(array);

        System.out.println("Array after");
        printArray(array);
         

    }

    public static void printArray(int[] array) {
        for (int i=0; i < array.length; i++) 
            System.out.printf("-> %d ", array[i]);
        System.out.println();
    }

    public static int[] bubbleSort(int[] array) {
        int sizeN = array.length;
        boolean swapFlag = true;
        
        while (swapFlag) {
            swapFlag = false;
            for (int i=0; i < sizeN-1; i++) {
                if (array[i] > array[i+1]) {
                    int temp = array[i];
                    array[i] = array[i+1];
                    array[i+1] = temp;
                    swapFlag = true;
                }
            }
        }
        
        
        return array;
  }
}