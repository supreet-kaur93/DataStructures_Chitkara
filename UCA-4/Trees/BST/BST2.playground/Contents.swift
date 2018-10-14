//Creating a binary search tree using recursion
import Foundation

class Node{
    var data : Int
    var left : Node?
    var right : Node?
    
    init(_ data:Int) {
        self.data = data
    }
}

class BST{
    var root : Node?
    init() {}
    
    func insertNode(root : Node?,value:Int)->Node{
        if(root==nil){
            return Node(value)
        }
        if(value<root!.data){
            root?.left = insertNode(root: root?.left, value: value)
        }else if (value>root!.data){
            root?.right = insertNode(root: root?.right, value: value)
        }
        return root!
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
for i in 1...6{
    obj.root = obj.insertNode(root: obj.root, value: i)
}
obj.preOrderPrint(obj.root)
