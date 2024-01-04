class SelectionSorting {
    public static void main(String[] args) {
        int[] arr = { 5, 1, 4, 2, 8 };
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            int min = i; // index of min element
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[min])
                    min = j;
            }
            // swap
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
        for (int i : arr)
            System.out.print(i + " ");
    }

}
