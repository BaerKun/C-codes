#include "utils/vertex_list.h"
#include <stdlib.h>

void VertexListInsert(VertexListPtr pPreNode, VertexId vertex) {
    VertexListPtr pNewNode = malloc(sizeof(VertexList));
    pNewNode->vertexId = vertex;
    pNewNode->next = pPreNode->next;
    pPreNode->next = pNewNode;
}

void MakeListEmpty(VertexListPtr pHead) {
    VertexListPtr pThisNode, pNextNode;

    for(pThisNode = pHead->next; pThisNode; pThisNode = pNextNode){
        pNextNode = pThisNode->next;
        free(pThisNode);
    }
}