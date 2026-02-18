# Assignment: Benchmark with Search

### Students:
- Alexandra Nuevelle
- Marie Jardiniano

## Assignment Details

You will test how two search algorithms (Binary and Iterative Search) differ in their execution time based on an 
increasing workload size (i.e. number of elements to search through). Four files are given:
- `search_template.cpp` 
- `test_elem.csv`
- `randGen.cpp`
- `sizes.csv` 

### `search_template.cpp`

- Contains helper functions and main to execute the program
- *TO DO:* Complete the code by following the briefs (aka comments) and the lecture video
- *To compile*: `g++ search_template.cpp -o search_template`
- *To execute:* `./search_tempate`

### `test_elem.csv`

- File that contains 10 random numbers (i.e. elem.) to search for ranging from 1 to 100 million
- *TO DO:* nothing

### `randGen.cpp`

Generates a file of N random number of elements in increasing order ranging from 1 to 100 million
TO DO: Modify N, so that you have files that have 10_numbers.csv, 100_numbers.csv, etc until you reach 10^7 numbers
To compile: `g++ randGen.cpp -o randGen`
To execute: `./randGen`

### `sizes.csv`

File that contains names of files to read. The names of the files are also the sizes of the elements within the file
TO DO: Modify the sizes so that `search_template.cpp` will read the the files 10_numbers.csv, 100_numbers.csv, etc until 10^7 numbers

### Submission:

- Names of both students
- A graph (Time v. Number of elements) for both algorithms. Axis must be labeled and readable
- Code
