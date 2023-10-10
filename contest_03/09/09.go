package main

import (
	"fmt"
	"sort"
)

func main() {
	var n, x int
	fmt.Scan(&n, &x)
	
	nums := make([]int, n)
	indexes := make(map[int]int)

	for i := 0; i < n; i++ {
		fmt.Scan(&nums[i])
		indexes[nums[i]] = i
	}

	answ := []int{}
	foundPair := false

	for i, num := range nums {
		diff := x - num
		if index, ok := indexes[diff]; ok && index != i {
			answ = append(answ, num)
			answ = append(answ, nums[index])
			foundPair = true
			break
		}
	}

	if foundPair {
		sort.Ints(answ)
		fmt.Println(answ[0], answ[1])
	} else {
		fmt.Println("0 0")
	}
}