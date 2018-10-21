int * sort(int * array, int arraySize){
	int i = 0;
	int buf;
	char swap_cnt = 0;

	if (array_size == 0)
		return (0);
	while (i < array_size)
	{
		if (i + 1 != array_size && array[i] > array[i + 1])
		{
			buf = array[i];
			array[i] = array[i + 1];
			array[i + 1] = buf;
			swap_cnt = 1;
		}
		i++;
		if (i == array_size && swap_cnt == 1)
		{
			swap_cnt = 0;
			i = 0;
		}
	}
	return array;
}

char * intRanges(int * array, int arraySize){
	char * result = "";
	int rangeS = array[0]
	int rangeE = rangeS;
	for(int i = 1; i < arraySize; i++){
		if (array[i] == array[i - 1] + 1) rangeE = array[i];
		else{
			if (rangeS == rangeE) result = result + rangeS.ToStr() + ",";
			result = result + rangeS.ToStr() + "-" + rangeE.ToStr() + ",";
			rangeS = rangeE = array[i]
		}
	}
	return result;
}
