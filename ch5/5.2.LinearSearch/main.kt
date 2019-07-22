fun main(args: Array<String>){
    val n = readLine()!!.toInt()
    val S = readLine()!!.split(' ').map{ it.toInt() }
    val q = readLine()!!.toInt()
    val T = readLine()!!.split(' ').map{ it.toInt() }
    assert (n == S.size)
    assert (q == T.size)
    var ans = 0
    for(t in T){
        for(s in S){
            if (t == s) {
                ans++
                break
            }
        }
    }
    println(ans)
}