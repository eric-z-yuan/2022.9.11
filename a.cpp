void SelectionSort(int* arr, int size)//—°‘Ò≈≈–Ú
{
    int i, j, k, tmp;
    for (i = 0; i < size - 1; i++) {
        k = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[k]) {
                k = j;
            }
        }
        tmp = arr[k];
        arr[k] = arr[i];
        arr[i] = tmp;
    }
}
#define MAXSIZE 100  

void Merge(int* SR, int* TR, int i, int middle, int rightend)//πÈ≤¢≈≈–Ú
{
    int j, k, l;
    for (k = i, j = middle + 1; i <= middle && j <= rightend; k++) {
        if (SR[i] < SR[j]) {
            TR[k] = SR[i++];
        }
        else {
            TR[k] = SR[j++];
        }
    }
    if (i <= middle) {
        for (l = 0; l <= middle - i; l++) {
            TR[k + l] = SR[i + l];
        }
    }
    if (j <= rightend) {
        for (l = 0; l <= rightend - j; l++) {
            TR[k + l] = SR[j + l];
        }
    }
}
