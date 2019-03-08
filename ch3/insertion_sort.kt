fun main() {
    val n = readLine()!!.toInt()
    val lis: MutableList<Int> = readLine()!!.split(" ").map(
        String::toInt
        ).toMutableList()
    insertion_sort(lis, n)
}

fun insertion_sort(data: MutableList<Int>, n: Int) {
    println(data.joinToString(" "))
    for (i in 1..n-1) {
        var tmp = data[i]
        if (data[i - 1] > tmp) {
            var j = i
            do {
                data[j] = data[j - 1]
                j--
            } while (j > 0 && data[j - 1] > tmp)
            data[j] = tmp
        }
        println(data.joinToString(" "))
    }
}
