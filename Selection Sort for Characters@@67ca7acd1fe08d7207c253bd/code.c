// Your code here...
void selectionSort(char arr[],char n){

    for (int i=1;i<n;i++){
        for (int j=i;j>0;j--){
            if (arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j]=arr[j-1];
                arr[j - 1]=temp;
            }else {
                break;
            }
        }
    }
}
void printArray(char arr[],char n){
    for (int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
    printf("\n");
}