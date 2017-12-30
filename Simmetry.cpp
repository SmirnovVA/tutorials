double aos = 0.0;

bool axisOfSymmetry(int x[n], int y[n]){ //O(n^2)
	int maxPoint, minPoint, xMax, xMin;
	xMin = xMax = 0;
	for(int i = 0; i < n; i++){	// search for min and max x in massive
		if(x[i] > xMax) {
			maxPoint = i
		}
		else if(x[i] < xMin){ 
			minPoint = i
		}
	}
	if (y[minPoint] != y[maxPoint])	return false; // axis of symmetry doesn't exist	because 2 extreme points doesn't reflects to each other
	else aos = (x[maxPoint] + x[minPoint])/2; //  x-value of axis
	for(i = 0; i < n; i++){ //check if aos is suitable for other points
		if(x[i] == aos) continue;// if point is on axis -> it reflects to itself -> go to next iteration
		else{
			for(j = 0; j < n; j++){ //search for pair to point with equal y-value		
				if(x[j] == (2 * aos - x[i])){
					if(y[i] == y[j]) continue;// if pair was found -> if y-value equal go to next iteration
				}
				if(j == n - 1) return false;// if pair with equal y-value wasn't found -> axis of symmetry doesn't exist
			}
		}
	}
	return true;
}


std::set<std::pair<int, int>> setOfPoints;

bool axisOfSymmetry2(int x[n], int y[n]){// O(n)
	int maxPoint, minPoint, xMax, xMin;
	xMin = xMax = 0;
	for(int i = 0; i < n; i++){	// search for min and max x in massive
		if(x[i] > xMax) {
			maxPoint = i
		}
		else if(x[i] < xMin){ 
			minPoint = i
		}
		setOfPoints.insert({x[i], y[i]});
	}
	if (y[minPoint] != y[maxPoint])	return false; // axis of symmetry doesn't exist	because 2 extreme points doesn't reflects to each other
	else aos = (x[maxPoint] + x[minPoint])/2; //  x-value of axis
	for(i = 0; i < n; i++){ //check if aos is suitable for other points		
		if(setOfPoints.find({2 * aos - x[i],y[i]}) == std::set::end) return false;
	}
	return true;
}