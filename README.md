# C++ vs Python Performance

This project aims to compare the execution times of a basic operation (adding numbers) in C++ and Python. The operation is performed for 5 times, and the average execution time is calculated for both languages.

- [Methodology](#methodology)
- [C++ Results](#c-results)
- [Python Results](#python-results)
- [Performance Comparison](#performance-comparison)
  - [C++ Advantages](#c-advantages)
  - [Python Considerations](#python-considerations)
- [Conclusion](#conclusion)

## Methodology

The chosen operation involves adding numbers in a loop, repeated one billion times. The goal is to measure the time it takes for each language to complete this task. The measurements were conducted on the same hardware to ensure a fair comparison.

## C++ Results

1. Time: 1018685 microseconds (1.018685 seconds)
2. Time: 966919 microseconds (0.966919 seconds)
3. Time: 982105 microseconds (0.982105 seconds)
4. Time: 975370 microseconds (0.975370 seconds)
5. Time: 1012280 microseconds (1.012280 seconds)

Average C++ Execution Time: 982672.6 microseconds (0.9826726 seconds)

## Python Results

1. Time: 66252006.05392456 microseconds (66.252006 seconds)
2. Time: 57206328.86886597 microseconds (57.206328 seconds)
3. Time: 55380950.927734375 microseconds (55.380951 seconds)
4. Time: 55752794.26574707 microseconds (55.752794 seconds)
5. Time: 60380209.20753479 microseconds (60.380209 seconds)

Average Python Execution Time: 58934465.86496174 microseconds (58.9344659 seconds)

## Performance Comparison

### C++ Advantages

1. **Compiled Nature:** C++ is a compiled language, which allows for optimizations during compilation, resulting in faster execution.

2. **Low-Level Control:** C++ provides low-level control over hardware, making it efficient for resource-intensive tasks.

### Python Considerations

1. **Interpreted Nature:** Python is an interpreted language, and its dynamic typing can introduce some runtime overhead.

2. **High-Level Abstractions:** Python prioritizes ease of use and readability over raw performance, making it a versatile language but potentially slower for certain tasks.

## Conclusion

Based on the performed operation (adding numbers in this case), the C++ implementation demonstrated significantly lower execution times compared to Python. On average, C++ was approximately 60 times faster than Python for this particular operation.

It's important to note that the choice between C++ and Python depends on the specific requirements and considerations of the project. If raw performance is crucial, especially for computationally intensive tasks, C++ may be a preferred choice. However, Python's readability and ease of use make it a popular choice for a wide range of applications, emphasizing developer productivity over raw execution speed.

These results provide insights into the performance characteristics of each language for the given task, but it's advisable to conduct specific performance benchmarks for the target application or workload to make an informed decision.
