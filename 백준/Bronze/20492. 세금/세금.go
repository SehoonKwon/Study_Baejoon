package main
import "fmt"

func main(){
	var N int;
	fmt.Scan(&N);
	fmt.Println(N*78/100, (N*80/100) + (N*20/100)*78/100);
}