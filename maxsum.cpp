int resultSum = 0;
int segmentBegin, segmentEnd;

void maxSum(int x[], int size){
	resultSum = x[0];
	int currentSum = 0;
	int newSegmentBegin = 0;
	for(int i = 0; i < size; i++){
		currentSum += x[i];
		if(currentSum >= resultSum){
			resultSum = currentSum;
			segmentBegin = newSegmentBegin;
			segmentEnd = i;
		}
		if(currentSum < 0){
			currentSum = 0;
			newSegmentBegin = i + 1;
		}
	}
}
