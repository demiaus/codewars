package main

import (
	"fmt"
	"kata/kata"
)

func main() {

	// fmt.Println(kata.QueueTime([]int{5, 3, 4}, 1))
	// fmt.Println("should return 12")
	// fmt.Println(kata.QueueTime([]int{10, 2, 3, 3}, 2))
	// fmt.Println("should return 10")
	// fmt.Println(kata.QueueTime([]int{2, 3, 10}, 2))
	// fmt.Println("should return 12")

	//fmt.Println(kata.SpinWords("Hey fellow warriors"))
	//// --> "Hey wollef sroirraw"
	//fmt.Println(kata.SpinWords("This is a test"))
	////--> "This is a test"
	//fmt.Println(kata.SpinWords("This is another test"))
	//// --> "This is rehtona test"

	//var a1 = []int{121, 144, 19, 161, 19, 144, 19, 11}
	//var a2 = []int{11 * 11, 121 * 121, 144 * 144, 19 * 19, 161 * 161, 19 * 19, 144 * 144, 19 * 19}
	//fmt.Println(kata.Comp(a1, a2))
	////true
	//a1 = []int{121, 144, 19, 161, 19, 144, 19, 11}
	//a2 = []int{11 * 21, 121 * 121, 144 * 144, 19 * 19, 161 * 161, 19 * 19, 144 * 144, 19 * 19}
	//fmt.Println(kata.Comp(a1, a2))
	//// false
	//a1 = nil
	//a2 = []int{11 * 11, 121 * 121, 144 * 144, 19 * 19, 161 * 161, 19 * 19, 144 * 144, 19 * 19}
	//fmt.Println(kata.Comp(a1, a2))
	//// false

	// fmt.Println(kata.GetSum(0, 1))
	// fmt.Printf("Expected: 1\n\n")
	// fmt.Println(kata.GetSum(1, 2))
	// fmt.Printf("Expected: 3\n\n")
	// fmt.Println(kata.GetSum(5, -1))
	// fmt.Printf("Expected: 14\n\n")
	// fmt.Println(kata.GetSum(505, 4))
	// fmt.Printf("Expected: 127759\n\n")
	// fmt.Println(kata.GetSum(321, 123))
	// fmt.Printf("Expected: 44178\n\n")
	// fmt.Println(kata.GetSum(0, -1))
	// fmt.Printf("Expected: -1\n\n")
	// fmt.Println(kata.GetSum(-50, 0))
	// fmt.Printf("Expected: -1275\n\n")
	// fmt.Println(kata.GetSum(-1, -5))
	// fmt.Printf("Expected: -15\n\n")
	// fmt.Println(kata.GetSum(-5, -5))
	// fmt.Printf("Expected: -5\n\n")
	// fmt.Println(kata.GetSum(-505, 4))
	// fmt.Printf("Expected: -127755\n\n")
	// fmt.Println(kata.GetSum(-321, 123))
	// fmt.Printf("Expected: -44055\n\n")
	// fmt.Println(kata.GetSum(0, 0))
	// fmt.Printf("Expected: 0\n\n")
	// fmt.Println(kata.GetSum(-5, -1))
	// fmt.Printf("Expected: -15\n\n")
	// fmt.Println(kata.GetSum(5, 1))
	// fmt.Printf("Expected: 15\n\n")
	// fmt.Println(kata.GetSum(-17, -17))
	// fmt.Printf("Expected: -17\n\n")
	// fmt.Println(kata.GetSum(17, 17))
	// fmt.Printf("Expected: 17\n\n")

	// fmt.Println(kata.Alphanumeric(".*?"))
	// fmt.Printf("Expected: false\n\n")
	// fmt.Println(kata.Alphanumeric("a"))
	// fmt.Printf("Expected: true\n\n")
	// fmt.Println(kata.Alphanumeric("Mazinkaiser"))
	// fmt.Printf("Expected: true\n\n")
	// fmt.Println(kata.Alphanumeric("hello world_"))
	// fmt.Printf("Expected: false\n\n")
	// fmt.Println(kata.Alphanumeric("PassW0rd"))
	// fmt.Printf("Expected: true\n\n")
	// fmt.Println(kata.Alphanumeric("     "))
	// fmt.Printf("Expected: false\n\n")
	// fmt.Println(kata.Alphanumeric(""))
	// fmt.Printf("Expected: false\n\n")
	// fmt.Println(kata.Alphanumeric("\n\t\n"))
	// fmt.Printf("Expected: false\n\n")
	// fmt.Println(kata.Alphanumeric("ciao\n$$_"))
	// fmt.Printf("Expected: false\n\n")
	// fmt.Println(kata.Alphanumeric("__ * __"))
	// fmt.Printf("Expected: false\n\n")
	// fmt.Println(kata.Alphanumeric("&)))((("))
	// fmt.Printf("Expected: false\n\n")
	// fmt.Println(kata.Alphanumeric("43534h56jmTHHF3k"))
	// fmt.Printf("Expected: true\n\n")

	fmt.Printf("%v\n", kata.PartsSums([]uint64{}))
	fmt.Printf("[0]\n\n")
	fmt.Printf("%v\n", kata.PartsSums([]uint64{0, 1, 3, 6, 10}))
	fmt.Printf("[20 20 19 16 10 0]\n\n")
	// fmt.Printf("%v\n", kata.PartsSums([]uint64{1, 2, 3, 4, 5, 6}))
	// fmt.Printf("Expected: {21, 20, 18, 15, 11, 6, 0}\n\n")
	// fmt.Printf("%v\n", kata.PartsSums([]uint64{744125, 935, 407, 454, 430, 90, 144, 6710213, 889, 810, 2579358}))
	// fmt.Printf("Expected: {10037855, 9293730, 9292795, 9292388, 9291934, 9291504, 9291414, 9291270, 2581057, 2580168, 2579358, 00}\n\n")

}
