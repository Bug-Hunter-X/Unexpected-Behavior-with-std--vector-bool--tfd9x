# Unexpected Behavior with std::vector<bool>

This repository demonstrates a potential issue with the `std::vector<bool>` specialization in C++.  The standard doesn't strictly define how `std::vector<bool>` should be implemented, leading to variations in behavior across different compilers and optimization levels.

The issue is that `std::vector<bool>` often isn't implemented as a true vector of booleans; instead, it might use bit manipulation for memory efficiency. This can lead to unexpected access behavior.  For example, directly accessing elements might not provide the expected boolean value.

The `bug.cpp` file showcases the potential problem.  The `bugSolution.cpp` file offers a workaround, using a standard vector of integers to avoid the potential issue.

## How to Reproduce

1. Clone this repository.
2. Compile `bug.cpp` (e.g., using g++).
3. Run the compiled executable.  Observe the output, which might vary depending on your compiler and settings.
4. Repeat steps 2 and 3 with `bugSolution.cpp` to see a possible alternative with a standard vector.