func isUnique(arr []int) bool {
	check1 := make(map[int]bool)
	for _, num := range arr {
		if check1[num] {
			return false
		}
		check1[num] = true
	}
	return true
}

func isValidSudoku(board [rows][cols]int) bool {
	for i := 0; i < rows; i++ {
		if !isUnique(board[i][:]) {
			return false
		}
	}

	for j := 0; j < cols; j++ {
		col := make([]int, rows)
		for i := 0; i < rows; i++ {
			col[i] = board[i][j]
		}
		if !isUnique(col) {
			return false
		}
	}

	return true
}

