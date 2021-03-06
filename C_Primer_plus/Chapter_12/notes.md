## 作用域

* 块作用域
* 函数作用域
* 函数原型作用域
* 文件作用域

## 链接

* 外部链接

  文件作用域, 可以在多个文件程序中使用

  全局作用域, 程序作用域

  不使用static标识符

* 内部链接

  文件作用域, 只能在一个翻译单元中使用

  使用static标识符

* 无链接

  具有块作用域, 函数作用域或函数原型作用域的变量都是无链接变量

## 存储期

作用域和链接描述了标识符的可见性. 存储期描述了通过这些标识符访问的对象的生存期.

* 静态存储期

  在程序的执行期间一直存在.

  文件作用域变量具备静态存储期, 关键字static只表明内外部链接, 而非存储期.

* 线程存储期

  线程存储期的对象, 从被声明时到线程结束一直存在

  关键字 _Thread_local

* 自动存储期

  块作用域的变量具有自动存储期

* 动态分配存储期

| 存储类别     | 存储期 | 作用域 | 链接 | 声明方式             |
| ------------ | ------ | ------ | ---- | -------------------- |
| 自动         | 自动   | 块     | 无   | 块内 auto            |
| 寄存器       | 自动   | 块     | 无   | 块内, 关键字register |
| 静态外部链接 | 静态   | 文件   | 外部 | 所有函数外           |
| 静态内部链接 | 静态   | 文件   | 内部 | 所有函数外, static   |
| 静态无链接   | 静态   | 块     | 无   | 块内, static         |

## extern关键字

如果一个源代码文件使用的外部变量定义在另一个源代码文件中, 则必须用extern在该文件中声明该变量.

在函数体外声明的变量为定义式声明

```
int tern = 1;
main(){}
```

使用extern是引用式声明

```
int tern = 1;
main(){
    extern int tern;//引用tern
}
```

如果

```
extern int tern;//引用别处的外部变量
main(){
    int tern;//新建tern自动变量 隐藏tern
}
```

