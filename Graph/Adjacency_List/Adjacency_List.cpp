#define MaxVertexNum 100 //������Ŀ�����ֵ
typedef char VertexType; //�������������
typedef int EdgeType; //��Ȩͼ�б���Ȩֵ����������
typedef struct {
	VertexType Vex[MaxVertexNum]; //�����
	EdgeType Edge[MaxVertexNum][MaxVertexNum]; //�ڽӾ��󣬱߱�
	int vexnum, arcnum; //ͼ�ĵ�ǰ�������ͻ���
}MGraph;