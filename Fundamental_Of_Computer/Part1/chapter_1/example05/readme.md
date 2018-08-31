# 浮点运算的原理

代码示例　main.c 

此代码在32位机器和64位机器上运行结果是不同的，都很反常



在ubuntu amd64环境执行结果：
```
magc@magc-PC:~/workspace/BMW_ROAD_Task/Fundamental_Of_Computer/Part1/chapter_1/example05$ ./test 
a=612765528
magc@magc-PC:~/workspace/BMW_ROAD_Task/Fundamental_Of_Computer/Part1/chapter_1/example05$ ./test 
a=2102538632
magc@magc-PC:~/workspace/BMW_ROAD_Task/Fundamental_Of_Computer/Part1/chapter_1/example05$ ./test 
a=84662856
magc@magc-PC:~/workspace/BMW_ROAD_Task/Fundamental_Of_Computer/Part1/chapter_1/example05$ ./test 
a=-411059480
magc@magc-PC:~/workspace/BMW_ROAD_Task/Fundamental_Of_Computer/Part1/chapter_1/example05$ ./test 
a=598707400
magc@magc-PC:~/workspace/BMW_ROAD_Task/Fundamental_Of_Computer/Part1/chapter_1/example05$ ./test 
a=1041532120
magc@magc-PC:~/workspace/BMW_ROAD_Task/Fundamental_Of_Computer/Part1/chapter_1/example05$ ./test 
a=-545502568
magc@magc-PC:~/workspace/BMW_ROAD_Task/Fundamental_Of_Computer/Part1/chapter_1/example05$ ./test 
a=279525944
magc@magc-PC:~/workspace/BMW_ROAD_Task/Fundamental_Of_Computer/Part1/chapter_1/example05$ ./test 
a=-181215608
magc@magc-PC:~/workspace/BMW_ROAD_Task/Fundamental_Of_Computer/Part1/chapter_1/example05$ ./test 
a=1308825352
magc@magc-PC:~/workspace/BMW_ROAD_Task/Fundamental_Of_Computer/Part1/chapter_1/example05$ ./test 
a=-854395144

```

可以看出，每次运行结果都是变化无常的！！！

# 问题根源

需要理解浮点运算的过程，以及浮点运算协处理器的参数传递过程等．


