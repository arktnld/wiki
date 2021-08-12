 = Global Command =

	:*g/one/*  List lines containing "one"
	:*g/green/d*  Delete all lines containing "green"
	:*v/green/d*  Delete all lines not containing "green"
	:*g/one/,/two/d*  Not line based
	:*g/{pattern}![pic](/print)*  View all lines with search pattern
	:*g/{pattern}/y![pic](register)*  yank all matches to the selected uppercase register
	:*![pic](range) ![pic](v)global /{pattern}/![pic](cmd)*  Execute a global command in lines that not match
