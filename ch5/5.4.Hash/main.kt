fun main(args: Array<String>){
    val n = readLine()!!.toInt()
    val dict = Dict()
    repeat(n){
        val (query, s) = readLine()!!.split(' ')
        if(query == "insert"){dict.insert(s)}
        else if(query == "find") println(if (dict.find(s)) "yes" else "no")
    }
}

class Dict{
    private val arr = IntArray(30000000){ -1 }
    fun insert(element: String){
        arr[hash(element)] = 1
    }
    fun find(element: String): Boolean{
        return arr[hash(element)] == 1
    }
}

fun Int.pow(n: Int): Int = if(n == 0) 1 else this*this.pow(n-1)

fun hash(s: String): Int{
    var ret = 0
    for(i in 0 until s.length){
        val digit = when(s[i]){
            'A' -> 1
            'C' -> 2
            'G' -> 3
            'T' -> 4
            else -> 0
        }
        ret += 5.pow(i) * digit
    }
    return ret
}