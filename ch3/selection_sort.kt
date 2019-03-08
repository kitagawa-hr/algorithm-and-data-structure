fun main() {
    val n = readLine()!!.toInt()
    val lis: MutableList<Int> = readLine()!!.split(" ").map(
        String::toInt
        ).toMutableList()
    selection_sort(lis, n)
}

fun selection_sort(lis: MutableList<Int>, n: Int) {
    var count = 0
    var j = 0
    while (j<n - 1) {
        var before = lis[j]
        var min = lis.slice(j..n - 1).min()
        var minIndex = lis.indexOf(min)
        lis[j] = lis[minIndex].also { lis[minIndex] = lis[j] }
        if (lis[j] != before) { count += 1 }
        j += 1
    }
    println(lis.joinToString((" ")))
    println(count)
}
