#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* next;

};
struct node* cretenode(int x) {
	struct node* yeni = (struct node*)malloc(sizeof(struct node));
	yeni->data = x;
	yeni->next = NULL;
	return yeni;
}

void printlist(struct node* head) {
	if (head == NULL) {
		return;
	}
	struct node* temp = head;
	do {
		printf("%d\n", temp->data);
		temp = temp->next;
	}

	while (temp != head);// tek yonlu listede head e degil null a bakiyoruz cunku tek yonlu
	//listede head e donmek icin null a bakmak gerekir
	
	
}

void basaekle(struct node** head, int x) {
	struct node* yeni = cretenode(x);
	if (*head == NULL) {
			yeni->next=yeni;
		*head = yeni;
		return;
	}
	struct node* temp = *head;
	while (temp->next != *head) 
		temp = temp->next;
		temp->next = yeni;
		yeni->next = *head;
		*head = yeni;

	}
////void basaekle(struct node** head, int x) {
//struct node* yeni = createnode(x);
//
//yeni->next = *head;
//*head = yeni; ------>tek YONLU LİSTE İÇİN
// 
//}







void sondansil(struct node** head) {
	if (*head == NULL) {
		return;
	}
	struct node* temp = *head;
	while (temp->next->next!=*head)//while (temp->next->next != NULL) tek yonlu liste için

		temp = temp->next;//nulll
	free(temp->next);
	temp->next = *head;
}

void aradansil(struct node** head, int data) {
	if (*head == NULL) {
		return;
	}
	struct node* temp = *head;
	struct node* temp2;
	while(temp->next!=*head)
		if (temp->next->data == data) {
			temp2 = temp->next;
			temp->next = temp->next->next;
				free(temp2);
			break;

	}
		else {
			temp = temp->next;
		}

}
int main() {
	struct node* yeni1 = cretenode(10);
	struct node* yeni2 = cretenode(20);
	struct node* yeni3 = cretenode(30);
	yeni1->next = yeni2;
	yeni2->next = yeni3;
	yeni3->next = yeni1;
	printf("ilk liste\n");
	printlist(yeni1);
	printf("--------------------\n");
	printf("basa ekleme\n");
	basaekle(&yeni1, 5);
	printlist(yeni1);

	printf("--------------------\n");
	printf("sondan silme\n");
	
	sondansil(&yeni1);
	printlist(yeni1);


	
}





//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct node {
//	int data;
//	struct node* next;
//};
//
//struct node* createnode(int x) {
//	struct node* yeni = (struct node*)malloc(sizeof(struct node));
//
//	yeni->data = x;
//	yeni->next = NULL;
//
//	return yeni;
//}
//
//void printlist(struct node* head) {
//
//	if (head == NULL) {
//		printf("(bos)\n");
//		return;
//	}
//
//	struct node* temp = head;
//
//	while (temp != NULL) {
//		printf("%d\t", temp->data);
//		temp = temp->next;
//	}
//}
//
//void basaekle(struct node** head, int x) {
//
//	struct node* yeni = createnode(x);
//
//	yeni->next = *head;
//	*head = yeni;
//}
//
//void sondansil(struct node** head) {
//
//	if (*head == NULL)
//		return;
//
//	if ((*head)->next == NULL) {
//		free(*head);
//		*head = NULL;
//		return;
//	}
//
//	struct node* temp = *head;
//
//	while (temp->next->next != NULL) {
//		temp = temp->next;
//	}
//
//	free(temp->next);
//	temp->next = NULL;
//}
//
//void aradansil(struct node** head, int x) {
//
//	if (*head == NULL)
//		return;
//
//	if ((*head)->data == x) {
//		struct node* temp = *head;
//		*head = (*head)->next;
//		free(temp);
//		return;
//	}
//
//	struct node* temp = *head;
//
//	while (temp->next != NULL) {
//
//		if (temp->next->data == x) {
//
//			struct node* temp2 = temp->next;
//
//			temp->next = temp->next->next;
//
//			free(temp2);
//
//			return;
//		}
//
//		temp = temp->next;
//	}
//}