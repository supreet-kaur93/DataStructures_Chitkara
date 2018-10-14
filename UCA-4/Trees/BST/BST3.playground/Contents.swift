//Creating BST From Pre Order Data
//Complexity O(n)
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
    
    func insertNode(value:Int){
        if(root==nil){
            root = Node(value)
            return
        }
        var current = root
        while(true){
            if(value<current!.data){
                if(current?.left != nil){
                    current = current?.left
                }else{
                    current?.left = Node(value)
                    break
                }
            }
            else if(value > current!.data){
                if current?.right != nil {
                    current = current?.right
                }else{
                    current?.right = Node(value)
                    break
                }
            }
        }
    }
    
    func preOrderPrint(_ node : Node?){
        guard node != nil else {
            return
        }
        print(node!.data)
        preOrderPrint(node?.left)
        preOrderPrint(node?.right)
    }
    func inOrderPrint(_ node : Node?){
        guard node != nil else {
            return
        }
        inOrderPrint(node?.left)
        print(node?.data)
        inOrderPrint(node?.right)
    }
    
}

var obj = BST()
//Pre Order Data
let arr = [5,1,8,6,7]
for item in arr{
    obj.insertNode(value: item)
}
obj.preOrderPrint(obj.root)
print()
obj.inOrderPrint(obj.root)
