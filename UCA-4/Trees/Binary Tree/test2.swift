import UIKit
class Node{
    var data : Int
    var left : Node?
    var right : Node?
    
    init(_ data:Int) {
        self.data = data
    }
}

class BinaryTree{
    var root : Node?
    
    init(_ root : Node?) {
        self.root = root
    }
    
    func preOrderSearch(node:Node?,value:Int)->Bool{
        if let temp = node{
            if(temp.data==value){
                return true
            }else{
                return preOrderSearch(node: node?.left, value: value) || preOrderSearch(node: node?.right,value:value)
            }
        }
        return false
    }
    
    func preOrderPrint(_ node:Node?){
        guard node != nil else {
            return
        }
        print(node!.data)
        preOrderPrint(node?.left)
        preOrderPrint(node?.right)
    }
    
    func levelOrderPrint(){
        var queue = [Node]()
        queue.append(root!)
        while queue.count>0 {
            print(queue[0].data)
            let temp = queue.remove(at: 0)
            if(temp.left != nil){
                queue.append(temp.left!)
            }
            if(temp.right != nil){
                queue.append(temp.right!)
            }
        }
    }
    
    func getHeight()->Int{
        var queue = [Node]()
        var height = 0
        queue.append(root!)
        while(true){
            var nodeCount = queue.count
            if(nodeCount == 0){
                return height
            }
            height += 1
            while(nodeCount>0){
                let temp = queue.remove(at: 0)
                if temp.left != nil {
                    queue.append(temp.left!)
                }
                if(temp.right != nil){
                    queue.append(temp.right!)
                }
                nodeCount -= 1
            }
        }
    }
    
}

// Test cases
// Set up tree
let tree = BinaryTree(Node(1))
tree.root?.left = Node(2)
tree.root?.right = Node(3)
tree.root?.left?.left = Node(4)
tree.root?.left?.right = Node(5)

// Test search
print(tree.preOrderSearch(node: tree.root, value: 4) as Any) // Should be true
print(tree.preOrderSearch(node: tree.root, value: 6) as Any) // Should be false
tree.preOrderPrint(tree.root) // Should be 1-2-4-5-3
print()
tree.levelOrderPrint()
tree.getHeight()

