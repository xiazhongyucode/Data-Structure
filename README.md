# Data-Structure
## 数据结构

## 第1章 绪论

## 第2章 线性表

## 第3章 栈、队列和数组

## 第4章 串

## 第5章 树与二叉树

## 第6章 图

图（Graph）是由顶点的有穷非空集合和顶点之间边的集合组成的，通常表示为G（V,E）,其中，G表示一个图，V是图G中顶点的集合，E是图G中边的集合。

1.邻接矩阵

图的邻接矩阵（Adjacency Matrix）存储方式是用两个数组来表示图。一个一维数组存储图中顶点信息，一个二维数组（称为邻接矩阵）存储图中的边或弧的信息。

图的邻接矩阵存储结构定义如下：

```c++
#define MaxVertexNum 100 //顶点数目的最大值
typedef char VertexType; //顶点的数据类型
typedef int EdgeType; //带权图中边上权值的数据类型
typedef struct{
	VertexType Vex[MaxVertexNum]; //顶点表
	EdgeType Edge[MaxVertexNum][MaxVertexNum]; //邻接矩阵，边表
	int vexnum,arcnum; //图的当前顶点数和弧数
}MGraph;
```

2.邻接表





## 第7章 查找

## 第8章 排序

### 作者：Zhongyu Xia
