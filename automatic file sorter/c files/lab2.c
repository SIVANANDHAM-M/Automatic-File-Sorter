 #include <stdio.h>

int arr[100];
int size=0;

void printList(const char* msg) {
    printf("%s: ",msg);
    for (int i=0;i<size;i++)
    printf("%d ",arr[i]);
    printf("\n");
}

void insertBeginning(int val) {
     for (int i=size;i>0;i--) arr[i] = arr[i - 1];
    arr[0]=val;
    size++;
}

void insertEnd(int val) {
    arr[size++]=val;
}

 void insertAtPosition(int val, int pos) {
    if (pos<1||pos>size+1) return;
    for (int i=size;i>=pos;i--) arr[i]=arr[i - 1];
    arr[pos - 1]=val;
    size++;
}

void insertAfterPosition(int val, int pos) {
    insertAtPosition(val,pos + 1);
}

void insertAfterElement(int val, int elem) {
    int found=0;
    for (int i=0;i<size;i++) {
        if (arr[i]==elem) {
            insertAtPosition(val,i + 2);
            found=1;
            break;
        }
    }
    if (!found) {
        insertEnd(val);
    }
}

void deleteAtPosition(int pos) {
    if (pos<1||pos>size) return;
    for (int i=pos-1;i<size-1;i++) arr[i]=arr[i + 1];
    size--;
}

void deleteAfterPosition(int pos) {
    deleteAtPosition(pos + 1);
}

void deleteFirst() {
    deleteAtPosition(1);
}

void deleteLast() {
    if (size > 0) size--;
}

void deleteElement(int val) {
    for (int i=0;i<size;i++) {
        if (arr[i]==val) {
            deleteAtPosition(i + 1);
            break;
        }
    }
}

void deleteAfterElement(int val) {
    for (int i=0;i<size-1;i++) {
        if (arr[i]==val) {
            deleteAtPosition(i + 2);
            break;
        }
    }
}

void retrieveAtPosition(int pos) {
    if (pos >=1&&pos<=size)
        printf("Element at position %d is %d\n",pos,arr[pos - 1]);
    else
        printf("Invalid position %d\n",pos);
}

int main() {
    // Initial array
    int initial[] ={10, 20, 30};
    for (int i = 0;i<3;i++) arr[size++] = initial[i];
    printList("Initial list");

    //Insert at beginning
    insertBeginning(5);
    printList("After inserting 5 at beginning");

    //Insert at end
    insertEnd(40);
    printList("After inserting 40 at end");

    //Insert at 3rd position
    insertAtPosition(25, 3);
    printList("After inserting 25 at position 3");

    //Insert after 4th position
    insertAfterPosition(35, 4);
    printList("After inserting 35 after position 4");

    //Insert after element 20 (if not found, insert at end)
    insertAfterElement(22, 20);
    printList("After inserting 22 after element 20");

    //Delete at position 3
    deleteAtPosition(3);
    printList("After deleting element at position 3");

    //Delete after position 4
    deleteAfterPosition(4);
    printList("After deleting element after position 4");

    //Delete first element
    deleteFirst();
    printList("After deleting first element");

    //Delete last element
    deleteLast();
    printList("After deleting last element");

    //Delete element 22
    deleteElement(22);
    printList("After deleting element 22");

    //Delete after element 20
    deleteAfterElement(20);
    printList("After deleting element after 20");

    //Display all elements
    printList("Final list");

    //Retrieve element at position 2
    retrieveAtPosition(2);

    return 0;
}
