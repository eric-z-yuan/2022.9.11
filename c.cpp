
void bucketSort(int* arr, int size, int max)//Õ∞≈≈–Ú
{
    int i, j;
    int buckets[max];
    memset(buckets, 0, max * sizeof(int));
    for (i = 0; i < size; i++) {
        buckets[arr[i]]++;
    }
    for (i = 0, j = 0; i < max; i++) {
        while ((buckets[i]--) > 0)
            arr[j++] = i;
    }
}
void Heapify(int* arr, int m, int size)//∂—≈≈–Ú
{
    int i, tmp;
    tmp = arr[m];
    for (i = 2 * m; i <= size; i *= 2) {
        if (i + 1 <= size && arr[i] < arr[i + 1]) {
            i++;
        }
        if (arr[i] < tmp) {
            break;
        }
        arr[m] = arr[i];
        m = i;
    }
    arr[m] = tmp;
}

void BulidHeap(int* arr, int size)
{
    int i;
    for (i = n / 2; i > 0; i--) {
        Heapify(arr, i, size);
    }
}

void swap(int* arr, int i, int j)
{
    int tmp;
    tmp = arr[i];
    arr[i] = arr[j];
    arr[j] = tmp;
}

void HeapSort(int* arr, int size)
{
    int i;
    BulidHeap(arr, size);
    for (i = size; i > 1; i--) {
        swap(arr, 1, i);
        Heapify(arr, 1, i - 1);
    }
}