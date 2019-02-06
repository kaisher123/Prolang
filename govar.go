package main
import "fmt"
func main() {
	var a int = 5 	///Explicit
	var t bool 	    ///Explicit
	t = false 
	b := 6	///Implicit ใช้ ( := )ในการกำหนดแบบ Implicit
	b = 7  ///Implicit
	B := 7
	fmt.Println("a = ", a," b = ", b, "B = ", B, "t = ", t)
	c, d := 20,16	//c และ d เป็น Explicit
	fmt.Println("c = ", c," d = ", d)
	var e, f, g int	//Explicit
	e, f,g = 5, 6, 7
	fmt.Println("e = ", e,"f = ", f, "g = ", g)
	var h, i, j int = 5,6,7
	fmt.Println("h = ", h,"i = ", i, "j = ", j)
	var (		//Implicit ในvar แบบนี้ เป็น Implicit
		k int
		l float64
		m float32
	)
	k,l,m = 5, 6.6, 7.7
	fmt.Println("k = ", k,"l = ", l, "m = ", m)
	var (
		x = 5
		y = 10
		z = 20
	)
	z = x + y
	fmt.Println("z = " , z)

	bio := 2
	fmt.Println("BIO = ", bio)
}
