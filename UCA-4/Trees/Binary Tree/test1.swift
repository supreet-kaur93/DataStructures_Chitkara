//Implementation of Linked Lists,Stack,Queue
import Foundation

var arr = [Int]()
arr.append(5)
arr.append(7)
arr.capacity
arr.count

//LINKED LIST

class Node{
    var data : Int
    var next : Node?
    
    init(_ value:Int) {
        self.data = value
    }
}

class LinkedList{
    var head : Node?
    
    init(head : Node) {
        self.head = head
    }
    
    func appendNode(_ temp : Node?){
        guard head != nil else{
            head = temp!
            return
        }
        
        var current = head
        while let _ = current?.next{
            current = current?.next
        }
        current?.next = temp
    }
    
    func traverse(){
        guard head != nil else {
            print("LL is empty")
            return
        }
        var current = head
        while let _ = current{
            print(current?.data as Any)
            current = current?.next
        }
    }
    
    // Get a node from a particular position.
    // Assume the first position is "1".
    // Return "nil" if position is not in the list.
    func getNode(atPosition position: Int) -> Node? {
        var current = head
        var count = 1
        while let _ = current {
            if(count==position){
                break
            }
            count += 1
            current = current?.next
        }
        return current
    }
    
    // Insert a new node at the given position.
    // Assume the first position is "1".
    // Inserting at position 3 means between
    // the 2nd and 3rd nodes.
    func insertNode(_ node: Node, at position: Int) {
        var count = 1
        var current = head
        while let _ = current {
            if(count==(position-1)){
                break
            }
            count += 1
            current = current?.next
        }
        let temp = current?.next
        current?.next = node
        node.next = temp
    }
    
    // Delete the first node with a given value.
    func deleteNode(withValue value: Int) {
        var current = head
        var prev : Node?
        while let _ = current{
            if(current?.data == value){
                break
            }
            prev = current
            current = current?.next
        }
        guard prev != nil else {
            head = current?.next
            return
        }
        prev?.next = current?.next
    }
    
    func getSize() -> Int{
        var count = 0
        var current = head
        while let _ = current {
            count += 1
            current = current?.next
        }
        return count
    }
}

//MARK : STACK
class Stack {
    var top : LinkedList?
    
    init(top : Node) {
        self.top = LinkedList(head: top)
    }
    
    func push(_ node:Node){
        let temp = node
        temp.next = top?.head
        top?.head = temp
    }
    
    func pop() -> Node?{
        guard let temp = top?.head else {
            return nil
        }
        top?.deleteNode(withValue: top!.head!.data)
        return temp
    }
    
    func traverseStack(){
        guard top?.head != nil else{
            print("Stack is Empty")
            return
        }
        top?.traverse()
    }
}


//MARK :QUEUE
class Queue{
    var storage = [Int]()
    
    init(head : Int) {
        storage.append(head)
    }
    
    //Add the elements to Queue
    func enqueue(_ element: Int){
        storage.append(element)
    }
    
    func peek() -> Int?{
        guard storage.count != 0 else{
            return nil
        }
        return storage[0]
    }
    
    func dequeue() -> Int?{
        guard storage.count != 0 else{
            return nil
        }
        return storage.remove(at: 0)
    }
}

// Test cases
// Set up some Nodes
let n1 = Node(1)
let n2 = Node(2)
let n3 = Node(3)
let n4 = Node(4)

/*
// Start setting up a LinkedList
let ll = LinkedList(head: n1)
ll.appendNode(n2)
ll.appendNode(n3)

// Test getNode(atPosition:)
print(ll.head!.next!.next!.data) // Should print 3
print(ll.getNode(atPosition: 3)!.data) // Should also print 3

// Test insert
ll.insertNode(n4, at: 3)
print(ll.getNode(atPosition: 3)!.data) // Should print 4 now

// Test delete(withValue:)
ll.deleteNode(withValue: 1)
print(ll.getNode(atPosition: 1)!.data) // Should print 2 now
print(ll.getNode(atPosition: 2)!.data) // Should print 4 now
print(ll.getNode(atPosition: 3)!.data) // Should print 3
*/

// MARK: STACK
/*
// Start setting up a Stack
let stack = Stack(top: n1)

// Test stack functionality
stack.push(n2)
stack.push(n3)
print(stack.pop()!.data) // Should be 3
print(stack.pop()!.data) // Should be 2
print(stack.pop()!.data) // Should be 1
print(stack.pop()?.data as Any) // Should be nil
stack.push(n4)
print(stack.pop()!.data) // Should be 4
stack.traverseStack()
 */

//MARK : QUEUE TC
 // Setup
 let q = Queue(head: 1)
 q.enqueue(2)
 q.enqueue(3)
 
 // Test peek
 print(q.peek()!) // Should be 1
 
 // Test dequeue
 print(q.dequeue()!) // Should be 1
 
 // Test enqueue
 q.enqueue(4)
 print(q.dequeue()!) // Should be 2
 print(q.dequeue()!) // Should be 3
 print(q.dequeue()!) // Should be 4
 q.enqueue(5)
 print(q.peek()!) // Should be 5


