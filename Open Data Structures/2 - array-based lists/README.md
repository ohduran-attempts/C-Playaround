#Array-Based Lists
Data structures that work by storing data in a single array have many advantages and limitations in common:

- Arrays offer constant time access to any value in the array.
- Arrays are not very dynamic; adding or removing an element near the middle of a list means that a large number of elements in the array need to be shifted to make room for the newly added element, or to fill the gap created by the deleted element.
- Arrays cannot expand or shrink. Should we want to add more elements in the data structure than the size of the backing array, we would need to allocate a new array, copying the data from the old array into the new array. That is an __expensive__ operation.
