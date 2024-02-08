struct VectorHasher {
   ll operator()(const vector<int> &V) const {
      ll hash = V.size();
      for (auto &i : V) {
         hash ^= i + 0x9e3779b9 + (hash << 6) + (hash >> 2);
      }
      return hash;
   }
};