# UP---2016-2017

HELLO WORLD



	int x; 
	cout << "Choose a figure" << endl
		<< "Press 1 for triangle" << endl
		<< "Press 2 for square" << endl
		<< "press 3 for circle" << endl
		<< "Press 4 for rectangle" << endl
		<< "Press 5 for trapeze" << endl;
	cin >> x;

	switch (x)
	{
	case 1: int a, b, c, h;
		cout << "Enter whole numbers for a , b , c and h" << endl;
		cin >> a >> b >> c >> h;

		if (a <= 0 || b <= 0 || c <= 0 || h <= 0)
		{
			cout << "All numbers must be bigger than 0" << endl;
		}
		else 
		{
			int S = (a * h) / 2;
			int P = a + b + c;
			cout << "The perimeter of the triangle is P=" << P << endl
				<< "The area of the triangle is A=" << S << endl;
		}
		break;
	case 2: int x;
		cout << "Enter a whole number for a" << endl;
		cin >> x;
		if ( x <= 0)
		{
			cout << "Enter a number bigger than 0" << endl;
		}
		else
		{
			int P = x * 4, S = x * x;
			cout << "The perimeter of the square is P=" << P << endl
				<< "The area of the square is A=" << S << endl;
		}
		break;
	case 3: int r;
		cout << "Enter a whole number for r" << endl;
		cin >> r;
		if ( r < 0)
		{
			cout << "Enter a number bigger than 0" << endl; 
		}
		else
		{
			int S, A;
			S = (r * r);
			A = r * 2;
			cout << " The perimeter of the circle is P= " << A << "?" << endl << " The area of the circle is A=" << S << "?" << endl;
		}
		break;
	case 4: 
	{
		int a, b;
		int S, P;
		
		cout << "Enter whole numbers for a and b" << endl;
		cin >> a >> b;

		if (a <= 0 || b <= 0)
		{
			cout << "All numbers must be bigger than 0 " << endl;
		}
		else
		{
			S = a * b;
			P = 2 * a + 2 * b;
			cout << "The perimeter of the rectangle is P=" << P << endl
				<< "The area of the rectangle is A=" << S << endl;
		}
	}
		break;
	case 5: 
	{		int a, b, c, d, h;
	 cout << "Enter whole numbers for a, b, c d and h" << endl;
	 cin >> a >> b >> c >> d >> h;
	 if (a <= 0 || b <= 0 || c <= 0 || d <= 0 || h <= 0)
	 {
		cout << "All numbers must be bigger than 0 " << endl;
	 }
	 else
	 {
		double F, P;
		F = ((a + b) * h) / 2;
		P = a + b + c + d;
		cout << " The perimeter of the trapeze is P=" << P << endl
			 << " The area of the trapeze is A=" << F << endl;
	 }
	}
		break;
	default : 
		cout << "Please enter 1, 2, 3, 4 or 5" << endl;
	}



   return 0;
}
