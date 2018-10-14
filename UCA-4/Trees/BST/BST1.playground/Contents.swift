//Creating a Simple Binary Search Tree without using recursion
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
obj.insertData(input: [1,2,3,4,5,6])
obj.preOrderPrint(obj.root)
