// Calls sum(g, i, j) and returns g(i) +...+g(j)
int f(int i){}

int sum(int (*f)(int), int start, int end){
	int total = 0;
	for (int i = start; i <= end; i++){
	 	total += f(i);
	return total;
}}
