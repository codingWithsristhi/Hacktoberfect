package infix.postfix;

import java.util.Stack;

public class InfixToPostfix {
    public String infixPostfix(String infix){
        String postfix = "";
        //step 1
        Stack<Character> stack = new Stack<>();
        stack.push('(');
        infix = infix + ')';
        //step 2
        for (int i = 0; i < infix.length(); i++){
            char element = infix.charAt(i);
            //step 3
            if(Character.isAlphabetic(element) || Character.isDigit(element)){
                    postfix = postfix + element;
            }
            //step 4
            else if(element == '('){
                stack.push(element);
            }
            //step 5
            else if(isOperator(element)){
                while(!stack.empty()){
                    //step 5.a
                    if(precedence(stack.peek()) >= precedence(element)){
                        //leaving space fo associativity
                        postfix = postfix + stack.pop();
                    }
                    //step 5.b
                    else{
                        stack.push(element);
                        break;
                    }
                }
            }
            //step 6
            else if(element == ')'){
                while (!stack.empty() && stack.peek() != '('){
                    postfix = postfix + stack.pop();
                    if(!stack.empty() && stack.peek() == '('){
                        stack.pop();
                    }
                }
            }
        }


        return postfix;
    }
    private boolean isOperator(char elementFromInfix) {
        boolean response = false;
        switch (elementFromInfix){
            case '^':
            case '/':
            case '*':
            case '+':
            case '-':
                response = true;
        }

        return response;
    }
    private int precedence(char operator){
        int response = 0;
        response = switch (operator) {
            case '^' -> 3;
                case '*','/' -> 2;
                case '+', '-' ->1;
                default ->0;
        };
        return response;
    }
}
