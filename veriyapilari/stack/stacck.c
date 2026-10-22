#include<limits.h>
#include<stdio.h>
#include<stdlib.h>
struct stack {
	int top;
	unsigned capacity;
	int* array;

};
struct stack *createstack(unsigned ck) {
	struct stack* yeni = (struct stack*)malloc(sizeof(struct stack));
	yeni->capacity = ck;
	yeni->top = -1; 
	yeni->array = (int*)malloc(sizeof(int)*ck);
	return yeni;
}

int isEmpty(struct stack* sl) {
	return sl->top == -1;
}
int isFull(struct stack* sl) {
	return (sl->capacity - 1) == sl->top;
}
void peek(struct stack* sl) {
	printf("zirvedeki deger: %d\n", sl->array[sl->top]);

}
void push(struct stack* sl, int item) {
	if (isFull(sl))
		return;
	sl->top = sl->top + 1;
	sl->array[sl->top] = item;
}
int pop(struct stack* sl) {
	if (isEmpty(sl)) 
		return INT_MIN ;


	/*int item = sl->array[sl->top];
	sl->top = sl->top - 1;
	return item;*/

	return sl->array[sl->top--];
}

int main() {
	struct stack *s2 = createstack(10);
	push(s2, 5);// eleman ekle
	push(s2, 15);
	push(s2, 25);
	push(s2, 35);
	printf("alinan deger: %d", pop(s2));
	printf("  ----:%d", s2->array[s2->top + 1]);
	peek(s2);
	return 0;
	
}
