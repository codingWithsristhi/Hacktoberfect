package main;

import infix.postfix.InfixToPostfix;

public class MyMain {
    public static void main(String[] args) {
        InfixToPostfix converter = new InfixToPostfix();
        String infix = "2^2^3";
        String postfix = converter.infixPostfix(infix);
        System.out.println("postfix => " + postfix);
    }
}
