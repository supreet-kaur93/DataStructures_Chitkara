import Swift

//Function For Linear Search
//Returns Index if Found Else -1
func linearSearch(arr:[Int],num : Int) -> Int {
    for (index,value) in arr.enumerated() {
        if (num == value){
            return index;
        }
    }
    return -1;
}

// MARK: MAIN PROGRAM

//Change Values If You want
var arr : [Int] = [1,2,3,4,5]
var numToFound = 5;
print("Number Found At \(linearSearch(arr:arr,num:numToFound))")
