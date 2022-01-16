# Week 1 problem set tutorial

## Official tutorial
- Contest 1616's tutorial [here](https://codeforces.com/blog/entry/98501).
- Contest 1624's tutorial [here](https://codeforces.com/blog/entry/98942)

## My tutorial

### Integer Diversity

Tags: *adhoc*.
> Note that this problem has multiple testcases in each test. <br>
> For each number in array we increase the *count* of its absolute value by 1. <br>
> First, we assign result to 1 if there are 0s in array (count[0] > 0), otherwise assign to 0. <br>
> Iterate i from 1 to 100, if *count* of i is greater than 1 then increase the result by 2, otherwise increase the result by count[i]. <br>
> Time complexity: *O(T * N)*.

### Mirror in the String 

Tags: *adhoc*.
> Note that this problem has multiple testcases in each test. <br>

### Representative Edges

Tags: *math*.

### Plus One on the Subset

Tags: *adhoc*.
> Note that this problem has multiple testcases in each test. <br>
> The result of problem is the different between maximum and minimum number in array.
> Time complexity: *O(T * N)*.

### Make AP

Tags: *math*.
> Note that this problem has multiple testcases in each test. <br>
> Time complexity: O(T).

### Division by Two and Permutation

Tags: *greedy, matching*.
> Note that this problem has multiple testcases in each test. <br>
> We can use greedy algorithm in the official tutorial or use the Kuhn's algorithm for Maximum Bipartite Matching (Refer [here](https://cp-algorithms.com/graph/kuhn_maximum_bipartite_matching.html)). <br>
> The bipartite graph is created by:
> - The first part is the original array, the second part is the numbers from 1 to n. <br>
> - If the element x in the original array can be transformed to y (<= n) by div 2 a certain number of times, then we add a directional arc from the this vertex in the first part to the vertex y in second part.

### Palindromes Coloring

Tags: *greedy*.
> Note that this problem has multiple testcases in each test. <br>
> Time complexity: O(T * N).