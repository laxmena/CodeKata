bool checkPalindrome(node* root){

	//Create FastPointer and SlowPointer
	node* fp,*sp;
	fp = root;
	sp = root;

	//Create a stack to store first half characters of string
	stack<char> st;

	//Push first half elements into the stack
	while(fp->next != NULL && fp->next->next != NULL){
		st.push_back(sp->data);
		sp = sp->next;
		fp = fp->next->next;
	}

	sp = sp->next;

	//If the string is odd character, move slowPointer one step ahead
	if(fp->next != NULL)
		sp = sp->next;

	//Compare every following element with the stack
	while(sp != NULL){
	
		//If not same, return false - String is not a palindrome
		if(sp->data != st.front())
			return false;

		//Move slow pointer one step ahead, and pop the stack top
		st.pop();
		sp = sp->next;
	}
	return true;
}