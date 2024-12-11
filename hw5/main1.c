int main()  {
    int n = 7;
    for (int i = 1; i <= n; i++) {
        int total = n + i - 1;
        for (int j = 1; j <= total; j++) {
            if (j <= n - i) {
                printf("  ");
            } else {
                printf("%d ", i);
            }    
        }
        printf("\n");
}
    return 0;
}
