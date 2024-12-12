std::vector<bool> vec;
vec.push_back(true);
vec.push_back(false);
bool b = vec[0]; // This works fine
b = vec[1];     // This might cause issues depending on the compiler and how it optimizes std::vector<bool>