template < class element >
void BubbleSort( apvector<element> & list, int n ) {
	int j, k;
	bool ExchangeMode;
	element temp;
	k = 0;
	ExchangeMode = true;				// outer:
	while (  k < n - 1  && ExchangeMode ) {	//to control the # of passes through the vector.
		ExchangeMode = false;
		++k;					//inner:
		for ( int j = 0 ; j < n-k ; ++j ) { //to control the pairs of adjacent entries being compared
			if ( list[ j ] > list[ j+1 ] ) {
				temp = list[ j ];
				list[ j ] = list[ j+1 ];
				list[ j+1 ] = temp;
				ExchangeMode = true;
			}
        }
	}
}
