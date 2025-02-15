// s 1352. Product of the Last K Numbers
// Difficulty: Medium

// Problem Statement: [Link] = https://leetcode.com/problems/product-of-the-last-k-numbers/description/
// Design an algorithm that accepts a stream of integers and retrieves the product of the last k integers of the stream.

// Implement the ProductOfNumbers class:

// ProductOfNumbers(): Initializes the object with an empty stream.
// void add(int num): Appends the integer num to the stream.
// int getProduct(int k): Returns the product of the last k numbers in the current list. You can assume that the list always has at least k numbers.
// The test cases are generated such that, at any time, the product of any contiguous sequence of numbers will fit into a single 32-bit integer without overflowing.

// Input:
// ["ProductOfNumbers","add","add","add","add","add","getProduct","getProduct","getProduct","add","getProduct"]  
// [[],[3],[0],[2],[5],[4],[2],[3],[4],[8],[2]]  
// Output:
// [null,null,null,null,null,null,20,40,0,null,32]  


import java.util.ArrayList;
import java.util.List;
public class ProductOfNumbers {
    private List<Integer> stream;
    private int n;
    private int lastZeroIdx;
    public ProductOfNumbers() {
        stream = new ArrayList<>();
        stream.add(1);
        n = 1;
        lastZeroIdx = -1;
    }
    public void add(int num) {
        if (num == 0) {
            lastZeroIdx = n;
        }

        if (stream.get(stream.size() - 1) == 0) {
            stream.add(num);
        } else {
            stream.add(stream.get(stream.size() - 1) * num);
        }
        n++;
    }
    public int getProduct(int k) {
        if (lastZeroIdx >= n - k) {
            return 0;
        }
        if (stream.get(n - k - 1) == 0) {
            return stream.get(n - 1);
        } else {
            return stream.get(n - 1) / stream.get(n - k - 1);
        }
    }
}