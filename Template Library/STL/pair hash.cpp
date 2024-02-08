struct hash_name {
    size_t operator()(const Name &name ) const
    {
        return hash<string>()(name.first) ^ hash<string>()(name.second);
    }
};