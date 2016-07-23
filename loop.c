class Main inherits IO{
	temp : Int <- new Int;
	main() : Object{{
		temp <- 0 - 50;
		while(temp <= 150)
		loop{
		out_string("LA TEMPERATURA EN FARENHEIT ES: ").out_int(convertidor(temp)).out_string("\n");
		temp <- temp + 10;
		}
		pool;
	}
};


	convertidor(tempe : Int): Int {
		(tempe * 18) / 10 + 32
	};

	
};