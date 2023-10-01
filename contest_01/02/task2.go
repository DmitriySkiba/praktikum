package main

import (
	"fmt"
    "math")

func main() {
	people := 0.5
	dub := 20
	topol := 32
	answ1 := people * 365
	answ2 := math.Ceil(answ1 / float64(topol))
	answ3 := math.Ceil(answ1 / float64(dub))
	fmt.Print(answ1, answ2, answ3)
}