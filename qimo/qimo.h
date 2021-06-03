#include<stdio.h>//无向带权图 
#include<stdlib.h>
#include<string.h>
#define Infinity 2000//表示无穷大 
#define MaxVertexNum 20 
#define MAX 40 
#define key 11//key为顶点个数 
typedef struct arcell//边的权值信息
{ 	int adj;//权值  
}arcell,adjmatrix[MaxVertexNum][MaxVertexNum];//图的邻接矩阵类型
typedef struct vexsinfo//顶点信息 
{ 	int position;//地点的编号 
	char name[32];//地点的名称 
	char introduction[256];//地点的介绍 
	char super_introduction[512];//地点的详细介绍 
}vexsinfo;
typedef struct mgraph//图结构信息
{  	vexsinfo vexs[MaxVertexNum];//顶点向量（数组） 
	adjmatrix arcs;//邻接矩阵 
	int vexnum,arcnum;//顶点数和边数 
}mgraph;
//全局变量
mgraph campus; //图变量（大学校园） 
int d[30];
int visited[30];
int shortest[MaxVertexNum][MaxVertexNum];//定义全局变量存储最小路径 
int pathh[MaxVertexNum][MaxVertexNum];//定义存储路径 

mgraph initgraph();
int locatevex(mgraph c,int v);
void path(mgraph c,int m,int n,int k);
int allpath(mgraph c);
void shortestpath_dij(mgraph c);
void menu();
int creatgraph(mgraph *c);
int newgraph(mgraph *c);
int enarc(mgraph *c);
int envex(mgraph *c);
int delvex(mgraph *c) ;
int delarc(mgraph *c);
void printmatrix(mgraph c);
int changegraph(mgraph *c);
int user_log();
void floyd(mgraph c);//一种暴力破解获取最短路径的算法 
void printf_Pshuzu();
void display(mgraph c,int i,int j);
int shortdistance(mgraph c);
void seeabout(mgraph c);
void browsecompus(mgraph c); 
void school_map();
void mainwork();
