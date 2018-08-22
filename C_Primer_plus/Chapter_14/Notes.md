## 结构体

#### 定义

```
struct name {	
	int value;
	double value2;
	char value3[255];
}
```

#### 内存分配

是一段连续的内存, value(4字节)->value2(8字节)->value3(255字节);

#### 声明

```
struct name variable_name;
```

#### 初始化

```
struct name variable_name = {
	1,
	2.0,
	"string"
};
-->
struct name variable_name = {
	.value = 1,
	.value2 = 2.0,
	.value3 = "string"
};
```

#### 结构体中使用字符串指针

```
struct name {
	char * str;
	char * str2;
}
```

如果使用

```
scanf("%s", name.str);
```

这样赋值的话, 会有潜在的危险, 指针是未分配的, 系统会自动分配一部分内存, 可能会导致问题. 

1. 使用字符数组做代替.

2. 使用malloc()分配

   分配:

   ```
   char temp[255];
   s_gets(temp, 255);
   name.str = (char 8) malloc(strlen(temp) + 1);
   strcpy(name.str, temp);
   ```

   记得最后释放

   ```
   free(name.str);
   ```

## 复合字面量和结构

```
struc book {
    char title[255];
    char author[255];
    float value;
}

//字面量赋值
struct book b = {struct book} {
    "title",
    "author",
    25.5
};
```

字面量也可以作为函数的参数

```
//结构体
struct rect {
    double x;
    double y;
}
//函数
double rect_area(struct rect r) {
    return r.x * r.y;
}
//调用
double area  = rect_area( (struct rect) {10.5, 20.0} );

//如果是结构指针, 也可用指针调用
double rect_area(struct rect r *) {
    return r->x * r->y;
}
double area  = rect_area( &(struct rect) {10.5, 20.0} );
```

## 伸缩型数组成员

#### 特性:

* 该数组不会立即存在
* 使用这个伸缩型数组成员可以编写合适的代码, 就好像它确实存在并具有所需数目的元素一样.

#### 规则:

* 伸缩型数组成员必须是结构的最后一个成员
* 结构中必须至少有一个成员
* 伸缩数组的声明类似于普通数组, 只是它的方括号中是空的.

#### 理解:

声明一个伸缩型数组, 是声明一个指向其地址的指针

#### 实例:

```
struct flex {
    size_t count;
    double average;
    double scores[]; //伸缩型数组
}

struct flex * pf;
int n = 10;
//初始化
//为结构和数组分配内存空间
pf = malloc(sizeof(struct flex) + n * sizeof(double));
pf->count = n;
for (i < n) {
    pf->scores[i] = 666;
}
```

## 匿名结构

```
struct person {
	int id;
	struct {char name[255], char name2[255]};//匿名结构
}
//初始化
struct person ted = {8483, {"Ted", "Grass"}};
//调用
ted.first;
```

简化了嵌套结构



