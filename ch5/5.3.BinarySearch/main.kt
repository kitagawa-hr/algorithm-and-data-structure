fun main(args: Array<String>){
    val n = readLine()!!.toInt()
    val S = readLine()!!.split(' ').map{ it.toInt() }.distinct().sorted()
    val q = readLine()!!.toInt()
    val T = readLine()!!.split(' ').map{ it.toInt() }
    assert (n >= S.size)
    assert (q >= T.size)
    var ans = 0
    for(t in T){
        val idx = binarySearch(t, S)
        if (S[idx] == t) ans++
    }
    println(ans)
}

fun <T: Comparable<T>> binarySearch(element: T, list: List<T>): Int{
    var left = 0
    var right = list.size - 1
    while(left < right){
        val mid = (left+right)/2
        if (list[mid] > element){
            right = mid - 1
        }else if(list[mid] < element){
            left = mid + 1
        }else{ return mid }
    }
    return left
}