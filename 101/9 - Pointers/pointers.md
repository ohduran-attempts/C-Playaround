#Pointers
##Intro
As soon as we declare a variable, the amount of memory needed is assigned for it at a specific location.
The address that locates a variable within memory is what we call a reference to that variable.
This reference can be obtained by predecing the variable name with ampersand (&).

´´´cpp
ted = &andy
´´´

This would assign to "ted" the address of the variable andy.
Consider this:

´´´cpp
andy = 25
fred = andy
ted = &andy
´´´

The values contained in each variable are:
-fred = 25 (standard asignment)
-ted = 1776 (the position in memory of "andy")

The variable that stores the reference to another variable (like ted), is called a pointer.
## Dereference
We can use * as "the value pointed by", so that:

´´´cpp
beth = \*ted;
´´´

will have the value of andy, because ted was a pointer to andy's value in memory.

- & is the reference operator and can be read as "address of".
- * is the __de__ reference operator and can be read as "value pointed by".

´´´cpp
andy = 25;
ted = \&andy;
´´´

Then the following is true:

´´´cpp
andy == 25;
&andy == 1776;
ted == 1776;
\*ted == 25;
´´´

Due to the ability of a pointer to directly refer to the value that it points to, it becomes necessary to specify in its declaration which data type a pointer is going to point to.

´´´cpp
int * number;
char * character;
float * greatnumber;
´´´
Each one points at to a different data type, but really they are all pointers, thus they occupy the same amount of space in memory.
Nevertheless, the data they point at do not occupy the same amount of space, since they are integer, char and float.
Therefore, although these three examples of pointers are all pointers, they are said to be int*, char* and float*.

## Pointers and arrays
The concept of array is very much bound to the one of pointer. In fact, the identifier of an array is, in reality, the address of its first element. Computer will stop when it finds a "\0" somewhere in memory.
For example, supposing these two declarations:

´´´cpp
int numbers[20];
int * p;
´´´

The following would be valid:

´´´cpp
p = numbers; //p now points at whatever was pointed by numbers
´´´

## Pointers to pointers
C++ allows the use of pointers that point to pointers. In order to do that, we only need to add an asterisk for each level.

´´´cpp
char a;
char * b;
char ** c;
a = z;
b = \&a;
c= \&b;
´´´

## Pointers to functions
The typical use of this is for passing a function as an argument to another function, since they cannot be passed otherwise.
