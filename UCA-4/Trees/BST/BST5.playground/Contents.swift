//Creating a Simple Binary Search Tree and Print Elements in range given
import Foundation

class Node{
    var data : Int
    var left : Node?
    var right : Node?
    
    init(_ data:Int) {
        self.data = data
    }
}

var queue = [Int]()

class BST{
    var root : Node?
    
    init() {}
    
    func insertData(input arr:[Int]){
        
        for item in arr {
            if root == nil{
                self.root = Node(item)
                continue
            }
            var current = root
            while(true){
                if( item < current!.data){
                    if(current?.left != nil){
                        current = current?.left
                    }else{
                        current?.left = Node(item)
                        break;
                    }
                }
                else if(item > current!.data){
                    if current?.right != nil {
                        current = current?.right
                    }else{
                        current?.right = Node(item)
                        break;
                    }
                }
                
            }
        }
    }
    //Method - 1
    //Using Inorder Traversal
    func rangePrint(_ node : Node?,from r1:Int,to r2:Int){
        guard node != nil else {
            return
        }
        rangePrint(node?.left,from: r1,to: r2)
        if(node!.data >= r1 && node!.data <= r2){
            print(node?.data as Any)
        }
        rangePrint(node!.right,from: r1,to: r2)
    }
    //Method - 2
    //Using Queue
    func rangePrint2(_ node:Node?,from r1:Int,to r2:Int){
        guard node != nil else {
            return
        }
        if(node!.data >= r1 && node!.data <= r2){
            queue.append(node!.data)
        }
        rangePrint2(node?.left, from: r1, to: r2)
        rangePrint2(node?.right, from: r1, to: r2)
    }
    
    func preOrderPrint(_ node : Node?){
        guard node != nil else {
            return
        }
        print(node!.data)
        preOrderPrint(node?.left)
        preOrderPrint(node?.right)
    }
}


var obj = BST()
obj.insertData(input: [10,5,1,6,20,15,24,12])
obj.preOrderPrint(obj.root)
obj.rangePrint(obj.root, from: 10, to: 30)
print()
obj.rangePrint2(obj.root, from: 10, to: 30)
print(queue)



