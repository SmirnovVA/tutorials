class Tree{
	int data;
	Tree * leftSubTree;
	Tree * rightSubTree;
};

Tree* findInTree(Tree * treeRoot, const int element){
	if(!treeRoot) return NULL;
	if(treeRoot->data == element) return treeRoot;
	if(element < treeRoot->data)return findInTree(treeRoot->leftSubTree,element);
	return findInTree(treeRoot->rightSubTree,element);
}

int * findInArray(int * treeArray, int element, int index){
	if(*(treeArray + index) == NULL) 
		return NULL;
	if(*(treeArray + index) == element)
		return *(treeArray + index);
	if(element < *(treeArray + index))
		return findInArray(treeArray,element,2*index + 1);
	return findInArray(treeArray,element,2*index + 2);
}
