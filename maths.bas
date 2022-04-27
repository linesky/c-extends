extern "C"
'fbc -lib maths.bas
public function add(a as integer,b as integer)as integer export 
	return a+b
end function  
public function subs(a as integer,b as integer)as integer export 
	return a-b
end function  
public function mul(a as integer,b as integer)as integer export  
	return a*b
end function  
public function adivs(a as integer,b as integer)as integer export 
	return a\b
end function  
end extern
