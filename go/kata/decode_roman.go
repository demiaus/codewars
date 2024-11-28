package kata

var romans = map[byte]int{
	'I': 1,
	'V': 5,
	'X': 10,
	'L': 50,
	'C': 100,
	'D': 500,
	'M': 1000,
}

func Decode(s string) int {

	var sum int
	var prev byte
	for i := len(s) - 1; i >= 0; i-- {
		if romans[s[i]] > sum || s[i] == prev {
			sum += romans[s[i]]
			prev = s[i]
		} else {
			sum -= romans[s[i]]
			prev = s[i]
		}
	}

	return sum
}
