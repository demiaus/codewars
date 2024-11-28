package kata

import "sort"

func Comp(array1 []int, array2 []int) bool {

	if array1 == nil || array2 == nil || len(array1) != len(array2) {
		return false
	}

	for i := range array1 {
		array1[i] = array1[i] * array1[i]
	}

	sort.Ints(array1)
	sort.Ints(array2)

	for i := 0; i < len(array1); i++ {
		if array1[i] != array2[i] {
			return false
		}
	}

	return true
}
