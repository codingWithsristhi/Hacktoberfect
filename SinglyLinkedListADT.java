package myinterface;

public interface SinglyLinkedListADT {
    void addFirst(int element);//O(1)

    boolean isEmpty();//O(1)

    int size();//O(1)

    void addLast(int element);//O(1)

    void traverse();//O(N)

    int removeFirst();//O(1)

    //deleteFromEnd
    int removeLast();
}