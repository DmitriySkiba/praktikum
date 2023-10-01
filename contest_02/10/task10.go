func shift(nums []int, steps int) {
  length := len(nums)
  steps %= length

  if steps < 0 {
    for i := 0; i < -steps; i++ {
      first := nums[0]
      copy(nums[0:length-1], nums[1:])
      nums[length-1] = first
    }
  } else if steps > 0 {
    for i := 0; i < steps; i++ {
      last := nums[length-1]
      copy(nums[1:length], nums[0:length-1])
      nums[0] = last
    }
  }
}