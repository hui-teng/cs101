int main() {
    int i =10;
    if (i > 0 && (i & (i - 1)) == 0) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
