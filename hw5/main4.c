int main()  {
    int i = 12345;
    int thousands = (i / 1000) % 10;
    int units = i % 10;
    i = i - thousands * 1000 - units + units * 1000 + thousands;
    printf("結果: %d\n", i);
    return 0;
}
