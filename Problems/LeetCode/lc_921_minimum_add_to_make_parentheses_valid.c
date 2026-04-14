int minAddToMakeValid(char *s) {
    int open = 0;
    int imbalance = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '(') {
            open++;
        }
        else {
            if (open > 0) {
                open--;
            }
            else {
                imbalance++;
            }
        }
    }

    return open + imbalance;
}