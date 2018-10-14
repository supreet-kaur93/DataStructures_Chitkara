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

class BST{
    var root = [Node?]()
    
    init() {}
    
    func insertData(input arr:[Int]){
        
        for item in arr {
            if root.count == 0{
                self.root.append(Node(item))
                continue
            }
            var current = root[0]
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
    
    func queryTree(from r1:Int,to r2:Int){
        let middle = floor(Double((r1+r2)/2))
        print(middle)
    }
    
}


var obj = BST()
obj.insertData(input: [10,5,1,6,20,15,24,12])
//obj.preOrderPrint(obj.root[0])
obj.queryTree(from: 2, to: 16)




