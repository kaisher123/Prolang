package main
import "fmt"
func main() {
	var a float64 = 5.5
	//func1(int (a)) 
	var (
		b int = 0 
		c float64
	)
	c = a + b
	fmt.Println ("c = ", c)

}
func func1(val int)  {
	fmt.Println("val = ", val)
	
}