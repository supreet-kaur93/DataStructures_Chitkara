//Create a BST using postOrder and search for an Element in it
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
    
    func searchElement(value : Int,node:Node?)->Node?{
        guard node != nil else {
            return nil
        }
        if(node?.data == value){
            return node
        }
        if(value < node!.data){
            return searchElement(value: value, node: node?.left)
        }else if(value > node!.data){
            return searchElement(value: value, node: node?.right)
        }
        return nil
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
obj.insertData(input: [2,7,6,9,12,10,8].reversed())
obj.preOrderPrint(obj.root)
print()
if let _ = obj.searchElement(value: 7, node: obj.root){
    print("Found")
}else{
    print("Not Found")
}

