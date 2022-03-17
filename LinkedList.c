#include <stdio.h>
#include <stdlib.h>

typedef struct Type {
	int r;
	struct Type *t;
} Type;


Type* push(Type * n, int r) {
	Type *t = (Type *)malloc(sizeof(Type));
	t->r = r;
	t->t = n->t;
	
	n->t = t;
	return t;	
}


int main() {
	Type *t = (Type *)malloc(sizeof(Type));
	t->t = NULL;
	
	push(t, 10);
	push(t, 20);
	
	Type *r = t->t;
	
	while( t != NULL) {
		
		printf("%d\n", r->r);
		r = r->t;
	}
	

}
