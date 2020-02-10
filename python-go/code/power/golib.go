package main

import "C"

//export Power
func Power(a, b int) int {
	for i := 0; i < b; i++ {
		a += a
	}

	return a
}

func main() {}
