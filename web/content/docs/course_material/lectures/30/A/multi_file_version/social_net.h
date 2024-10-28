#ifndef SOCIAL_NET_H
#define SOCIAL_NET_H


#include "linked_list.h"

#define MAX_NAME_LEN 100
#define MAX_MEMBERS 100
#define MAX_FRIENDS 10

typedef enum RelStatus {
	NotMentioned,
	Single,
	Engaged,
	Married
} RelStatus;


typedef struct Person {
	char name[MAX_NAME_LEN];
	int age;
	RelStatus status;
	struct Person* friends[MAX_FRIENDS];
	int friends_size;
} Person;


typedef struct SocialNet {
	//Person members[MAX_MEMBERS];
    LinkedList members;
	int size;
} SocialNet;



void print_list(LinkedList l);

void print_person(Person* p);
void print_socialnet(SocialNet *s);
void add_friend(Person* p, Person* f);

#endif SOCIAL_NET_H