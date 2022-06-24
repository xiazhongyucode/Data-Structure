# Data-Structure
## 数据结构

## 第1章 绪论

## 第2章 线性表

## 第3章 栈、队列和数组

## 第4章 串

## 第5章 树与二叉树

## 第6章 图

图（Graph）是由顶点的有穷非空集合和顶点之间边的集合组成的，通常表示为G（V,E）,其中，G表示一个图，V是图G中顶点的集合，E是图G中边的集合。

### 邻接矩阵

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

### 邻接表

图的邻接表（Adjacency List）是指对图G中的每个顶点$v_i$建立一个单链表，第$i$个单链表中的结点表示依附于顶点$v_i$的边（对于有向图则是以顶点$v_i$为尾的弧），这个单链表就称为顶点$v_i$的边表（对于有向图则称为出边表）。边表的头指针和顶点的数据信息采用顺序存储（称为顶点表），所以在邻接表中存在两种结点：顶点表结点和边表结点。

图的邻接表存储结构定义如下：

```c++
#define MaxVertexNum 100 //图中顶点数目的最大值
typedef struct ArcNode{ //边表结点
    int adjvex; //该弧所指向的顶点的位置
    struct ArcNode *next; //指向下一条弧的指针
    //InfoType info; //网的边权值
}ArcNode;
typedef struct VNode{ //顶点表结点
    VertexType data; //顶点信息
    ArcNode *first; //指向第一条依附该顶点的弧的指针
}VNode,AdjList[MaxVertexNum];
typedef struct{
    AdjList vertices; //邻接表
    int vexnum,arcnum; //图的顶点数和弧数
}ALGraph; //ALGraph是以邻接表存储的图类型
```









## 第7章 查找

## 第8章 排序

### 作者：Zhongyu Xia
