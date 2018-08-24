## 在\#define中使用参数

\#define MEAN(X, Y) ((X) + (Y) / 2);

X和Y为参数, 后面的X和Y为替换内容

##### 实例

```
#define SQUARE(X) X*X
#define PR(X) printf("The result is %d.\n", X)

SQUARE(2); // 2*2 结果 4;

int x = 5;
SQUARE(x + 2); // 5 + 2 * 5 + 2 结果17 因为先运行了 2*5;
//尽量多使用括号来明确运行顺序 比如 #define SQUARE(X) (X)*(X)

SQUARE(++x); // ++x * ++x 不要这样做!

PR(100 / SQUARE(2))// 编程了 100/2*2 也不是想要的效果
```



## 用宏参数创建字符串:\#运算符

假设宏定义:

```
#define PSQR(X) printf("The square of X is %d.\n", ((X)*(X)))
```

调用

```
PSQR(8);
```

输出为:

```
The square of X is 64.
```

双引号字符串中的X被视为普通文本.不进行替换.



##### 使用#运算符

定义:

```
#define PSQR(X) printf("The square of #X is %d.\n", ((X)*(X)))
```

调用

```
PSQR(2 + 4);
int y = 5;
PSQR(y);
```

输出为:

```
The square of 2 + 4 is 36.
The square of y is 25.
```

直接用参数替换#x为字符串



## 预处理器黏合剂: ##运算符

定义:

```
#define XNAME(n) x ## n
```

使用:

```
int XNAME(1) = 14;// 效果是 int x1 = 14;
int XNAME(2) = 20;// 效果是 int x2 = 20;
int x3 = 40;
//x1, x2, x3均可使用
```



## 变参宏: …和 \__VA_ARGS__

