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
    var queue = [Int]()
    
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
    
    func isAvaliable(_ node : Node?,_ value:Int)->Bool{
        guard node != nil else{
            return false
        }
        if(node?.data==value){
            return true
        }
        return isAvaliable(node?.left, value) || isAvaliable(node?.right, value)
    }
    
    func deleteNode(_ node:inout Node?,_ value:Int) -> Node?{
        guard node != nil else{
            return nil
        }
        if(value < node!.data){
            node?.left = deleteNode(&node!.left, value)
        }else if (value > node!.data){
            node?.right = deleteNode(&node!.right, value)
        }else{
            if(node?.right==nil && node?.left==nil){
                node = nil
            }else if(node?.right == nil && node?.left != nil){
                return node?.left
            }else if(node?.right != nil && node?.left == nil){
                return node?.right
            }else{
                
            }
        }
        return node
    }
    
    
    func clearQueue(){
        queue.removeAll()
    }
    
    func inOrderPrint(_ node : Node?){
        guard node != nil else {
            return
        }
        inOrderPrint(node?.left)
        print(node!.data)
        inOrderPrint(node?.right)
    }
    
    func inOrderQueue(_ node:Node?){
        guard node != nil else {
            return
        }
        inOrderQueue(node?.left)
        queue.append(node!.data)
        inOrderQueue(node?.right)
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
//obj.deleteNode(&obj.root, 20)
print()
obj.inOrderQueue(obj.root)
print(obj.queue)



