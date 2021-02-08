package com.company;

public class ArrayStack implements Stack{
    private int top;
    private int stacksize;
    private char stackArr[];



    public ArrayStack(int stacksize) {
        top = -1;
        this.stacksize = stacksize;
        stackArr = new char[this.stacksize];
    }

    @Override
    public boolean isEmpty() {
        return (top == -1);
    }

    @Override
    public boolean isFull() {
        return (top == this.stacksize-1);
    }

    @Override
    public void push(char item) {
        if(isFull()) {
            System.out.println("stack is full");
        }
        else {
            stackArr[++top] = item;
            System.out.println("입력 값 : " + item);
        }

    }

    @Override
    public char pop() {
        if(isEmpty()) {
            System.out.println("Empty!");
            return 0;
        }
        else {
            System.out.println(" 삭제 =" +stackArr[top]);
            return stackArr[top--];
        }
    }

    @Override
    public char peek() {
        if(isEmpty()) {
            System.out.println("fail its empty");
            return 0;
        }
        else {
            System.out.println("peek :" +stackArr[top]);
            return stackArr[top];
        }

    }

    @Override
    public void clear() {
        if(isEmpty()) {
            System.out.println("이미 비었어");
        }
        else {
            top = - 1;
            stackArr = new char[this.stacksize];
            System.out.println("clear");
        }

    }

    public void printStack() {
        if (isEmpty()) {
            System.out.println("Stack is empty!");
        } else {
            System.out.print("Stack elements : ");
            for (int i = 0; i <= top; i++) {
                System.out.print(stackArr[i] + " ");
            }
            System.out.println();
        }
    }


}
