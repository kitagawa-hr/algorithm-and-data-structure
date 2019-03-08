fun main() {
    val inputs = readLine()!!.split(" ").map(String::toInt).sortedDescending()
    val ans = inputs.slice(0..2).joinToString(separator = " ")
    println(ans)
}
