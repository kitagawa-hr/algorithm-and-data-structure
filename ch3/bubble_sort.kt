fun main() {
    while (true) {
        val n = readLine()!!.toInt()
        if (n == 0) { return }
        val lis: MutableList<Int> = mutableListOf()
        for (i in 1..n) {
            var tmp = readLine()!!.toInt()
            lis.add(tmp)
        }
        bubble_sort(lis, n)
    }
}

fun bubble_sort(lis: MutableList<Int>, n: Int) {
    var count = 0
    var flag = true
    while (flag) {
        flag = false
        for (i in n - 1 downTo 1) {
            if (lis[i - 1] > lis[i]) {
                lis[i] = lis[i - 1].also { lis[i - 1] = lis[i] }
                count += 1
                flag = true
            }
        }
    }
    // println(lis.joinToString(" "))
    println(count)
    return
}
