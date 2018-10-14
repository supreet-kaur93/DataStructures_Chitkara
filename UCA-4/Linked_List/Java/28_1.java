//Implementation of Doubly Linked Lists
import java.util.*;

class Node{
	int data;
	Node next;
	Node prev;

	public Node(int data,Node next,Node prev){
		this.data = data;
		this.next = next;
		this.prev = prev;
	}
}

class LL{
	public Node head = null;
	public void insertNode(int value){
		if(head == null){
			head = new Node(value,null,null);
		}else{
			Node current = head;
			while(current.next!=null){
				current = current.next;
			}
			current.next = new Node (value,null,current);
		}
	}

	public void traverse(){
		Node current = head;
		while(current!=null){
			System.out.println(current.data);
			current = current.next;
		}
	}

	public void insertNodeBeg(int value){
		if (head==null) {
			head = new Node(value,null,null);
		}else{
			Node temp = new Node(value,head,null);
			head = temp;
		}
	}

	public int countNodes(){
		int count = 0;
		Node current = head;
		while(current!=null){
			count++;
			current = current.next;
		}
		return count;
	}

}

class Test{
	public static void main(String[] args) {
		LL obj1 = new LL();
		obj1.insertNode(5);
		obj1.insertNode(6);
		obj1.insertNodeBeg(7);
		obj1.traverse();
		System.out.println(obj1.countNodes());
	}
}

