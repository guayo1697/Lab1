class Main inherits IO{
	temp : Int <- new Int;
	main() : Object{{
		out_string("INGRESE LA TEMPERATURA EN GRADOS CELSIUS: \n");
		temp <- in_int();
		out_string("LA TEMPERATURA EN FARENHEIT ES: ").out_int(convertidor(temp)).out_string("\n");
	}
};


	convertidor(tempe : Int): Int {
		(tempe * 18) / 10 + 32
	};

	
};

