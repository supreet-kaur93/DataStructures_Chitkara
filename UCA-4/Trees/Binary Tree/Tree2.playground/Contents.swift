import Foundation

class Node{
    var data : Int
    var left : Node?
    var right : Node?
    
    init(_ data:Int) {
        self.data = data
    }
}

class Tree{
    var root : Node?
    
    init(_ value:Int) {
        root = Node(value)
    }
    
    init() {}
    
    func inOrderPrint(_ node:Node?){
        guard node != nil else{
            return
        }
        inOrderPrint(node?.left)
        print(node!.data)
        inOrderPrint(node?.right)
    }
    
    func preOrderPrint(_ node:Node?){
        guard node != nil else{
            return
        }
        print(node!.data)
        preOrderPrint(node?.left)
        preOrderPrint(node?.right)
    }
    
    func createLevelOrder(array:[String],_ index : Int) -> Node?{
        var temp : Node?
        if(index<array.count){
            guard array[index] != "-" else{
                return nil
            }
            temp = Node(Int(array[index])!)
            temp!.left = createLevelOrder(array: array, 2*index+1)
            temp!.right = createLevelOrder(array: array, 2*index+2)
        }
        return temp
    }
    
    func insertNode(value:Int){
        var queue = [Node]()
        queue.append(root!)
        let tempNode = Node(value)
        while(queue.count != 0){
            let temp = queue.remove(at: 0)
            if(temp.left != nil){
                queue.append(temp.left!)
            }else{
                temp.left = tempNode
                return
            }
            
            if(temp.right != nil){
                queue.append(temp.right!)
            }else{
                temp.right = tempNode
                return
            }
        }
    }
    
}

var obj = Tree()
obj.root = obj.createLevelOrder(array: ["1","2","3","4","5","-","-"], 0)
obj.preOrderPrint(obj.root)
print()
obj.inOrderPrint(obj.root)
print()
obj.insertNode(value: 10)
obj.preOrderPrint(obj.root)




