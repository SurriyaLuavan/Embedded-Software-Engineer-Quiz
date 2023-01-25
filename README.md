# Embedded-Software-Engineer-Quiz
This repo is to share answers for a coding interview


## Question 1:
These are some of the testcase that where used and their outputs:

1.  Input: 16 5 <br>
    Output: 5x5, 5x5, 5x5, 1x1, 1x1, 1x1, 1x1, 1x1

2.  Input: 6 5 <br>
    Output: 5x5, 1x1, 1x1, 1x1, 1x1, 1x1

3.  Input: 9 9 <br>
    Output: 9x9


## Question 2:
These are some of the testcase that where used and their outputs:

1.  Input: 15840 <br>
    Output: cGp

2.  Input: 30001 <br>
    Output: No match found

3.  Input: 55555 <br>
    Output: No match found

4.  Input: 77788 <br>
    Output: No match found

5.  Input: 26134 <br>
    Output: MIE

2 c) What is the upper limit of this mapping function before there will be collisions?

* The upper limit of this mapping function, before there will be collisions, is based on the size of the hash table and the number of elements being stored in it. In this implementation, the size of the hash table is defined as a constant with the value of 256.

* If we have less than or equal to 256 unique keys, we will not have any collisions as each key will have its own unique index in the hash table. However, if we have more than 256 keys, we will start to see collisions as multiple keys will have the same index in the hash table, and therefore, their values will be overwritten by the last key to be inserted.


