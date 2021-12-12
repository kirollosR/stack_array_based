#define MAX 10

typedef int EntryType;
typedef struct
{
    int top;
    EntryType entry[MAX];
} StackType;

void CreateStack(StackType *);
int StackEmpty(StackType);
int StackFull(StackType);
void Push(EntryType,StackType *);
void Pop(EntryType *,StackType *);

//int check_parantheses(char arr[20]);
