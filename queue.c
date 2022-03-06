#include "queue.h"


// Two glboal variables to store address of front and rear nodes.
sn* fr=NULL; 
sn* re=NULL;

void enqueue(int data){
  sn* temp=(sn*)malloc(sizeof(sn));
  temp->data=data;
  temp->next=NULL;
  if(fr == NULL && re == NULL){
    fr=re=temp;
    return;
  }
  re->next=temp;
  re=temp;
}

void dequeue(){
  if(fr == NULL){
    return;
  }
  sn* temp=fr;
  fr=fr->next;
  free(temp);
}

bool isEmpty(){
  if(fr == NULL && re == NULL){
    return true;
  }
  return false;
}

int front() {
	if(fr == NULL) {
		printf("Queue is empty\n");
		return 0;
	}
	return fr->data;
}


void print(){
	sn*temp=fr;
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}
