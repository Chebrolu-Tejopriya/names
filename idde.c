#include <stdio.h>
#include<stdlib.h>
int main() {
    int s[100],top,i,pos,ch;
    do {
        printf("\n\n1.Insertion\n");
        printf("2.Deletion\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("\n\nEnter the operation that you want to perform: ");
        scanf("%d",&ch);
        system("clear");
        switch(ch) {
            case 1:
                printf("Enter how many elements you want to enter: ");
                scanf("%d",&top);
                for(i=0;i<top;i++) {
                    printf("enter number : ");
                    scanf("%d",&s[i]);
                }
            break;
            case 2:
                printf("Enter position to delete: ");
                scanf("%d",&pos);
                if(pos>top) {
                    printf("Position must be less than or equal %d",top);
                } 
                else {
                    printf("%d is deleted successful",s[pos-1]);
                    for(i=pos-1;i<top;i++) {
                        s[i]=s[i+1];
                    }
                    top--;
                }
            break;
            case 3:
                printf("\nYour Data\n");
                for(i=top-1;i>=0;i--) {
                    printf("%d\n",s[i]);
                }
            break;
            case 4:
                printf("Required operations are done");
            return 0;
        }
    }while(ch!=0);
}