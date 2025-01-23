#define  N s;
int stack[N];
int top =-1;
void Push(){
int x;
printf("Enter data : ");
scanf("%d",&x);
if(top == N-1){
    printf("Overflow");
}else{
top++;
stack[top]=x;
}
}
void pop(){
int item;
if(top == -1){
    printf("Underflow");
}else{
item =stack[top];
top--;
printf("%d",item)
}

void Peek(){
if(top == -1){
    printf("Not possible");
}else
{
    item = stack[top];
    top--;
    printf("%d",item);
}
}
void display(){
int i;
for(i=top;i>=0;i--){
    printf("%d",stack[i]);
}
}



void main()
{
    int ch;
    close();
    do{
        printf("Enter choice :1 push 2 : pop 3 :peek 4: display");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1 : Push();
            break;
            case 2 : Pop();
            break;
            case 3 : Peek();
            break;
            case 4 : Display();
            break;
            default:printf("invalid choice");
        }
    }while(ch != 0)
    getch();
}
