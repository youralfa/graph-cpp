#include "head13.h"
int main()
{
    adrNode G;
    adrNode P;

    char a = 'A', b = 'B', c = 'C', d = 'D';

    G = newNode_1301213006(a);
    P = newNode_1301213006(b);
    addNode_1301213006(G,P);

    P = newNode_1301213006(c);
    addNode_1301213006(G,P);
    
    P = newNode_1301213006(d);
    addNode_1301213006(G,P);

    addEdge_1301213006(G,a,b);

    addEdge_1301213006(G,a,d);
    addEdge_1301213006(G,a,c);
    addEdge_1301213006(G,b,d);
    addEdge_1301213006(G,b,a);
    addEdge_1301213006(G,c,a);
    addEdge_1301213006(G,d,a);
    addEdge_1301213006(G,d,b);

    printGraph_1301213006(G);
    return 0;
}
