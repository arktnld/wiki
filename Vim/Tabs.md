 = Tabs =

	:*tab b*  show each buffer in a tab (up to 'tabpagemax' tabs)
	:*tab drop {file}*  open {file} in a new tab, or jump to a window/tab containing the file if there is one
	:*tab s*  copy the current window to a new tab of its own
	*vim -p f1 f*  open files in tabs
	:*tabedit {file}*  edit specified file in a new tab
	:*tabfind {file}*  open a new tab with filename given, searching the 'path' to find it
	:*t*  close current tab
	:*tabclose {i}*  close i-th tab
	:*t*  close all other tabs (show only the current tab)
	:*t*  list all tabs including their displayed windows
	:*t*  move current tab to last
	:*tabm {i}*  move current tab to position i+1
	:*t*  go to next tab
	:*t*  go to previous tab
	:*t*  go to first tab
	:*t*  go to last tab
	*g*  go to next tab
	*g*  go to previous tab
	*{i}g*  go to tab in position i
