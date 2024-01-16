import java.util.Scanner

fun main() {
    val scanner = Scanner(System.`in`)
    var a: Int = scanner.nextInt()
    var x: Int = scanner.nextInt()
    var y: Int = scanner.nextInt()

    if (x > a || y > a || x < 0 || y < 0) {
        println("2")
    } else if (x == a || y == a || x == 0 || y == 0) {
        println("1")
    } else {
        println("0")
    }
}