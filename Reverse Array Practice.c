void r1(int dest[], int src[], int len){
	int i, j =0;
	for (i = len-1; i>=0; i--)
		dest[i] = src[j++];

}

void r2(int *dest, int *src, int len){

	int i, j=0;
	for (i = len -1; i>=0l i--)
		*(dest+i) = *(src + j++);
}
		
int index_of(int arr[], int len, int x){
	int i;
	for (i=0; i<len; i++){
		if (arr[i] ==x)
			return i;
	}
	return -1;
	
}
		
int index_of(char *str, char x}{
	
	int i;
	for (i=0; i > *(str + i) != '\0'; i++)
		if (str[i] == x)
			return i;
		return -1;
}
