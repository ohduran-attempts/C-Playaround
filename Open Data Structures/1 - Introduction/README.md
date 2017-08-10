# Introduction

Every computer science curriculum includes a course on data structures and algorithms; we interact with data structures constantly.
- Open a file
- Look up a contact in your phone
- Log in your favourite social network
- Do a web search
- Phone emergency services

## Need for Efficiency
In the next section, we look at the operations supported by the most commonly used data structures. Anyone with a bit of experience will see that these operations are not hard to implement correctly. What we aim at is finding the most efficient way to do it.
Why? Computers are becoming faster and faster; maybe the obvious implementation is good enough.

The obvious implementation of data structures "do not scale well" when the number of items in the data structure and the number of operations performed on the data structures are both large.

The solution is of course carefully organise the data within the data structure so that not every operation requires every data item to be inspected.

## Interfaces
When discussing data structures, it is important to understand the difference between a data structure's interface and its implementation. An interface describes what a data structure __does__, whereas an implementation describes __how it does it__.

An *interface*, also called *abstract data type*, defines the set of operations supported by a data structure and the semantics, or meaning, of those operations.
A data structure *implementation*, on the other hand, includes the internal representation of the data structure as well as the definitions of the algorithms that implement the operations supported by the data structure. Thus, there can be __many__ implementations of a single interface.

## Asymptotic notation
When analysing data structures, we want to talk about the running times of various operations. The exact running times will vary from computer to computer; instead of analysing running times with precision, we will use the so-called *big O notation*.

For a function *f*, *O(f)* denotes a set of functions where *g = f · C*, for a real number C, that dominates the behaviour of f when n is sufficiently large.

We generally use asymptotic notation to simplify functions: n² + n + 1 can be replaced by O(n²).

And remember:
O(a) < O(log n) < O(n^b) < O(c^n)

## Randomization and probability
Some of the data structures presented in this book are *randomised*; they make random choices that are independent of the data being stores in them or the operations performed on them. For this reason, performing the same set of operations more than once using these structures could result in different running times.

## Correctness, Time Complexity, and Space Complexity

### Correctness
The data structure should correctly implement its interface.
### Time complexity
The running times of operations on the data structure should be as small as possible,
### Space complexity
The data structure should use as little memory as possible.
