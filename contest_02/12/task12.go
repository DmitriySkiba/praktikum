func fill(maze [][]int) {
 rows := len(maze)
 cols := len(maze[0])

 for i := 0; i < rows; i++ {
  for j := 0; j < cols; j++ {
   if maze[i][j] == -1 {
    continue
   }

   count:= 0
   for di := -1; di <= 1; di++ {
    for dj := -1; dj <= 1; dj++ {
     if di == 0 && dj == 0 {
      continue
     }

     newI := i + di
     newJ := j + dj

     if newI >= 0 && newI < rows && newJ >= 0 && newJ < cols && maze[newI][newJ] == -1 {
      count++
     }
    }
   }

   maze[i][j] = count
  }
 }
}
