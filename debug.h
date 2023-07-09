// Thanks to fsshakkhor

#define debug(...) __f(#__VA_ARGS__, __VA_ARGS__)
template < typename Arg1 >
void __f(const char* name, Arg1&& arg1) {
    cerr << name << " = " << arg1 << endl;
}
template < typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args) {
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << " = " << arg1 << " | ";
    __f(comma + 1, args...);
}


//thanks to arman_ferdous
template <typename T1, typename T2>
ostream& operator<<(ostream& out, const pair<T1, T2>& p) {
    out << "(" << p.first << ", " << p.second << ")";
    return out;
}

template <typename T>
ostream& operator<<(ostream& out, const vector<T>& vec) {
    if (vec.empty()) {
        out << "[]";
        return out;
    }
    out << "[";
    for (int i = 0; i < (int)vec.size(); ++i) {
        out << endl;
        out << vec[i];
    }
    out << endl;
    out << "\t]";
    return out;
}

template <typename T, size_t SIZE>
ostream& operator<<(ostream& out, array<T, SIZE>& arr) {
    if (SIZE == 0) {
        out << "[]";
        return out;
    }
    out << "[";
    for (int i = 0; i + 1 < (int)SIZE; ++i)
        out << arr[i] << ", ";
    out << arr[SIZE - 1] << "]";
    return out;
}

template <typename T>
ostream& operator<<(ostream &out, const deque<T>& deq) {
    if (deq.empty()) {
        out << "[]";
        return out;
    }
    out << "[";
    for (int i = 0; i < (int)deq.size() - 1; ++i)
        out << deq[i] << ", ";
    out << deq.back() << "]";
    return out;
}

template <typename T>
ostream& operator<<(ostream &out, const stack<T>& S) {
    if (S.empty()) {
        out << "[ ... ]";
        return out;
    }
    stack<T> st = S;
    out << "[";
    while ((int)st.size() > 1) {
        out << st.top() << ", ";
        st.pop();
    }
    out << st.top() << "]";
    return out;
}

template <typename T>
ostream& operator<<(ostream &out, const queue<T>& Q) {
    if (Q.empty()) {
        out << "[ ... ]";
        return out;
    }
    queue<T> q = Q;
    out << "[";
    while ((int)q.size() > 1) {
        out << q.front() << ", ";
        q.pop();
    }
    out << q.front() << "]";
    return out;
}

template <typename T1, typename T2>
ostream& operator<<(ostream& out, const unordered_map<T1, T2>& u_map) {
    out << '{';
    for (auto it = u_map.begin(); it != u_map.end(); it++) {
        out << endl;
        pair<T1, T2> element = *it;
        out << element.first << ": " << element.second;

    }
    out << endl;
    return out << '}';
}

template <typename T1, typename T2>
ostream& operator<<(ostream& out, const map<T1, T2>& map) {
    out << '{';
    for (auto it = map.begin(); it != map.end(); it++) {
        out << endl;
        pair<T1, T2> element = *it;
        out << element.first << ": " << element.second;
    }
    out << endl;
    return out << '}';
}
template <typename T1, typename T2>
ostream& operator<<(ostream& out, const multimap<T1, T2>& mmap) {
    out << '{';
    for (auto it = mmap.begin(); it != mmap.end(); it++) {
        out << endl;
        pair<T1, T2> element = *it;
        out << element.first << ": " << element.second;
    }
    out << endl;
    return out << '}';
}

template <typename T>
ostream& operator<<(ostream& out, const set<T>& set) {
    out << '{';
    for (auto it = set.begin(); it != set.end(); it++) {
        T element = *it;
        out << element;
        if (next(it) != set.end()) {
            out << ", ";
        }
    }
    return out << '}';
}

template <typename T>
ostream& operator<<(ostream& out, const multiset<T>& set) {
    out << '{';
    for (auto it = set.begin(); it != set.end(); it++) {
        T element = *it;
        out << element;
        if (next(it) != set.end()) {
            out << ", ";
        }
    }
    return out << '}';
}

template <typename T>
ostream& operator<<(ostream& out, const unordered_set<T>& set) {
    out << '{';
    for (auto it = set.begin(); it != set.end(); it++) {
        T element = *it;
        out << element;
        if (next(it) != set.end()) {
            out << ", ";
        }
    }
    return out << '}';
}

template <typename T>
ostream& operator<<(ostream& out, const unordered_multiset<T>& set) {
    out << '{';
    for (auto it = set.begin(); it != set.end(); it++) {
        T element = *it;
        out << element;
        if (next(it) != set.end()) {
            out << ", ";
        }
    }
    return out << '}';
}

// Source: https://stackoverflow.com/a/31116392/12128483
template<typename Type, unsigned N, unsigned Last>
struct TuplePrinter {
    static void print(std::ostream& out, const Type& value) {
        out << std::get<N>(value) << ", ";
        TuplePrinter < Type, N + 1, Last >::print(out, value);
    }
};

template<typename Type, unsigned N>
struct TuplePrinter<Type, N, N> {
    static void print(std::ostream& out, const Type& value) {
        out << std::get<N>(value);
    }
};

template<typename... Types>
std::ostream& operator<<(std::ostream& out, const std::tuple<Types...>& value) {
    out << '(';
    TuplePrinter < std::tuple<Types...>, 0, sizeof...(Types) - 1 >::print(out, value);
    return out << ')';
}

// #define debug(x) cerr << setw(10) << __LINE__ << ":: " << (#x) << ": " << x << "\n";