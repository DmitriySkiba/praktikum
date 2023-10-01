int gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

std::tuple<long long, long long> reduce(long long m, long long n) {
    long long d = gcd(abs(m), n);
    return std::make_tuple(m / d, n / d);
}

std::tuple<long long, long long, long long> find_lcm(long long a, long long b) {
    long long lcm = a * b / gcd(a, b);
    long long c = lcm / a;
    long long d = lcm / b;
    return std::make_tuple(lcm, c, d);
}
