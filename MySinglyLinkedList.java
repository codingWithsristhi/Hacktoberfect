package implementation;
import myinterface.SinglyLinkedListADT;

public class MySinglyLinkedList implements SinglyLinkedListADT {
    private Node head;
    private Node tail;
    //total no. of ele in linkled list
    private int size;
    // constructor
    public MySinglyLinkedList(){


        head = null;
        tail = null;
        size = 0;

    }

    @Override
    public boolean isEmpty() {
        return head == null;

    }

    @Override
    public int size() {
        return size;
    }

    @Override
    public void addFirst(int element) {
        Node node = new Node(element);
        if(isEmpty()){
            head = node;
            tail = node;
            size++;
    }
        else{
            node.setNext(head);
            head = node;
            size++;
        }

}
    //adding last element
    //adding at end
    //insert at tail
    @Override
    public void addLast(int element){
        Node node = new Node(element);
        //for special case list is empty
        if(isEmpty()){
            head = node;
            tail = node;
            //addFirst(element)
            size++;


        }

        else{
            tail.setNext(node);
            tail = node;
            size++;
        }


    }

//
//@Override
//traversing the linked list
    public void traverse(){
        Node temp = head;
        while(temp != null){
            System.out.print(temp.getData() + "-->");
            temp = temp.getNext();

        }
        System.out.println("null");


    }
    @Override
    public int removeFirst(){
        //special case when ;list is empty
        if(isEmpty()){
           return -1;//using -1, considering as invalid data

        }
        else{
            Node response = head;
            //special case
            if(head == tail){
                head = null;
                tail = null;
                size--;
            }
            else{
                head = head.getNext();
                size--;
            }
            return response.getData();
        }


    }
    @Override
    public int removeLast(){
        if(isEmpty()){
            return -1;
        }
        else{
            Node temp = head;
            Node previous = null;
            while(temp.getNext() != null){
                previous = temp;
                temp = temp.getNext();
            }
            //special case...
            if(previous == null);
            head = null;
            tail = null;
            size--;
        }
            else{
                return 0;
            }
    }
}
@Override
public boolean search(int element){
    Node temp = head;
    while (temp != null){
        if (head.getData()==element){
            return true;
        }
        temp = temp.getNext();

    }
    return false;
}