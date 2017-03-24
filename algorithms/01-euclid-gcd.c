int GCD(int a, int b) {
    while(b != 0) P{
        int t = b;
        b = a % b;
        a = t;
    }

    return a;
}

