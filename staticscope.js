function big() {
	function sub1() {
		var x = 7;
		sub2();
		console.log("sub1 x = " + x);
	}
	function sub2() {
		var y = x;
		console.log("sub2 y = " + y);
	}
	x = 3;
	sub1();
} 
big();
