# 除法的溢出异常

代码示例overflow1.c 和overflow2.c中　a除以-1 的两种写法在数学上是一致的，但在电脑上运行结果是不同的，

运行结果：
```
 ./test1 
-2147483648
 ./test2
浮点数例外

```
# 问题根源

需要理解计算机关于除法的实现过程，
先看反汇编结果：

overflow1.c中main函数的反汇编结果：
```
Dump of assembler code for function main:
   0x00005555555546b0 <+0>:	push   rbp
   0x00005555555546b1 <+1>:	mov    rbp,rsp
=> 0x00005555555546b4 <+4>:	sub    rsp,0x10
   0x00005555555546b8 <+8>:	mov    DWORD PTR [rbp-0x4],0x80000000
   0x00005555555546bf <+15>:	mov    eax,DWORD PTR [rbp-0x4]
   0x00005555555546c2 <+18>:	neg    eax
   0x00005555555546c4 <+20>:	mov    DWORD PTR [rbp-0x8],eax
   0x00005555555546c7 <+23>:	mov    eax,DWORD PTR [rbp-0x8]
   0x00005555555546ca <+26>:	mov    esi,eax
   0x00005555555546cc <+28>:	lea    rdi,[rip+0xa1]        # 0x555555554774
   0x00005555555546d3 <+35>:	mov    eax,0x0
   0x00005555555546d8 <+40>:	call   0x555555554560 <printf@plt>
   0x00005555555546dd <+45>:	mov    eax,0x0
   0x00005555555546e2 <+50>:	leave  
   0x00005555555546e3 <+51>:	ret    
End of assembler dump.

```
可以看出　int b=a/-1; 是按取负指令　neg来处理的

overflow2.c中main函数的反汇编结果：

```
Dump of assembler code for function main:
   0x00005555555546b0 <+0>:	push   rbp
   0x00005555555546b1 <+1>:	mov    rbp,rsp
=> 0x00005555555546b4 <+4>:	sub    rsp,0x10
   0x00005555555546b8 <+8>:	mov    DWORD PTR [rbp-0x4],0x80000000
   0x00005555555546bf <+15>:	mov    DWORD PTR [rbp-0x8],0xffffffff
   0x00005555555546c6 <+22>:	mov    eax,DWORD PTR [rbp-0x4]
   0x00005555555546c9 <+25>:	cdq    
   0x00005555555546ca <+26>:	idiv   DWORD PTR [rbp-0x8]
   0x00005555555546cd <+29>:	mov    DWORD PTR [rbp-0xc],eax
   0x00005555555546d0 <+32>:	mov    eax,DWORD PTR [rbp-0xc]
   0x00005555555546d3 <+35>:	mov    esi,eax
   0x00005555555546d5 <+37>:	lea    rdi,[rip+0x98]        # 0x555555554774
   0x00005555555546dc <+44>:	mov    eax,0x0
   0x00005555555546e1 <+49>:	call   0x555555554560 <printf@plt>
   0x00005555555546e6 <+54>:	mov    eax,0x0
   0x00005555555546eb <+59>:	leave  
   0x00005555555546ec <+60>:	ret    
End of assembler dump.

```
可以看出int c = a/b; 是按除法运算来处理的，使用的指令　是idiv指令，此指令是可以影响溢出标志的

