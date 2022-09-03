#include<stdio.h>

typedef struct person{
    int age;
    float weight;
} Person;

int main(){
    Person *personPtr, person1;

    personPtr = &person1;

    printf("Enter age: ");
    scanf("%d", &personPtr->age);//personPtr->age is equivalent to (*personPtr).age

    printf("Enter weight: ");
    scanf("%f", &personPtr->weight);//personPtr->weight is equivalent to (*personPtr).weight

    printf("Displaying:\n");
    printf("age: %d\n", personPtr->age);
    printf("weight: %f", personPtr->weight);
    }

/*In this example, the address of person1 is stored in the personPtr pointer using personPtr = &person1;.

Now, you can access the members of person1 using the personPtr pointer.

By the way,

personPtr->age is equivalent to (*personPtr).age
personPtr->weight is equivalent to (*personPtr).weight*/