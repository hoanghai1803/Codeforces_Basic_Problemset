# Week 1 problem set tutorial

## Official tutorial
- Contest 1616's tutorial [here](https://codeforces.com/blog/entry/98501).
- Contest 1624's tutorial [here](https://codeforces.com/blog/entry/98942).
- Contest 908's tutorial [here](https://codeforces.com/blog/entry/56713).

## My tutorial

### [Integer Diversity](https://codeforces.com/contest/1616/problem/A)

Tags: *adhoc*.
> Note that this problem has multiple test cases in each test. <br>
> For each number in array we increase the *count* of its absolute value by *1*. <br>
> First, we assign result to 1 if there are 0s in array (*count[0] > 0*), otherwise assign to *0*. <br>
> Iterate *i* from *1* to *100*, if *count* of *i* is greater than *1* then increase the result by *2*, otherwise increase the result by *count[i]*. <br>
> Time complexity: *O(T * N)*. 

### [Mirror in the String](https://codeforces.com/contest/1616/problem/B)

Tags: *adhoc*.
> Note that this problem has multiple test cases in each test. <br>
> Iterate from the first character to the end of the original string, if the current character is less than the last character then we continue, otherwise break. <br>
> After breaking the loop, print the string backwards from the break position to the beginning. <br>
> But there is a corner case: if *len(str) > 1* and *str[0] == str[1]* then the mirror should be placed after the first character (apparent). <br>
> Time complexity: *O(N)*.

### [Representative Edges](https://codeforces.com/contest/1616/problem/C)

Tags: *math*.
> Note that this problem has multiple test cases in each test. <br>
> It is clear that in order for the obtained array is *good*, it must be an [Arithmetic Progression](https://en.wikipedia.org/wiki/Arithmetic_progression) (AP). <br>
> Choose two fixed numbers in the array (using two nested loops), these two numbers will not be replaced when we convert the original array to AP. From the above two numbers, we can calculate the *common difference* of the AP. Count the number of operations need to convert this array to this AP. <br>
> For each pair of fixed numbers we can calculate the number of operations *S*, the result will be the minimum value of the number of operations in all cases. <br>
> Time complexity: *O(T * N^3)*

### [Plus One on the Subset](https://codeforces.com/contest/1624/problem/A)

Tags: *adhoc*.
> Note that this problem has multiple test cases in each test. <br>
> The result of problem is the difference between the largest and the smallest number in the array. <br>
> Time complexity: *O(T * N)*.

### [Make AP](https://codeforces.com/contest/1624/problem/B)

Tags: *math*.
> Note that this problem has multiple test cases in each test. <br>
> We consider 3 cases, each case will choose one of the three numbers {a, b, c} to multiply by a positive integer m to form an AP. For each case, we will calculate whether any number m satisfies or not.<br>
> Time complexity: *O(T)*.

### [Division by Two and Permutation](https://codeforces.com/contest/1624/problem/C)

Tags: *greedy, matching*.
> Note that this problem has multiple test cases in each test. <br>
> We can use greedy algorithm in the official tutorial or use the *Kuhn's algorithm for Maximum Bipartite Matching* (refer [here](https://cp-algorithms.com/graph/kuhn_maximum_bipartite_matching.html)). <br>
> The bipartite graph is created as follows:
> - The first part is the original array, the second part is the numbers from *1* to *n*. <br>
> - If the element *x* in the original array can be transformed to *y* (*<= n*) by *div 2* a certain number of times, then we add a directional arc from the this vertex in the first part to the vertex *y* in second part. <br>
>
> Then, for each test case, if the maximum matching is equal to *n* then the result is "True", otherwise "False". <br>
> Time complexity: *O(T * N^2)*.

### [Palindromes Coloring](https://codeforces.com/contest/1624/problem/D)

Tags: *greedy*.
> Note that this problem has multiple test cases in each test. <br>
> Count the number of occurrences of each character in the original string (from *'a'* to *'z'*). <br>
> For each string of the same color obtained, in order for it to form a palindrome, each type of character (from *'a'* to *'z'*) in it must appear even times, if any type of character appears odd times, there must be only one. <br>
> We will treat each color as a box, spread the characters evenly into the boxes in order from beginning to end, after reaching the last box, spread again from the beginning. This will ensure that the last box always has the fewest characters, but will have as many characters as possible. <br>
> 1. For each type of character, spread its pairs into the boxes in order until only that 0 or 1 character remains. We call the position of the currently box after spreading each pair of the same characters as *pivot*. 
> 2. From the *pivot*, spread the remaining character of each type of character (from *'a'* to *'z'*) to the last box. After spreading for the last box, if there are any characters left, we don't need to spread them again for the first boxes, because whether we do or not, the number of characters in them is also more than the number of characters in the last box, so it is not necessary. 
> 3. If after the second step we still haven't spread to the last box, we can take one character from each box from the first box to the box immediately before the *pivot* to spread across the boxes from the current position to the end (because all characters in them appear even times). Actually this only needs to be handled by checking if the number of boxes from *1* to (*pivot - 1*) is more than the current number of boxes to the last box in *O(1)*, if yes simply increase *box[k]* by *1*.
> 
> Time complexity: *O(N)*.

### [New Year and Counting Cards](https://codeforces.com/contest/908/problem/A)

Tags: *adhoc*.
> Consider all character in string, there are 2 cases:
> - If the character is a number, we will increment the result by 1 if it is odd.
> - If it is a letter, we will increment the result by 1 if it is a vowel.
>
> Time complexity: *O(len(str))*.

### [New Year and Buggy Bot](https://codeforces.com/contest/908/problem/B)

Tags: *graph traversal, adhoc*.
> This is a basic graph problem, we just have to try all the mappings of digits to directions to count how many mapping would lead the robot to the exit. There are all *4!* ways to choose mapping. <br>
> Time complexity: *O(4! * |s|)*.

### [New Year and Curling](https://codeforces.com/contest/908/problem/C)

Tags: *geometry, adhoc*.
> For each disk *i*, call *y[i]* is the *y-coordinate* of its center after pushed. Initially, y[i] = r (this is the case where *disk[i]* won't touch any disk). <br>
> Iterate *j* from *1* to *(i - 1)* to check whether disk[i] will touches disk[j] when it slides or not. If not, simply continue. Otherwise, update: 
> <p align="center">
>   y[i] = max( y[i], y[j] + sqrt(sqr(2 * r) - sqr(x[i] - x[j])) )
> </p>
> 
> Where *sqrt* = square root and *sqr* = square. The above geometrical formula is easy to prove.<br>
> Time complexity: *O(N^2)*.
