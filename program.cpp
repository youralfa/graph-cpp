#include "head13.h"

adrNode newNode_1301213006(char x){
    adrNode P;
    P = new Node;
    info(P) = x;
    next(P) = NIL;
    firstEdge(P) = NIL;
    return P;
}

void addNode_1301213006(adrNode &G, adrNode P){
    if(next(G) == NIL){
        next(G) = P;
    }else{
        adrNode x = G;
        while(next(x) != NIL){
            x = next(x);
        }
        next(x) = P;
    }
}

adrNode findNode_1301213006(adrNode G, char x){
    adrNode P = G;
    while(P != NIL){
        if(info(P) == x){
            return P;
        }
        P = next(P);
    }
    if(P == NIL){
        return P;
    }
}

void addEdge_1301213006(adrNode &G, char x, char y){
    adrEdge edge = new Edge;
    info(edge) = y;
    next(edge) = NIL;
    adrNode adrnode = findNode_1301213006(G,x);
    if(firstEdge(adrnode) == NIL){
        firstEdge(adrnode) = edge;
    }else{
        next(edge) = firstEdge(adrnode);
        firstEdge(adrnode) = edge;
    }
}

bool isConnected_1301213006(adrNode G, char x, char y){
    adrNode adrnode = findNode_1301213006(G,x);
    adrEdge edge = firstEdge(adrnode);
    while(edge != NIL){
        if(info(edge) == y){
            return true;
        }
        edge = next(edge);
    }
    if(edge == NIL){
        return false;
    }
}

void printGraph_1301213006(adrNode G){
    adrNode P = G;
    adrEdge edge;

    if(P == NIL){
        cout << "Graph Kosong";
    }else{
        while(P != NIL){
            edge = firstEdge(P);
            cout << "Node " << info(P) << " : ";
            while(edge != NIL){
                cout << " - " << info(edge);
                edge = next(edge);
            }
            cout << endl;
            P = next(P);
        }
    }
}

