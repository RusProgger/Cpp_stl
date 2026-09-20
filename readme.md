# 📚 C++ STL Notes

> A collection of my notes, examples, and practice while learning the **C++ Standard Template Library (STL)**.

The goal of this repository is to understand how STL containers, algorithms, iterators, and other useful tools work through small examples, exercises, and experiments.

---

## 📖 Topics

### 📦 Containers

| Container | Description |
|----------|-------------|
| `vector` | Dynamic array |
| `array` | Fixed-size array |
| `deque` | Double-ended queue |
| `list` | Doubly linked list |
| `forward_list` | Singly linked list |
| `stack` | LIFO container |
| `queue` | FIFO container |
| `priority_queue` | Priority-based queue |
| `set` | Unique sorted elements |
| `multiset` | Sorted elements with duplicates |
| `map` | Key-value pairs with unique keys |
| `multimap` | Key-value pairs with duplicate keys |
| `unordered_set` | Hash-based set |
| `unordered_map` | Hash-based key-value container |

---

## 🔧 Other STL Components

- 🔁 **Iterators**
- ⚙️ **Algorithms**
- 🧩 `pair`
- 📦 `tuple`
- 🔤 `string`
- 🛠️ Function objects
- 🏹 Lambdas
- 🚀 `auto`
- 🔄 Range-based loops

---

## 💻 Code Examples

### `vector`

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    numbers.push_back(6);

    for (int number : numbers) {
        std::cout << number << ' ';
    }

    return 0;
}
