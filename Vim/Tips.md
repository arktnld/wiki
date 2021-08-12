 = Tips =

	== Delete duplicate lines ==
	:%s/^\(.*\)\n\1$/\1/

	== Display line matches ==
	:g/gladiolli/* --

	= Include an external command =
	:argdo exe '%!sort'|w!

	== Add number to all lines ==
	%s/^/\=strpart(line(".")."    ",0 ,5)

	== Uppercase first letter of sentence ==
	:%s/![pic](.!?)\_s\+\a/\U&\E/g

	== View hex value of any character ==
	ga
