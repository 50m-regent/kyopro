package main

import (
	"fmt"
	"bufio"
	"os"
	"strconv"
)

var sc = bufio.NewScanner(os.Stdin)
func in() int {
	sc.Scan()
	i, _ := strconv.Atoi(sc.Text())
	return i
}
func str() string {
	sc.Scan()
	return sc.Text()
}

var out = fmt.Println

func main() {
	n := float64(in())
	out(float64(int((n + 1) / 2)) / n)
}
