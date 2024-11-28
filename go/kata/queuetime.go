package kata

func QueueTime(customers []int, n int) int {
	time := 0
	for tills := n; !isEmpty(customers); tills, time = n, time+1 {
		for i := 0; i < len(customers) && tills > 0; i++ {
			if customers[i] > 0 {
				customers[i]--
				tills--
			}
		}
	}
	return time
}

func isEmpty(customers []int) bool {
	for _, c := range customers {
		if c > 0 {
			return false
		}
	}
	return true
}
