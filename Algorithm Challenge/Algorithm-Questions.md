- # Question One

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].     

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.       
You must write an algorithm that runs in O(n) time and without using the division operation.        
Example 1:      
Input: nums = [1,2,3,4]     
Output: [24,12,8,6]     

Example 2:      
Input: nums = [-1,1,0,-3,3]     
Output: [0,0,9,0,0]     

 Constraints:       
2 <= nums.length <= 105     
-30 <= nums[i] <= 30        
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.       






- # Question 2
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.       
Implement the MinStack class:       
MinStack() initializes the stack object.        
void push(int val) pushes the element val onto the stack.       
void pop() removes the element on the top of the stack.     
int top() gets the top element of the stack.        
int getMin() retrieves the minimum element in the stack.        
You must implement a solution with O(1) time complexity for each function.      
 Example 1:     
Input       
["MinStack","push","push","push","getMin","pop","top","getMin"]     
[[],[-2],[0],[-3],[],[],[],[]]      

Output      
[null,null,null,null,-3,null,0,-2]      

Explanation     
MinStack minStack = new MinStack();     
minStack.push(-2);      
minStack.push(0);       
minStack.push(-3);      
minStack.getMin(); // return -3     
minStack.pop();     
minStack.top();    // return 0      
minStack.getMin(); // return -2     
Constraints:        
-231 <= val <= 231 - 1      
Methods pop, top and getMin operations will always be called on non-empty stacks.       
At most 3 * 104 calls will be made to push, pop, top, and getMin.       

Example Template Starter Code. Use your preferred language syntax.      
class MinStack:     

    def __init__(self):     
        

    def push(self, val: int) -> None:       
        

    def pop(self) -> None:      
        

    def top(self) -> int:       
        

    def getMin(self) -> int:        
        


```
Your MinStack object will be instantiated and called as such:     
# obj = MinStack()      
# obj.push(val)     
# obj.pop()     
# param_3 = obj.top()       
# param_4 = obj.getMin()        
```











- # Question 3
Sort an array of 10,000 elements using the quick sort algorithm as follows:     

 a. Sort the array using pivot as the middle element of the array.      

 b. Sort the array using pivot as the median of the first, last, and middle elements of the array. 
      
 c. Sort the array using pivot as the middle element of the array.      
 However, when the size of any sublist reduces to less than 20, sort the sublist using an insertion sort.               

d. Sort the array using pivot as the median of the first, last, and middle elements of the array. When the size of any sublist reduces to less than 20, sort the sublist using an insertion sort.       

e. Calculate and print the CPU time for each of the preceding four steps. 
To find the current CPU time, declare a variable, say, x, of type clock_t. 
The statement x = clock(); stores the current CPU time in x. 
You can check the CPU time before and after a particular phase of a program. 
Then, to find the CPU time for that particular phase of the program, subtract the before time from the after time.
 Moreover, you must include the header file ctime to use the data type clock_t and the function clock. 
 Use a random number generator to initially fill the array.
