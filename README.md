# Sorting Algorithms Implementation

A C program that demonstrates three sorting algorithms: Bubble Sort, Insertion Sort, and Selection Sort.

## How to Use

1. Clone the repository:
```bash
git clone https://github.com/nof1eld/sorting-algorithms.git
```

2. Compile the program:
```bash
gcc main.c  -o sort-algorithms
```
3. Run the executable:
```bash
./sort-algorithms
```

4. Follow the prompts:
   - Enter the size and content of the array
   - Choose a sorting algorithm
   - View the sorted result

## Algorithm Descriptions

### Bubble Sort
Repeatedly steps through the list comparing adjacent elements, swapping them if they are in the wrong order. The pass through the list is repeated until no swaps are needed.
- Time Complexity: O(n²)

### Insertion Sort
Builds the final sorted array one item at a time by comparing each element with the sorted portion and inserting it at the correct position.
- Time Complexity: O(n²)

### Selection Sort
Divides input into sorted and unsorted regions. In each iteration, finds the minimum element from the unsorted region and adds it to the sorted region.
- Time Complexity: O(n²)

## Contributing

Feel free to submit new sorting algorithms or improvements to the existing ones.

