Arrays using cpp

1. Linear Data Structure used to store data of same type in contigous memory location
2. int marks\[5\]; is an integer array of size 5 named "marks"
3. marks\[0\] is of 4 bytes as its an integer array
4. 2 - pointer approach is important for this
5. memory is statically allocated

Vectors in cpp

1. | vector&lt;data type&gt; name of vector; | This is the syntax of the vector - vector is a dynamic array
2. vectors are dynamically allocated memory during runtime
3. When the vector gets filled then the capacity doubles to accomodate the push_back() element
4. Did leetcode 136th problem, in which i learned n ^  0 = n and n ^n = 0 i.e when i XOR n with the same element then the output is 0 and when i XOR n with 0 then the output is n itself