const int N = 1e7;
vector<int> phi(N + 1, 0);
void phi_1_to_n() {
    for (int i = 0; i <= N; i++)
        phi[i] = i;

    for (int i = 2; i <= N; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= N; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}