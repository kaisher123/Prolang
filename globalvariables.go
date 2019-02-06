package main
import "fmt"
var a int = 0
func main() {
	{
		a := 5
		fmt.Println("a = ", a)
	}
	fmt.Println("a = ", a)
} 