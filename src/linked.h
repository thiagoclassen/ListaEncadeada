#ifndef __LINKED_H
#define __LINKED_H

#include "benchmark.h"

struct rg {
	char nome[50];
	int nr;
}typedef RG;

struct node {
	RG rg;
	struct node *prev;
	struct node *next;
}typedef Node;

struct header {
	Node *head;
	Node *tail;
	int nodeCount;
}typedef Header;

void splitRGl(Header *head, char string[50]);
int loadLinkedList(Header *head, char fileName[]);

BM insertNodeAtTheEnd(Header *head, RG value, int bench);
BM insertNodeAtStart(Header *head, RG value, int bench);
void printList(Header *head);
void deleteNodeByValue(Header *head);
void insertAtN(Header *head, RG value, int k);
RG getValue();
int getPosIns(Header *head);
int getPosDel(Header *head);
void wipeList(Header *head);
BM deleteLastNode(Header *head, int bench);
BM deleteFirstNode(Header *head, int bench);
void deleteNodeAtN(Header *head, int k);
void writeLinkedList(Header *head);

void startRef(int size);
void reallocRef(int size);
void reference(Header *head);
void linkedInserctionSort(Header *head);
void linkedSelectionSort(Header *head);
void linkedBubbleSort(Header *head);
void linkedShellSort(Header *head);

void linkedCallQuickSort(Header *head);
BM linkedQuickSort(int left, int right, BM bm);

BM linkedMerge(Node **a, int n, int m, BM bm);
BM linkedMergeSort(Node **a, int n, BM bm);
void linkedCallMergeSort(int size);

void linkedCallBynarySearch(Header *head);
int linkedBynarySearch(int value, int start, int finish, BM bm);

#endif
