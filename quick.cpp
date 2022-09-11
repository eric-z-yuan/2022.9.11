
void QuickSort(int* arr, int maxlen, int begin, int end)//¿ìËÙÅÅĞò
{
    int i, j;
    if (begin < end) {
        i = begin + 1;
        j = end;
        while (i < j) {
            if (arr[i] > arr[begin]) {
                swap(&arr[i], &arr[j]);
                j--;
            }
            else {
                i++;
            }
        }
        if (arr[i] >= arr[begin]) {
            i--;
        }
        swap(&arr[begin], &arr[i]);
        QuickSort(arr, maxlen, begin, i);
        QuickSort(arr, maxlen, j, end);
    }
}

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}