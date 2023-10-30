#include <stdio.h>

#define MAX_SIZE 3
int stack[MAX_SIZE];
int top = -1; 


void push(int value) {
    if (top < MAX_SIZE - 1) {
        stack[++top] = value;
    }
    else {
        printf("Stack is full. Cannot push %d\n", value);
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    }
    else {
        printf("Stack is empty. Cannot pop.\n");
        return -1; 
    }
}

int main() {
    push(1);
    push(2);
    push(3);

    int poppedValue1 = pop();
    int poppedValue2 = pop();
    int poppedValue3 = pop();

    printf("Popped values: %d, %d, %d\n", poppedValue1, poppedValue2, poppedValue3);

    return 0;
}
/*#include <stdio.h>: 이 줄은 기본 입력 및 출력 작업을 위한 표준 입력/출력 라이브러리를 포함시킵니다.

#define MAX_SIZE 3: 이 부분은 MAX_SIZE라는 상수를 정의하며 값은 3으로 설정되어 있습니다. 이 값은 스택이 저장할 수 있는 요소의 최대 개수를 나타냅니다.

int stack[MAX_SIZE]: 이 부분은 크기가 MAX_SIZE인 정수 배열 stack을 선언합니다. 이 배열은 스택의 요소를 저장하는 데 사용됩니다.

int top = -1;: top은 초기에 -1로 설정된 정수 변수로, 이것은 스택이 초기에 비어 있다는 것을 나타냅니다. 이 변수는 스택의 맨 위 요소를 추적합니다.

void push(int value): 이 함수는 스택에 요소를 푸시(추가)하는 데 사용됩니다. 정수 value를 인수로 받습니다. 이 함수의 작동은 아래와 같습니다:

top < MAX_SIZE - 1를 확인하여 스택이 가득 차지 않았는지 확인합니다.
스택이 가득 차지 않은 경우, top을 증가시키고 stack 배열에서 다음 사용 가능한 위치에 value를 할당합니다.
스택이 가득 찬 경우, 스택이 가득 찼다는 메시지를 표시하고 value를 스택에 추가하지 않습니다.
int pop(): 이 함수는 스택에서 요소를 팝(제거)하는 데 사용됩니다. 스택이 비어 있지 않은지 확인합니다.

스택이 비어 있지 않은 경우, 스택의 맨 위에서 값을 반환하고 top을 감소시킵니다.
스택이 비어 있는 경우, 스택이 비어 있다는 메시지를 표시하고 오류 코드로 -1을 반환합니다.
main 함수: 이 함수는 코드의 진입점이며 스택에 1, 2, 3을 차례대로 푸시하고, 그 다음에 팝하여 값을 제거합니다. 마지막으로 팝한 값들을 출력합니다.*/
