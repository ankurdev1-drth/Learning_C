#include <stdio.h>
#include <stdlib.h>
struct node {
	int value;
struct node* next;
};

struct node* filling_list(struct node* list, int value){
	struct node* temp; // creating a temporary variable 
	temp = malloc(sizeof(struct node)); // giving it memory
	if(temp == NULL){
		printf("ERROR malloc failed.");
		return list;		
	}
	temp->value = value;
	temp->next = list;
	return temp;
}



int main(){
	struct node* first = NULL;
	int value = 20;
	first = filling_list(first, 10);
	first = filling_list(first, 20);
	first = filling_list(first, 30);
	first = filling_list(first, 40);
	for (struct node*p = first; p != NULL; p = p->next){
		printf("%d ", p->value);
	}
	printf("\n");
	
	return 0;
}
