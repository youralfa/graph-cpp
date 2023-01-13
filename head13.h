#ifndef HEAD13_H_INCLUDED
#define HEAD13_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define firstEdge(edge) (edge)->firstEdge
#define NIL NULL

typedef char infotype;
typedef struct Node *adrNode;
typedef struct Edge *adrEdge;

struct Node{
    infotype info;
    adrNode next;
    adrEdge firstEdge;
};
struct Edge{
    infotype info;
    adrEdge next;
};

adrNode newNode_1301213006(char x);
void addNode_1301213006(adrNode &G, adrNode P);
adrNode findNode_1301213006(adrNode G, char x);
void addEdge_1301213006(adrNode &G, char x, char y);
bool isConnected_1301213006(adrNode G, char x, char y);
void printGraph_1301213006(adrNode G);


#endif // HEAD13_H_INCLUDED
