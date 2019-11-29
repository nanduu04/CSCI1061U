void count(char* arr, int n, int* counts) {
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        counts[arr[i] - 65] += 1;
    }
}
