int main() {
    int i = 1540;
    if (i <= 1500) {
        printf("70元\n");
    } else {
        int extra = i - 1500;
        int h = ((extra + 99) / 100) * 10;
        printf("%d元\n", 70 + h);
    }   

    return 0;
}
