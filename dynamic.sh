big() {
	sub2() {
		y=$x
		echo "sub2 y = $y"
	}
	sub1() {
		local x=7
		sub2
		echo "sub1 x = $x"
	}
	x=5
	sub1
	echo "big x = $x"
}
big
