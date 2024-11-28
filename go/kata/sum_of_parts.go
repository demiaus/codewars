package kata

func PartsSums(ls []uint64) []uint64 {
	result := make([]uint64, len(ls)+1)
	for _, n := range ls {
		result[0] += n
	}
	for i := 1; i < len(ls); i++ {
		result[i] = result[i-1] - ls[i-1]
	}

	return result
}
