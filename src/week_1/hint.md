# Week 1 problem set tutorial

## Official tutorial
- Contest 1616's tutorial [here](https://codeforces.com/blog/entry/98501).
- Contest 1624's tutorial [here](https://codeforces.com/blog/entry/98942)

## My tutorial

### Integer Diversity<br>
Tags: *adhoc*.
> For each number in array we increase the *count* of its absolute value by 1. <br>
> First, we assign result to 1 if there are 0s in array (count[0] > 0), otherwise assign to 0. <br>
> Iterate i from 1 to 100, if *count* of i is greater than 1 then increase the result by 2, otherwise increase the result by count[i].