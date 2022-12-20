bool isPrime(int n) { // basic algorithm O(sqrt(n))
    if (n == 2)
        return true;
    else if (n < 2 or n % 2 == 0) // the only even prime number is 2; so we don't need to check for other evens.
        return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}