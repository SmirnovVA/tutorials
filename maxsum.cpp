int resultSum = 0;

void maxSum(int x[], int size){
	resultSum = x[0];
	int currentSum = 0;
	int segmentBegin = 0, segmentEnd;
	for(int i = 0; i < size; i++){
		currentSum += x[i];
		if(currentSum >= resultSum){
			resultSum = currentSum;
			segmentEnd = i;
		}
		if(currentSum < 0){
			currentSum = 0;
			segmentBegin = i + 1;
		}
	}
}