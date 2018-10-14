import Foundation

class Node<T>{
    var data : T
    var left : Node?
    var right : Node?
    
    init(_ data:T) {
        self.data = data
    }
}

//Use of Generics
class Tree<T>{
    var root : Node<T>?
    
    init() {}
    
    func printPreOrder(_ node : Node<T>?){
        guard node != nil else{
            return
        }
        print(node!.data as Any)
        printPreOrder(node?.left)
        printPreOrder(node?.right)
    }
    
    func insertValues<T>(input array:[T],_ index:Int = 0) -> Node<T>?{
        guard index<array.count else{
            return nil
        }
        let temp = Node<T>(array[index])
        temp.left = insertValues(input: array,2*index+1)
        temp.right = insertValues(input: array,2*index+2)
        return temp
    }
    
    func getHeight<T>(from root:Node<T>?) -> Int{
        var queue = [Node<T>]()
        guard root != nil else {
            return 0
        }
        var count = 0
        queue.append(root!)
        while(!queue.isEmpty){
            count+=1
            var items = queue.count
            while(items > 0){
                items-=1
                let temp = queue.remove(at: 0)
                if(temp.left != nil){
                    queue.append(temp.left!)
                }
                if(temp.right != nil){
                    queue.append(temp.right!)
                }
            }
        }
        return count
    }
}

var obj = Tree<String>()
obj.root = obj.insertValues(input: ["6","7","8","9","10"])
obj.printPreOrder(obj.root)
print()
obj.getHeight(from: obj.root)
