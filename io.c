class Main inherits IO{
	input : String <- new String;
	edad : Int <- new Int;
	main() : Object{{
		out_string("INGRESE SU NOMBRE \n");
		input <- in_string(); 
		out_string("INGRESE SU EDAD \n");
		edad <- in_int(); 
		out_string("Su nombre es: ");
		out_string(input);
		out_string(" \n");
		out_string("Y al graduarse tendra la edad de: ");
		out_int(edad + 2);
		out_string(" \n");
	 	}
	};
};