# Sliding Window Maximum Sum

This project provides a generic, header-only implementation of the fixed-size sliding window problem for any arithmetic (numeric) type. It includes a driver program that generates a random vector of values, computes the maximum sum over a window of size *k*, and prints both the sum and the corresponding subarray.

---

## Project Files

- **`sliding_window.hpp`**  
  - A templated header conditioned to arithmetic types only (`std::is_arithmetic<T>`).  
  - Provides two functions:  
    1. `T sliding_window_k_sub_array_sum(const std::vector<T>& vec, size_t k)`  
       – Returns the maximum sum of any contiguous subarray of length *k*.  
    2. `std::vector<T> sliding_window_k_sub_array(const std::vector<T>& vec, size_t k)`  
       – Returns the actual subarray (as a `std::vector<T>`) that yields that maximum sum.  
  - Throws `std::invalid_argument` if `k > vec.size()`.

- **`main_sliding.cpp`**  
  - Example driver:  
    - Randomly picks a vector length (e.g. between 3 and 10).  
    - Fills a `std::vector<double>` with random real values (rounded to two decimals).  
    - Calls both sliding-window functions with a fixed window size `k=3`.  
    - Prints the generated vector, the maximum sum, and the best subarray.

- **`makefile`**  
  - Targets:  
    - `all` or default → compiles `main_sliding.cpp` into `main_sliding`.  
    - `clean` → removes the executable and object files.

---

## Requirements

- A C++17–capable compiler (e.g., `g++` or `clang++`).
- GNU Make (to use `make`).
- [Valgrind](https://www.valgrind.org/) (optional, for memory checks).

---

## Build & Clean

In the project root directory, run:

```bash
# Build the executable
make

# Remove build artifacts\make clean
```

After `make`, you should have an executable named `main_sliding`.

---

## Usage

Run the program:

```bash
./main_sliding
```

Sample output:
```
=== Sliding window ===
Generating vector...

Generated Vector: {3.46, 2.75, 5.03, 1.14}

Maximum sum of 3 elements sub array: 11.24

The sub array:
{3.46, 2.75, 5.03}
```

- **Change window size**: Edit `main_sliding.cpp`, adjust the `k` parameter in calls to `sliding_window_k_sub_array_sum` and `sliding_window_k_sub_array`.
- **Test other types**: Replace `std::vector<double>` with `std::vector<int>`, `float`, etc., to verify template flexibility.
- **Try different vector lengths**: Modify the random range or set a fixed vector by hand.

---

## Memory Checking with Valgrind

To ensure there are no leaks or invalid accesses, run:

```bash
valgrind --leak-check=full ./main_sliding
```

Address any reported issues in your code before production.

---

## Contributing

Feel free to open issues or submit pull requests:

1. Fork the repo and create a feature branch.
2. Make your changes and add tests if needed.
3. Submit a pull request for review.

---

## License

This code is released under the MIT License. Use freely and modify as you wish.

---

*Happy sliding-windowing!*
