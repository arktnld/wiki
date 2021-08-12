 = Buffers =

	*g+*  newer text state
	*g,*  newer position in change list
	*g-*  older text state
	*g;*  older position in change list
	*ZZ*  write current file and quit
	*gf*  Edit the file under cursor, on neovim you can use on terminal
	[t  Go to the previous frame
	]t  Go to the next frame
	:*ls*  List all open buffers
	:*cd -*  Back to original path
	:*wall*  Save changes to all buffers in list
	:*pw![pic](d)*  Print current directory
	:*xa![pic](ll)*  Write all changed buffers and exit
	:*bd![pic](el)*  Unload buffer ![pic](N)
	:*ba![pic](dd)*  Add file to buffer
	:*bl![pic](ast)*  Go to last buffer
	:*rew![pic](ind)*  Start editing the first file in the argument list
	:*cd ![pic](path)*  Change current path
	:*b![pic](uffer)[N]*  Select file ![pic](N) in buffer
	:*sb![pic](buffer)[N]*  Split buffer ![pic](N)
	:*bufdo {commands}*  execute commands to all files in buffer list
