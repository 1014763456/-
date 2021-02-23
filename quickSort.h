// 从小到大排序
void quickSort(int *A, int left, int right){
    if(left >= right)
        return;
    int i=left,j=right;
    int key = A[left];
    while(i<j){
        while(i<j && key<A[j])
            j--;
        A[i] = A[j];
        while(i<j && key>A[i])
            i++;
        A[j] = A[i];
    }
    A[i] = key;
    quickSort(A,left,i-1);
    quickSort(A,i+1,right);
}