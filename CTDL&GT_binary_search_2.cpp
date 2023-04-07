int binarySearch(int arr[], int n, int x) {
  int r = n - 1; 
  int l = 0;
  while (r >= l) {
    int mid = (l+r)/2; 
  
    if (arr[mid] == x)
      return mid;
  
    if (arr[mid] > x)
      r = mid - 1;
    if (arr[mid] < x)
      l = mid + 1;
  }
  
  return -1;
}
  
int main(void) {
  int arr[] = {2,3,4,10,40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 10;
  int result = binarySearch(arr, n, x);
  if (result == -1)
     printf("Khong tim thay phan tu %d trong mang",x);
  else
    printf("%d xuat hien tai chi so %d", x, result);
  return 0;
}
