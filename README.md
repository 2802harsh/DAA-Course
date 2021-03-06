# DAA-Course
This repository contains the Assignments of Group (IIT2019105,106,107)

# Assignment-1

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019105  |  Harshdeep Singh Pruthi  | [2802harsh](https://github.com/2802harsh) |
|    IIT2019106  |   Jaya Ram Naik | [Zeroop-bot](https://github.com/Zeroop-bot) | 
|    IIT2019107  |   Shivansh Gupta | [shivanshgupta612](https://github.com/shivanshgupta612)  |

**Group No-**"18"

**Faculty Name-**"Dr. Rahul Kala | Dr. Mohammed Javed"

**Mentor Name-** "Md. Meraz"

---
## Problem Statement
Counting Number of Inversions in an Array using Divide and Conquer Approach

---
## How to use code

```
git clone https://github.com/2802harsh/DAA-Course 
cd Asg1/code
g++ code.cpp
./a.out
```


**Test case**

__Input__
```
6
5 4 9 7 2 3
```
__Output__
```
Inversion Count of the Array is : 10
```

---

### Theory
Divide and Conquer is an approach which recursively breaks down a problem at hand into two or more sub-problems until they can’t be broken down further or they become simple enough to be solved directly. The solutions to these sub-problems are then combined to give the solution for the original problem.
Consider an array A, and two indices _i_ and _j_, such that _i_ < _j_ and __A[i]__ > __A[j]__. This is called an inversion in the array. Thus, the Inversion Count of an array is the count of all the pairs _(i,j)_ such that _i_ < _j_ and __A[i]__ > __A[j]__

---

### Analysis
__Space Complexity__<br>
In process of counting inversions, we are also sorting the input array as the algorithm demands this. If we wish to retain the original array we do need an auxiliary array which is the copy of the input array . Thus, the space complexity will be __O(N)__

__Time Complexity__ <br>
In the __Divide and Conquer__ algorithm , the input array is divided into two halves each time it is processed.
As such it can be expressed with following recurrence relation,
T(n) = 2T(n/2) + ⊖(n).
Now assuming that at each step the array is divided into exactly two halves, the maximum depth we will get will be log<sub>2</sub>(N)
Hence, time complexity for the same is  __O(Nlog(N))__


---

### References

- Introduction to Algorithms by Thomas H. Cormen, Charles E. Leiserson, Ronald Rivest, Clifford Stein
- Introduction to Design and Analysis of Algorithms by Anany Levitin
- Algorithms by Robert Sedgewick and Kevin Wayne