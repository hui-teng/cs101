int main()  {
    for (int index = 1; index <= 81; index++) {
        int i = (index - 1) / 9 + 1;
        int j = (index - 1) % 9 + 1;
        printf("%d*%d=%d\t", i, j, i * j);
        if (j == 9) {
            printf("\n");
        }
    }
    return 0;
}
