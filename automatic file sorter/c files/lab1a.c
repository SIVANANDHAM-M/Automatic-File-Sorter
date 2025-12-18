 #include <stdio.h>

void sortArray(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int heights[100], expected[100], n, i, count = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter the heights:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &heights[i]);
        expected[i] = heights[i];
    }

    sortArray(expected, n);

    printf("Original heights: ");
    for (i = 0; i < n; i++) {
        printf("%d ", heights[i]);
    }

    printf("\nExpected order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", expected[i]);
    }

    for (i = 0; i < n; i++) {
        if (heights[i] != expected[i]) {
            count++;
        }
    }

    printf("\nOutput: %d\n", count);

    return 0;
}
