# Introduction

In this homework assignment, you will be building on your knowledge of C++ classes. 

The example used here is just a silly implementation of a few objects meant to represent farm animals (Cow and Sheep). The required implementation of these classes will be a bit repetitive and that is by design. In future lectures, you will learn how to use inheritance and polymorphism to reuse code.

# Tasks

In `Sheep.cpp` and `Cow.cpp`:
  1. Initialize static member variables as specified in the headers.
  2. Implement the constructor and other member functions (and the copy constructor in Sheep.h) as specified in the headers.
  3. Implement the overloaded << operators.

When implementing the copy constructor of the Sheep class, append a space and the word "Clone" to the existing Sheep name.

Do not modify the main.cpp and header files.

# Hint

Treat the ostream parameter as cout.

# Compile and Run

* For Cygwin users: Type the following commands on Terminal. No input is required this time.

```
g++ -o main *.cpp *.h
```
```
./main
```

* For CLion users: 1) Update the CMakeLists.txt file as below; and 2) Click the Compile and Run button.

```
add_executable(your_project_name main.cpp Cow.cpp Cow.h Sheep.cpp Sheep.h)
```

# Test

Check the created result.txt file (for CLion users: this file is under the cmake-build-debug folder). It must be the same as the answer.txt file.

# Submit

Since the problem between GitHub Classroom and Codespaces has not been resolved yet, please upload your Cow.cpp and Sheep.cpp files to `myCourses > Assignments > Homework 6`.
