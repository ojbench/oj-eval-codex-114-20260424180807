# Problem 114 - zhongzero的指针式vector

**ACMOJ Problem ID**: 1728

## Table of Contents

- [Problem 114 - zhongzero的指针式vector](#problem-114-zhongzero的指针式vector)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
    - [Background](#background)
  - [Assignment Description](#assignment-description)
    - [Grade Composition](#grade-composition)
  - [Assignment Requirements](#assignment-requirements)
    - [Input Format](#input-format)
    - [Output Format](#output-format)
    - [Samples](#samples)
    - [Data Constraints](#data-constraints)
  - [Per-Testcase Resource Limits](#per-testcase-resource-limits)
  - [Test Data](#test-data)
  - [Submission Requirements](#submission-requirements)
    - [Submission Format](#submission-format)
    - [Submission Guidelines](#submission-guidelines)
    - [Evaluation Notes](#evaluation-notes)
    - [Academic Integrity](#academic-integrity)

## Introduction

### Background

This problem tests algorithmic problem-solving skills.

## Assignment Description

### Grade Composition

| Grading Component | Percentage |
| :--: | :--: |
| Pass **1728. zhongzero的指针式vector** | 80% |
| Code Review | 20% |

Here are several points that need clarification:

- In the Code Review, we will **strictly examine your code style and repository organization structure, etc.**

- This assignment provides some sample data for testing, stored in the `/workspace/data/114/data_test/` directory. Note that these are not the test cases on the Online Judge. Passing all local test cases does not guarantee that you will pass the OJ tests.

- Besides the provided sample data, we also encourage you to design your own test data based on your program logic to assist debugging.

## Assignment Requirements

### Problem Description

```
所有的人对我来说，都只不过是件道具。我不管过程如何，也不管要付出多大的牺牲，在这个世界上，只有胜利才是一切。反正只要最后获胜的人是我，那就没问题了。——绫小路清隆
```

zhongzero听说大家最近学习了指针，于是准备来考考你啦，他想看你能不能实现一个超级简化版的vector

zhongzero给你了一个 ```src.hpp``` 的程序模板，希望你能实现它

```c++
#include<algorithm>

void Init(int **&p,int n){//初始化，n为vector的个数,传入的p指向nullptr
	//todo
}
void Add_element(int **&p,int x,int y){//在第x(1base)个vector后面添加一个元素y
	//todo
}
int Get_element(int **&p,int x,int k){//获取第x(1base)个vector中第k个(1-base)元素的值
	//todo
}
void Clear(int **&p,int n){//回收空间
	//todo
}
```

**请注意，上面程序中 todo 以外的所有内容都是不允许修改的** 

**另外，你只能定义O(1)个局部变量** 



本题中，你需要实现Init,Add_element,Get_element,Clear四个函数

其中，Init会在开头调用1次，Clear会在最后调用1次

Add_element和Get_element调用次数都不超过1e6, $n \le 1e6$ 



你只需要上交类似上述程序模板的代码，不需要上交完整代码

### Input Format



### Output Format



### Samples

No sample data provided for this problem.

### Data Constraints

## Resource Limits

- **Time Limit**: 2000 ms
- **Memory Limit**: 512 MiB

## Per-Testcase Resource Limits

- **Time Limit (per test case)**: 2000 ms
- **Memory Limit (per test case)**: 512 MiB
- **Disk Usage**: No disk usage is permitted.

## Test Data

The test data for this problem is located at `/workspace/data/114/data_test/`.

## Submission Requirements

### Submission Format

Submit a single C++ source file to the Online Judge. The OJ provides its own `main.cpp` which `#include "src.hpp"`. Your submission will be written to `src.hpp` and compiled together with the OJ's driver code.

### Submission Guidelines

- The submitted code must be able to compile successfully through the above compilation process
- The program needs to be able to read data from standard input and write results to standard output
- Please ensure the code runs correctly within the given time and space limits
- **You must use C++ or C language** to implement this assignment

### Evaluation Notes

- The evaluation system will test your program using the provided test data
- The program output must exactly match the expected output (including format)
- Exceeding time or memory limits will be judged as the corresponding error type
- Please pay attention to the overall time performance of your code and the time complexity of each part of your algorithm.

### Academic Integrity

If any violations are found during evaluation or code review (including but not limited to using unconventional methods to pass test cases), your final score may be significantly reduced or become **0 points**.
