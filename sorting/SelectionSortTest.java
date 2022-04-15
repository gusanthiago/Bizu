



// seletion sort
// -> 
// each all i..n -> i
//   each all i...n -> j
//     if (all[i] > all[j])
//        swap(all[i], all[j]);
class SelectionSortTest {

    public static void main(String args[]) {

        int []array = {231, 2, 1, 99, 2, 33, 45};
        System.out.println("Array before");
        printArray(array);

        array = selectionSort(array);

        System.out.println("Array after");
        printArray(array);
         

    }

    public static void printArray(int[] array) {
        for (int i=0; i < array.length; i++) 
            System.out.printf("-> %d ", array[i]);
        System.out.println();
    }


    public static int[] selectionSort(int[] array) {
        
        int sizeN = array.length;
        for (int i=0; i < sizeN; i++) {
            for (int j=i+1; j < sizeN; j++) {
                if (array[i] > array[j]) {
                    int aux = array[i];
                    array[i] = array[j];
                    array[j] = aux;
                }
            }
        }
        
        return array;
    }
}