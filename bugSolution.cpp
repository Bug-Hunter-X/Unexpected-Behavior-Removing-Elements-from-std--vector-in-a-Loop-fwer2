std::vector<int> vec = {1, 2, 3, 4, 5};

for (int i = vec.size() -1; i >= 0; --i) {
    vec.erase(vec.begin() + i);
}

//Alternatively:
//std::vector<int> vec = {1, 2, 3, 4, 5};
//vec.clear();

// Expected: Empty vector
// Actual: Empty vector