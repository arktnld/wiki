* Options

From NetHackWiki

Jump to navigation Jump to search

---

The game *options* affect the look and feel of the game.

They can be changed:

  * permanently in the configuration file at
    * *defaults.nh* (in the same directory as ` nethack.exe` or `nethackW.exe`) on [DOS](/wiki/DOS "DOS") and [Windows](/mediawiki/index.php?title=Windows&action=edit&redlink=1 "Windows \(page does not exist\)")
    * *~/.nethackrc* on [unix](/wiki/Unix "Unix"), unix-based or unix-like systems, including OS X and Linux
    * *NetHack Defaults* on pre-OSX-[Mac](/mediawiki/index.php?title=Mac&action=edit&redlink=1 "Mac \(page does not exist\)") and [BeOS](/mediawiki/index.php?title=BeOS&action=edit&redlink=1 "BeOS \(page does not exist\)")
    * *NetHack.cnf* on [Amiga](/mediawiki/index.php?title=Amiga&action=edit&redlink=1 "Amiga \(page does not exist\)"), [Atari](/mediawiki/index.php?title=Atari&action=edit&redlink=1 "Atari \(page does not exist\)"), [OS/2](/mediawiki/index.php?title=OS/2&action=edit&redlink=1 "OS/2 \(page does not exist\)") and [VMS](/mediawiki/index.php?title=VMS&action=edit&redlink=1 "VMS \(page does not exist\)")
  * temporarily by using the in-game options screen, accessible by pressing [shift](/wiki/Shift "Shift") \+ [o](/wiki/O "O") in the game
  * each time the game is run, on the command line
  * when the game is [compiled](/wiki/Compile-time_options "Compile-time options")

There are two types of options, _boolean_ and _compound_ options. Boolean
options toggle a setting on or off, while compound options take more diverse
values.

#*  Configuration file

Options are usually prefixed by '`OPTIONS=`' on each line.

Name a boolean option in the configuration file to turn it on, and prefix it
with 'no' or '!' to turn it off. Options can be combined into one line for
brevity:



    OPTIONS=boulder:0, color, autodig, !cmdassist, norest_on_space


For compound options, the option name and value are separated by a colon:



    OPTIONS=catname:Mirri


The above two lines set `boulder` to `0`, enable `color` and `autodig`,
disable `cmdassist` and `rest_on_space`, and set your cat's name to Mirri.

Any line beginning with a '#' is a comment; i.e. the line is ignored.

*Persistent options:* Some options are marked persistent, and are saved and
reloaded along with the game. Changing a persistent option in the
configuration file applies only to new games.

If a configuration file does not exist, create a new one that's appropriate
for your system with a text file editor. (For Mac OS X Terminal, use
~/.nethackrc instead of NetHack Defaults)

#* In-game

The in-game configuration menu is brought up by pressing [shift](/wiki/Shift
"Shift") \+ [o](/wiki/O "O"). It is similar to an item selection menu, where
you use alphabetic letters to select which options to change. Boolean options
are toggled on or off, while you are prompted to enter new values for compound
options.

Some options cannot be changed in-game.

#* Command line

You can also set options from the command line by setting the `NETHACKOPTIONS`
environment variable. If the value starts with '\' or '/' or '@', it is
considered to be a config file name. For example:



    NETHACKOPTIONS=boulder:0, color, autodig


or



    NETHACKOPTIONS=@/home/username/.nethackrc


#* Options

##* AUTOCOMPLETE

Enable or disable autocompletion when entering particular extended commands.
Listing them in a comma-separated list enables, prefixing with `!` disables.
Example:



    AUTOCOMPLETE=zap,!annotate


##* acoustics

Enable messages about what your character hears. Boolean option, defaults to
TRUE.

##* align

Your starting [alignment](/wiki/Alignment "Alignment"). Compound option, with
possible values of `lawful`, `neutral`, `chaotic`, or `random`. The first
letter may be given alone. Prefix with ! to exclude that alignment from being
picked randomly. Cannot be set in-game. Example that excludes chaotic:



    OPTIONS=align:!c


##* autodescribe

Automatically describe the terrain under cursor when asked to get a location
on the map. The whatis_coord option controls whether the description includes
map coordinates. It can be toggled by typing `#` while targeting.

##* autodig

Automatically dig, if you're wielding a [digging tool](/wiki/Digging_tool
"Digging tool") and moving into a place that can be dug. Boolean option,
defaults to FALSE. Can be set in-game. Persistent.

##* autoopen

Walking into a door attempts to open it. Boolean option, defaults to TRUE.
Persistent.

##* autopickup



_Main article:[Autopickup](/wiki/Autopickup "Autopickup")_

Automatically pick up things onto which you move. See also pickup_types,
pickup_burden, pickup_thrown, and
[Autopickup_exceptions](/wiki/Autopickup_exception "Autopickup exception").
Boolean option, defaults to TRUE. Can be set in-game.

##* AUTOPICKUP_EXCEPTION



_Main article:[Autopickup_exception](/wiki/Autopickup_exception "Autopickup
exception")_

Autopickup exceptions allow you to specify particular expression matches for
more nuanced autopickup usage. See the main article for usage information.

##* autoquiver

Automatically [quiver](/wiki/Quiver "Quiver") some suitable weapon if your
quiver empties when [firing](/wiki/Firing "Firing"). Boolean option, defaults
to FALSE. Can be set in-game. Persistent.

##* BIND

Change the key bindings of special keys, menu accelerators, or extended
commands. You can specify multiple bindings for a single command. The format
is a comma-separated list, with colon-separated keybinding and command. A
binding overrides an existing key usage. Example:



    BIND=!:loot,^v:untrap,M-x:terrain


See [Binding keys](/wiki/Binding_keys "Binding keys") for a more detailed
description and a list of bindable special commands.

##* blind

Start the character permanently blind. Boolean option, defaults to FALSE.
Persistent.

##* bones

Allow saving and loading bones files. Boolean option, defaults to TRUE.
Persistent.

##* boulder

Set the symbol used to display [boulders](/wiki/Boulder "Boulder"). For
example `boulder:0` Compound option with default value of ```. Can be set in-
game.

Can also be defined using ASCII value, and without the `OPTIONS` prefix simply
as



    BOULDER=48


For example, `BOULDER=64` would be equal to `OPTIONS=boulder:@`. See also
[Custom map symbols#BOULDER](/wiki/Custom_map_symbols#BOULDER "Custom map
symbols")

This option has been superseded by the `SYMBOLS=` format described in the
symset option, though this method still functions.

##* catname

Set the name of your starting [cat](/wiki/Kitten "Kitten"). Compound option,
and it cannot be set within game. See also dogname and horsename. Example:



    OPTIONS=catname:Whiskers


##* character

Synonym for role.

##* checkpoint

Save game state after each level change, for possible [recovery](/wiki/Recover
"Recover") after program crash. Boolean option, defaults to TRUE. Can be set
in-game.

##* checkspace

Check free disk space before writing files to disk. You may have to turn this
off if you have more than 2 GB free space on the partition used for your save
and level files. A boolean option, defaults to on. Only applies when MFLOPPY
was defined during compilation.

##* CHOOSE

Choose at random one of the comma-separated parameters as an active section
name. Lines in other sections are ignored. This allows for a fine-tuned
options set for particular roles. Example:



    CHOOSE=char A, char B
    [char A]
    OPTIONS=role:arc,race:dwa,align:law,gender:fem
    [char B]
    OPTIONS=role:wiz,race:elf,align:cha,gender:mal


##* clicklook

Allows looking at things on the screen by navigating the mouse over them and
clicking the right mouse button. Boolean option, defaults to FALSE.

##* cmdassist

NetHack provides some additional command assistance when it detects some
anticipated mistakes. Boolean option, defaults to TRUE. Can be set in-game.

##* confirm

Have user confirm attacks on [peaceful](/wiki/Peaceful "Peaceful") creatures.
Boolean option, defaults to TRUE. Can be set in-game. Persistent.

##* dark_room

Show out-of-sight areas of lit rooms. Boolean value, defaults to FALSE.
Persistent.

##* disclose

Controls the prompts at the end of the game. Possible values are

  * `i` \- disclose your [inventory](/wiki/Inventory "Inventory")
  * `a` \- disclose your [attributes](/wiki/Attributes "Attributes")
  * `v` \- summarize monsters you've killed
  * `g` \- list [genocided](/wiki/Genocide "Genocide") monsters
  * `c` \- display [conduct](/wiki/Conduct "Conduct")
  * `o` \- display dungeon overview

Each of those values can be preceded with a value that tells how it behaves.
The possible values are

  * `y` \- prompt, defaults to yes
  * `n` \- prompt, defaults to no
  * `+` \- disclose without prompting
  * `-` \- don't disclose, don't prompt

The listing of killed monsters can be sorted, so there are two additional
choices for `v`:

  * `?` \- prompt you and default to ask on the prompt;
  * `#` \- disclose it without prompting, ask for sort order.

For example



    OPTIONS=disclose:yi na +v -g -c -o


Persistent.

##* dogname

Set the name of your starting [dog](/wiki/Dog "Dog"). Compound option, and it
cannot be set within game. See also catname and horsename. Example:



    OPTIONS=dogname:Cujo


##* extmenu

Does extended commands interface pop up a menu? Boolean option, defaults to
FALSE. Only implemented for the TTY windowport.

##* female

An obsolete synonym for `gender:female`. Cannot be set in-game.

##* fixinv

An object's inventory letter sticks to it when it's dropped, so when you pick
it up again, it will have the same inventory letter, unless there is already
another item in your inventory using that letter. Boolean option, defaults to
TRUE. Can be set in-game. Persistent.

##* force_invmenu

Commands asking for an inventory item will show a menu instead of a text query
with possible menu letters. Default is off.

##* fruit

Set the name of the [user-defineable fruit](/wiki/Slime_mold "Slime mold").
Compound option, takes a string, with default value of `[slime
mold](/wiki/Slime_mold "Slime mold")`. Can be set in-game.

##* gender

Sets the [gender](/wiki/Gender "Gender") of your character. A compound option,
with possible values of `male`, `female`, or `random`. Default value is to
pick an appropriate gender randomly. Cannot be set in-game.

##* goldX

When filtering objects based on blessed/cursed state (BUCX), this options
specifices whether to include gold as X (unknown state) when on, and U
(uncursed) when off. Default is off.

##* help

If more information is available for an object looked at with the [what
is](/wiki/What_is "What is") [/](/wiki/Slash "Slash") command, ask if you want
to see it. Boolean option, defaults to TRUE. Can be set in-game. Persistent.

##* herecmd_menu

When using a windowport that supports mouse and clicking on yourself or next
to you, show a menu of possible actions for the location. Same as herecmdmenu
and therecmdmenu commands.

##* hilite_pet

Visually distinguish [pets](/wiki/Pets "Pets") from similar animals (This
includes both your starting pet and any monsters you happen to tame along the
way). Boolean option, defaults to FALSE. Can be set in-game.

##* hilite_pile

Visually distinguish piles of objects from individual objects. Boolean option,
defaults to FALSE.

##* hilite_status

If the statushilites option is set, this option allows you to customize your
game display by setting thresholds to change the color or appearance of fields
in the status bar.

This is an "experimental feature" in NetHack 3.6.0 (in particular, it is
missing from all official binaries, but most public servers enable it). In
NetHack 3.6.1, it has been changed significantly and uses some different
syntax.

For a full guide on configuring status hilites, see [Status
hilites](/wiki/Status_hilites "Status hilites").

The whole feature can be disabled by turning the statushilites option off.

##* hitpointbar

Show a hit point bar graph behind your name and title. Only available for TTY
and Windows GUI, and only when statushilites is on.

##* horsename

Set the name of your starting [horse](/wiki/Pony "Pony"). Compound option, and
it cannot be set within game. See also catname and dogname.

##* ignintr

Ignore interrupt signals, including breaks. Boolean option, defaults to FALSE.
Not implemented on Mac. Can be set in-game. Persistent.

##* implicit_uncursed

Omit "uncursed" from inventory lists, if possible. Boolean option, defaults to
TRUE.

##* legacy

Display an introductory message when starting the game. Boolean option,
defaults to TRUE. Cannot be set in-game.

##* lit_corridor

Distinguish visually between lit and unlit [corridors](/wiki/Corridor
"Corridor"). Boolean option, defaults to FALSE. Can be set in-game.
Persistent.

##* lootabc

Use the old `a`, `b` and `c` keyboard shortcuts in the [looting](/wiki/Loot
"Loot") menu. Boolean option, defaults to FALSE. Can be set in-game.
Persistent.

##* mail

Enable [mail](/wiki/Mail "Mail") delivery during the game. Boolean option,
defaults to TRUE. Only meaningful if NetHack was compiled with MAIL. Can be
set in-game.

##* male

An obsolete synonym for `gender:male`. Cannot be set in-game.

##* mention_walls

Give feedback when walking against a wall. Boolean value, defaults to FALSE.

##* menucolors



_Main article:[Menucolors](/wiki/Menucolors "Menucolors")_

Enable coloring menu lines. Boolean value, defaults to FALSE. See main article
for how to set menucolors with particular expression matches.

##* menustyle

Controls the interface used when you need to choose various objects (in
response to the Drop command, for instance). Persistent. Compound option, with
following possible values:

Option  | Description
---|---
`traditional` | prompt for object class characters, followed by an object-by-
object prompt for all matching items
`combination` | prompt for object classes of interest, then display a menu of
matching objects
`partial` | skip the object class filtering and immediately display a menu of
all objects
`full` | display a menu of object classes, and then a menu of matching objects

##* menu_deselect_all

Menu character accelerator to deselect all items in a menu. Implemented by the
Amiga, Gem, X11 and tty ports. Compound option, with default of `'-'`. Cannot
be set in-game.

##* menu_deselect_page

Menu character accelerator to deselect all items on this page of a menu.
Implemented by the Amiga, Gem and tty ports. Compound option, with default of
`'\'`. Cannot be set in-game.

##* menu_first_page

Menu character accelerator to jump to the first page of a menu. Implemented by
the Amiga, Gem and tty ports. Compound option, with default of `'^'`. Cannot
be set in-game.

##* menu_headings

Controls how the headings in a menu are highlighted. Compound option, with
possible values of `none`, `bold`, `dim`, `underline`, `blink`, or `inverse`.
Not all ports can actually display all types.

##* menu_invert_all

Menu character accelerator to toggle the selections in a menu. Implemented by
the Amiga, Gem, X11 and tty ports. Compound option, with default of `'@'`.
Cannot be set in-game.

##* menu_invert_page

Menu character accelerator to toggle the selection on this page of a menu.
Implemented by the Amiga, Gem and tty ports. Compound option, with default of
`'~'`. Cannot be set in-game.

##* menu_last_page

Menu character accelerator to jump to the last page of a menu. Implemented by
the Amiga, Gem and tty ports. Compound option, with default of `'|'`. Cannot
be set in-game.

##* menu_next_page

Menu character accelerator to goto the next page of a menu. Implemented by the
Amiga, Gem and tty ports. Compound option, with default of `'>'`. Cannot be
set in-game.

##* menu_objsyms

Show object symbols in menu headings in menus where the object symbols act as
menu accelerators. Boolean option, defaults to FALSE.

##* menu_overlay

Do not clear the screen before drawing menus, and align menus to the right
edge of the screen. Only for the TTY windowport. Boolean option, defaults to
TRUE.

##* menu_previous_page

Menu character accelerator to goto the previous page of a menu. Implemented by
the Amiga, Gem and tty ports. Compound option, with default of `'<'`. Cannot
be set in-game.

##* menu_search

Menu character accelerator to search for a menu item. Implemented by the
Amiga, Gem and X11 ports. Compound option, with default of `':'`. Cannot be
set in-game.

##* menu_select_all

Menu character accelerator to select all items in a menu. Implemented by the
Amiga, Gem, X11 and tty ports. Compound option, with default of `'.'`. Cannot
be set in-game.

##* menu_select_page

Menu character accelerator to select all items on this page of a menu.
Implemented by the Amiga, Gem and tty ports. Compound option, with default of
`','`. Cannot be set in-game.

##* menu_tab_sep

Use tabs to separate menu names from their values. This option is only shown
when in wizard-mode, and is only meant for testing purposes. (FIXME: move to
wizmode section?)

##* msghistory

Number of message-window messages to save. Compound option, takes a positive
number, with default of 20. Maximum and minimum values depend on the window
port; For the TTY, [X11](/wiki/X11 "X11") and Gem ports the minimum is 20 and
maximum 60. Cannot be set in-game.

##* msg_window

How to show the latest messages recalled with `^P`. Compound option, with the
following possible values:

Option  | Description
---|---
`single` | show single message
`combination` | two messages as single, then as full
`full` | full window, oldest message first
`reversed` | full window, newest message first

You can use the first letter of an option to specify that option. For
backwards compatibility, no value needs to be given; in that case defaults to
'`full`', or it can be negated like a boolean option, in which case defaults
to '`single`'. Can be set in-game only if playing the TTY windowport.

##* MSGTYPE



_Main article:[MSGTYPE](/wiki/MSGTYPE "MSGTYPE")_

Can be used to hide obnoxious messages or emphasize dangerous ones. See main
article for how to use MSGTYPEs.

##* name

The name of your character. Compound option, defaults to your user name. If
set to `player`, then NetHack will ask for the user name, even on systems
where it normally wouldn't. If suffixed with dash and character role letter
(one of `-A -B -C -H -K -M -P -Ra -Ro -S -T -V -W`), then also defines the
character role, or if suffixed with `-@`, then selects a random role. Cannot
be set in-game.

##* news

Read the NetHack `news` file at start of game, if present. Boolean option,
defaults to TRUE.

##* nudist

Start the character with no armor. Boolean option, defaults to FALSE.
Persistent.

##* null

Send padding NULLs to terminal. A boolean, defaults to FALSE. Only used if you
compiled NetHack with TERMCAP and without TIMED_DELAY. Persistent.

##* number_pad

Use the number keys to move instead of [hjklyubn](/wiki/Hjklyubn "Hjklyubn").
Valid options are:

Option  | Description
---|---
`0` | move by letters; 'yuhjklbn'
`1` | move by numbers; digit [5](/wiki/5 "5") acts as [G](/wiki/G "G")
movement prefix
`2` | like 1 but [5](/wiki/5 "5") works as [g](/wiki/G "G") prefix instead of
as [G](/wiki/G "G")
`3` | by numbers using phone key layout; 123 above, 789 below
`4` | combines 3 with 2; phone layout plus MSDOS compatibility, where
[5](/wiki/5 "5") means [g](/wiki/G "G"), [alt](/wiki/Alt "Alt") \+ [5](/wiki/5
"5") means [G](/wiki/G "G"), and [alt](/wiki/Alt "Alt") \+ [0](/wiki/0 "0")
mean [I](/wiki/I "I")
`-1` | by letters but use [z](/wiki/Z "Z") to go northwest, [y](/wiki/Y "Y")
to zap wands

With `number_pad` set to `1`, `2`, `3`, or `4`, counts need to be prefixed
with [n](/wiki/N "N") ([n](/wiki/N "N")[5](/wiki/5 "5")[0](/wiki/0
"0")[s](/wiki/S "S") to search 50 times). Also, some [extended
commands](/wiki/Extended_command "Extended command") are available in a short
form ([l](/wiki/L "L") performs #[loot](/wiki/Loot "Loot"), [u](/wiki/U "U")
performs #[untrap](/wiki/Untrap "Untrap"), etc).

For backwards compatibility, number_pad without a value is synonymous to
`number_pad:1`.

##* packorder

Sets the order of item classes shown in [inventory](/wiki/Inventory
"Inventory"). Compound option, takes a string of up to 14 characters, with
default values of `")[%?+!=/(*`0_`. Omitted types are filled in at the end
from the previous order. Can be set in-game. Persistent.

##* paranoid_confirmation

A space-separated list of specific situations where alternate prompting is
desired. The default is `paranoid_confirmation:pray`.

Option  | Description
---|---
`Confirm` | for any prompts which are set to require "yes" rather than 'y',
also require "no" to reject instead of accepting any non-yes response as no
`quit` | require "yes" rathern than 'y' to confirm quitting the game or
switching into non-scoring explore mode
`die` | require "yes" rather than 'y' to confirm dying (applies only to
[explore mode](/wiki/Explore_mode "Explore mode"))
`bones` | require "yes" rather than 'y' to confirm saving bones data when
dying in [debug mode](/wiki/Wizard_mode "Wizard mode")
`attack` | require "yes" rather than 'y' to confirm attacking a peaceful
monster
`pray` | require 'y' to confirm an attempt to pray rather than immediately
praying; on by default
`wand-break` | require "yes" rather than 'y' to confirm breaking a wand.
(NetHack 3.6.2 only)
`Were-change` | require "yes" rather than 'y' to confirm changing form due to
lycanthropy when hero has polymorph control. (NetHack 3.6.2 only)
`Remove` | require selection from inventory for [R](/wiki/R "R") and
[T](/wiki/T "T") commands even when wearing just one applicable item
`all` | turn on all of the above

By default, the pray choice is enabled, the others disabled. To disable it
without setting any of the other choices, use `paranoid_confirmation:none`. To
keep it enabled while setting any of the others, include it in the list:



    OPTIONS=paranoid_confirmation:attack pray Remove


##* perm_invent

Show permanent inventory window. Boolean option, defaults to FALSE. Not used
on TTY. Can be set in-game. Persistent.

##* pettype

Sets your preferred [pet](/wiki/Pet "Pet") type. A compound option, with
possible value of `cat`, `dog`, or use `none` to start a game without a pet.
Cannot be set in-game.

##* pickup_burden

Prompt for confirmation before picking up items that will push the character's
[encumbrance](/wiki/Encumbrance "Encumbrance") past a given level --
`Unencumbered`, `Burdened`, `streSsed`, `straiNed`, `Overtaxed`, or
`overLoaded`. This will NOT prompt the player if he is about to pick up a
[loadstone](/wiki/Loadstone "Loadstone") or [gold](/wiki/Gold "Gold").
Defaults to `S`. Persistent.

##* pickup_thrown

If this option is on and autopickup is also on, try to pick up things that you
threw, even if they aren't in pickup_types or match an [autopickup
exception](/wiki/Autopickup_exception "Autopickup exception"). Boolean option,
defaults to TRUE. Persistent.

##* pickup_types

Specify the object types to be picked up when autopickup is on. Default is
`all` to pick up all types. For example "`pickup_types:?!/`" would pick up all
[scrolls](/wiki/Scroll "Scroll"), [potions](/wiki/Potion "Potion") and
[wands](/wiki/Wand "Wand"). Persistent.

##* pile_limit

When walking across a pile of objects on the floor, threshold at which the
message "there are few/several/many objects here" is given instead of showing
a popup list of those objects. A value of 0 means "no limit" (always list of
the objects); a value of 1 effectively means "never show the objects" since
the pile size will always be at least that big; default value is 5.
Persistent.

##* playmode

Values are `normal`, `explore`, or `debug`. Allows selection of [explore
mode](/wiki/Explore_mode "Explore mode") (also known as discovery mode) or
debug mode (also known as wizard mode) instead of normal play. [Debug
mode](/wiki/Debug_mode "Debug mode") might only be allowed for someone logged
in under a particular user name (on multi-user system) or it might be disabled
entirely. Requesting it when not allowed or not possible results in explore
mode instead. NAO has both Explore and Debug modes disabled entirely. Default
is normal play.

##* pushweapon

If you [wield](/wiki/Wield "Wield") something when you are already wielding
something else, the old [weapon](/wiki/Weapon "Weapon") is pushed into the
alternate weapon slot. Boolean option, defaults to FALSE. Can be set in-game.
Persistent.

##* race

Set your character's [race](/wiki/Race "Race"). A compound option, with
possible values of `human`, `elf`, `dwarf`, `gnome`, `orc`, or `random`, with
default of random. If you prefix a `!` to the value, you can exclude that race
from being picked randomly. Cannot be set in-game. Persistent.

##* rest_on_space

Space [waits](/wiki/Wait "Wait") for a turn. This is considered by some as a
very easy way to get killed.

Boolean option, defaults to FALSE. Can be set in-game. Persistent.

##* role

Set your character's [role](/wiki/Role "Role"). Can also be `random`. A
compound option. See name option for an alternate method of specifying your
role. Normally only the first letter of the value is examined, with `r` being
the exception with `Rogue`, `Ranger`, and `random` values. If you prefix an
option with `!`, you can exclude that role from being picked randomly. Cannot
be set in-game. Persistent.

##* roguesymset

This option may be used to select one of the named symbol sets found within
the [symbols](/wiki/Source:NetHack_3.6.0/dat/symbols "Source:NetHack
3.6.0/dat/symbols") file to alter the symbols displayed on the screen on the
rogue level.

##* rlecomp

When writing out a save file, perform a run length compression of the map. Not
all ports support run length compression. It has no effect on reading an
existing save file.

##* runmode

Set the screen updating interval for multi-turn actions, eg. running or
traveling. Can be set in-game. Compound option with the following possible
values:

Option  | Description
---|---
`teleport` | update the map after movement has finished
`run` | update the map after every seven or so steps (default)
`walk` | update the map after each step
`crawl` | like walk, but pause briefly after each step

##* safe_pet

Prevents you from (knowingly) attacking your pet by moving into it. TRUE is
the best setting as attacking a pet, should you wish to, is easily
accomplished using the [fight](/wiki/Fight "Fight") command. Boolean option,
defaults to TRUE. Can be set in-game.

##* sanity_check

This option turns on debugging output, and is only available in [wizard
mode](/wiki/Wizard_mode "Wizard mode"). Boolean option, defaults to FALSE.
(FIXME: wizmode section?)

##* scores

Control what part of hiscore list to show at the end of game. Compound option.
Can be set in-game. Persistent. Accept the following options, separated by
spaces:

  * `o` \- show my own score. Can be prefixed with `!` to not show own score.
  * `Xa` \- show X scores around own score
  * `Xt` \- show X scores from the top

For example:



    OPTIONS=scores:10t 2a o


##* showexp

Displays the exact number of experience points next to your [experience
level](/wiki/Experience_level "Experience level") on the [status
line](/wiki/Status_line "Status line"). Useful for seeing how close you are to
the next level, but it may increase the length of the status line a lot,
pushing important notifications (like Hungry, Ill, FoodPois, etc.) off the
end.

Boolean option, defaults to FALSE. Can be set in-game. Persistent.

##* showrace

Uses the symbol for your race instead of @. That's h for
[dwarves](/wiki/Dwarves "Dwarves"), o for [orcs](/wiki/Orc_\(starting_race\)
"Orc \(starting race\)") and G for [gnomes](/wiki/Gnome_\(starting_race\)
"Gnome \(starting race\)"). Elves are still @. This could be useful for
reminding you not to [genocide](/wiki/Genocide "Genocide") your racial glyph
but is not widely used. Boolean option, defaults to FALSE. Can be set in-game.

##* showscore

Shows your approximate accumulated score on the bottom line. Boolean option,
defaults to false. Can be set in-game. Persistent. Only available if NetHack
was compiled with SCORE_ON_BOTL.

##* silent

Stops your terminal's
[bell](/mediawiki/index.php?title=Bell_\(terminal\)&action=edit&redlink=1
"Bell \(terminal\) \(page does not exist\)") sounding. Boolean option,
defaults to TRUE. Can be set in-game. Persistent.

##* sortloot

Controls the sorting behavior of the pickup lists for inventory and
#[loot](/wiki/Loot "Loot") commands and some others. Persistent. The possible
values are:

Option  | Description
---|---
`full` | always sort the lists
`loot` | only sort the lists that don't use inventory letters, like with the
#[loot](/wiki/Loot "Loot") and pickup commands
`none` | show lists the traditional way without sorting

##* sortpack

Groups similar kinds of objects in your inventory. TRUE is highly recommended.
Boolean option, defaults to TRUE. Can be set in-game. Persistent.

##* SOUND



_Main article:[User sounds](/wiki/User_sounds "User sounds")_

Allows user-defined sound file to be played when a message is shown.

##* sparkle

Display sparkly effect for resisted magical attacks (e.g. a fire attack on a
fire-resistant monster). It can be helpful to turn this off on the [Plane of
Fire](/wiki/Plane_of_Fire "Plane of Fire"), otherwise a dozen or more sparkles
will occur per turn. See also timed_delay.

Boolean option, defaults to TRUE. Can be set in-game. Persistent.

##* standout

Uses standout mode (reverse video) for displaying "`--More--`". Boolean
option, defaults to FALSE. Can be set in-game. Persistent.

##* status_updates

Allow updates to the status lines at the bottom of the screen (default true).

##* statushilites

Controls how many turns status hilite behaviors highlight the field. If
negated or set to zero, disables status hiliting.

Only useful when you have status hilite rules configured; see the
hilite_status option for more information.

##* suppress_alert

Prevent alert notification messages about feature changes in a NetHack version
and the previous versions. Compound option, accepts a string describing a
NetHack version. Can be set in-game. Currently only one use, which is to
prevent the [quiver](/wiki/Quiver "Quiver") and [quit](/wiki/Quit
"Quit")-command changes:



    OPTIONS=suppress_alert:3.3.1


##* symset



_Main article:[symset](/wiki/Symset "Symset")_

Select the symbols used to display the game. Replaces the DECgraphics,
IBMgraphics, and MACgraphics options.

  * NHAccess (Recommended for blind players)
  * MACgraphics
  * IBMGraphics_2
  * IBMGraphics_1
  * IBMgraphics
  * DECgraphics

Individual symbols may be set using the following format:



    SYMBOLS=S_boulder:0
    SYMBOLS=S_golem:7
    SYMBOLS=S_ghost:8


For a complete list of symbol names, please see the [symset](/wiki/Symset
"Symset") article.

##* time

Displays elapsed game time, in turns, on the status line. Very useful for
estimating prayer timeouts, spell lifespan, and more. Boolean option, defaults
to FALSE. Can be set in-game. Persistent.

##* timed_delay

On TTY interfaces ([unix](/wiki/Unix "Unix") and
[VMS](/mediawiki/index.php?title=VMS&action=edit&redlink=1 "VMS \(page does
not exist\)")), use a timer instead of sending extra screen output when
attempting to pause for a display effect. On [MSDOS](/wiki/MSDOS "MSDOS")
without the termcap lib, chooses whether or not to pause for visual effect.
See also sparkle.

Boolean option, defaults to TRUE if configured into the program. Can be set
in-game. Persistent.

##* tombstone

Prints an ASCII tombstone when you die. Boolean option, defaults to TRUE. Can
be set in-game. Persistent.

##* toptenwin

Prints the top ten high scores in a window rather than stdout. This isn't very
useful unless you are using a [GUI](/wiki/GUI "GUI") version. Boolean option,
defaults to FALSE. Can be set in-game. Persistent.

##* travel

Enables the [travel](/wiki/Travel "Travel") command. Boolean option, defaults
to TRUE. Can be set in-game. Persistent.

##* verbose

Chooses whether or not to display certain non-essential messages, such as
doors being destroyed. Boolean option, defaults to TRUE. Can be set in-game.
Persistent.

##* whatis_coord

When using the `/` ([what is](/wiki/What_is "What is")) or `;` ([far
look](/wiki/Far_look "Far look")) commands to [look around on the
map](/wiki/Targeting "Targeting") with autodescribe on, display coordinates
after the description. Also works in other situations where you are asked to
pick a location.

The possible settings are:

  * `c` \- compass ('east' or '3s' or '2n,4w')
  * `f` \- full compass ('east' or '3south' or '2north,4west')
  * `m` \- map <x,y> (map column x=0 is not used)
  * `s` \- screen ![pic](row,column) (row is offset to match tty usage)
  * `n` \- none (no coordinates shown). Default.

The whatis_coord option is also used with the sub-commands `m`, `M`, `o`, and
`O` when using `/`, where the 'none' setting is overridden with 'map'.

##* whatis_filter

When using the `m`, `o`, `d`, `x` or `a` keys to [select a location on the
map](/wiki/Targeting "Targeting"), allows filtering the possible targets. It
can be set by typing `"` while targeting. It can be set to:

  * `n` \- no filtering (default)
  * `v` \- in view only
  * `a` \- in same area only (e.g. same room or same corridor)

The area-filter tries to be slightly predictive; if you're standing on a
doorway, it will consider the area on the side of the door you were last
moving toward.

##* whatis_menu

When using the `m`, `o`, `d`, `x` or `a` keys to [select a location on the
map](/wiki/Targeting "Targeting"), uses a menu to pick a target. Otherwise,
typing a lowercase letter will cycle through targets from nearest to furthest,
and an uppercase letter from furthest to nearest. It can be toggled by typing
`!` while targeting. Boolean, default off.

##* whatis_moveskip

When [selecting a location on the map](/wiki/Targeting "Targeting"), and using
shifted movement keys or meta-digit keys to fast-move, instead of moving 8
units at a time, move by skipping the same glyphs. It can be toggled by typing
`*` while targeting. Boolean, default off.

##* windowtype

Select which windowing system to use, such as `tty` or `X11` (default depends
on version). Cannot be set in-game. Example:



    OPTIONS=windowtype:tty


##* wizkit

[Wizard mode](/wiki/Wizard_mode "Wizard mode")-only option. Specifies the path
to a text file that contains a list of item names, one per line, up to a
maximum of 128 lines. Each line is processed by the function that handles
wishing. For example

In your config file:



    WIZKIT=wizkit.txt


And the contents of `wizkit.txt`:



    blessed [monster detection](/mediawiki/index.php?title=Scroll_of_monster_detection&action=edit&redlink=1 "Scroll of monster detection \(page does not exist\)")
    [ring of levitation](/wiki/Ring_of_levitation "Ring of levitation")
    [amulet of yendor](/wiki/Amulet_of_yendor "Amulet of yendor")
    2 blessed [genocide](/wiki/Scroll_of_genocide "Scroll of genocide")


Makes your character start with those items in inventory, in addition to the
normal starting items.

##* zerocomp

When writing out a save file, perform zero-comp compression of the contents.
Not all ports support zero-comp compression. It has no effect on reading an
existing save file.

#* Window Port Customization Options

##* align_message

Where to align or place the message window. Compound option, with possible
values of `top`, `bottom`, `left`, or `right`. Cannot be set in-game.

##* align_status

Where to align or place the status window. Compound option, with possible
values of `top`, `bottom`, `left`, or `right`. Cannot be set in-game.

##* ascii_map

NetHack should display an [ASCII](/wiki/ASCII "ASCII") character map if it
can. Boolean option. Can be set in-game.

##* color



_Main article:[colors](/wiki/Colors "Colors")_

NetHack should display color if it can for different [monsters](/wiki/Monster
"Monster"), [objects](/wiki/Object "Object"), and [dungeon
features](/wiki/Dungeon_feature "Dungeon feature"). This option matters only
for the TTY windowport. Boolean option, defaults to TRUE on most systems
including Windows and Mac. Can be set in-game.

In case the default color scheme is hard to distinguish on your monitor, you
might want to [edit the color preferences in your terminal
emulator](/wiki/Colors#Changing_terminal_colors "Colors").

If you are looking for colors of the wiki itself, see
[Category:Function_templates](/wiki/Category:Function_templates
"Category:Function templates") and
[User:Paxed/ReplaceCharsBlock](/wiki/User:Paxed/ReplaceCharsBlock
"User:Paxed/ReplaceCharsBlock").

##* eight_bit_tty

NetHack should pass eight-bit character values straight through to your
terminal. Boolean option, defaults to FALSE. Can be set in-game.

##* font_map

NetHack should use a font by the chosen name for the map window.

##* font_menu

NetHack should use a font by the chosen name for menu windows.

##* font_message

NetHack should use a font by the chosen name for the message window.

##* font_status

NetHack should use a font by the chosen name for the status window.

##* font_text

NetHack should use a font by the chosen name for text windows.

##* font_size_map

NetHack should use this size font for the map window.

##* font_size_menu

NetHack should use this size font for menu windows.

##* font_size_message

NetHack should use this size font for the message window.

##* font_size_status

NetHack should use this size font for the status window.

##* font_size_text

NetHack should use this size font for text windows.

##* fullscreen

NetHack should try and display on the entire screen rather than in a window.
Boolean option, defaults to false. Cannot be set in-game.

If the game cannot be displayed in fullscreen through this option and you are
using the tty interface, you can usually adjust your terminal emulator
configuration to achieve a similar effect (e.g. by increasing the font size).

##* large_font

NetHack should use a large font.

##* map_mode

NetHack should display the map in the manner specified. Used in Windows port
to choose between tiles or different sizes of ASCII. Consult defaults.nh for
possible options.

##* mouse_support

Use mouse for moving around. A boolean, defaults to FALSE. Is displayed, but
cannot be set in-game.

##* player_selection

NetHack should pop up dialog boxes, or use prompts for character selection.
Compound option. Cannot be set in-game.

##* popup_dialog

NetHack should pop up dialog boxes for input. Boolean option, defaults to
false. Can be set in-game.

##* preload_tiles

NetHack should preload tiles into memory. Boolean option, defaults to true.
Cannot be set in-game.

##* scroll_amount

NetHack should scroll the display this many map cells when the hero reaches
the scroll_margin. A compound option, accepts a positive number. Cannot be set
in-game.

##* scroll_margin

NetHack should scroll the display when the hero or cursor is this number of
cells away from the edge of the window. A compound option, accepts a positive
number. Cannot be set in-game.

##* selectsaved

NetHack should display a menu of existing saved games for the player to choose
from at game startup, if it can. Not all ports support this option.

##* softkeyboard

Display an on-screen keyboards; handhelds are most likely to support this.
Boolean option, defaults to off. Cannot be set in-game.

##* splash_screen

NetHack should display an opening splash screen when it starts up. Boolean
option, defaults to yes.

##* tile_width

Specify the preferred width of each tile in a tile capable port. Compound
option, accepts a positive number. Cannot be set in-game.

##* tile_height

Specify the preferred height of each tile in a tile capable port. Compound
option, accepts a positive number. Cannot be set in-game.

##* tile_file

Specify the name of an alternative tile file to override the default. Compound
option. Cannot be set in-game.

##* tiled_map

NetHack should display a tiled map if it can. Boolean option, Cannot be set
in-game.

##* use_darkgray

Use bold black instead of blue for black glyphs (TTY only). Boolean option.

##* use_inverse

Displays certain things in reverse video. Boolean option, defaults to FALSE on
non-Win32 platforms. Can be set in-game.

##* vary_msgcount

NetHack should display this number of messages at a time in the message
window. Compound option, accepts a positive number. Cannot be set in-game.
Implemented only for the Atari GEM, Win32 GUI and WinCE builds.

##* windowcolors

NetHack should display windows with the specified foreground/background colors
if it can. Compound option. Cannot be set in-game.



    OPTIONS=windowcolors: _wintype_ _fground_ / _bground_


where _wintype_ is one of ` menu`, `message`, `status`, `text`, and _fground_
and _bground_ are colors, either a hexadecimal ` #rrggbb`, one of the named
colors (`black`, `red`, `green`, `brown`, `blue`, `magenta`, `cyan`, `orange`,
`brightgreen`, `yellow`, `brightblue`, `brightmagenta`, `brightcyan`, `white`,
`trueblack`, `gray`, `purple`, `silver`, `maroon`, `fuchsia`, `lime`, `olive`,
`navy`, `teal`, `aqua`), or one of Windows UI colors (`activeborder`,
`activecaption`, `appworkspace`, `background`, `btnface`, `btnshadow`,
`btntext`, `captiontext`, `graytext`, `greytext`, `highlight`,
`highlighttext`, `inactiveborder`, `inactivecaption`, `menu`, `menutext`,
`scrollbar`, `window`, `windowframe`, `windowtext`).

Example:



    OPTIONS=windowcolors:menu white/black message green/yellow status white/blue text #ffffff/#000000


##* wraptext

NetHack port should wrap long lines of text if they don't fit in the visible
portion of the window. Boolean, defaults to false. Can be set in-game.



#* Platform-specific Customization options

##* altkeyhandler

Select an alternate keystroke handler dll to load. The name of the handler is
specified without the .dll extension and without any path information. Win32
only. Cannot be set in-game. NetHack comes with `nhdefkey.dll`,
`nhraykey.dll`, and `nh340key.dll`. If you are using a non-US keyboard layout
and cannot type the dollar sign or the hash mark, try nhraykey.

##* altmeta

Enables [extended command](/wiki/Extended_command "Extended command")
shortcuts, such as [alt](/wiki/Alt "Alt") \+ [d](/wiki/D "D") to
[dip](/wiki/Dip "Dip").![pic](1) Boolean option, default is off, except on Amiga.
Can be set in-game. Is saved into the savefile.![pic](2)

##* BIOS

Use BIOS calls to update the screen display quickly and to read the keyboard
(allowing the use of arrow keys to move) on machines with an IBM PC compatible
BIOS ROM. Boolean option, default off. OS/2, PC, and ST NetHack only. Cannot
be set in-game.

##* DECgraphics

Use DEC line-drawing characters. Won't work for all terminals. Boolean option,
defaults to TRUE. Can be set in-game. Turning this on sets IBMgraphics to
FALSE.

Starting with [NetHack 3.6.0](/wiki/NetHack_3.6.0 "NetHack 3.6.0"), this
option is equivalent to [symset](/wiki/Symset "Symset"):DECgraphics.

##* flush

Prevent typeahead. Boolean option, defaults to off. Only usable on Amiga. Can
be set in-game.

##* IBMgraphics



_Main article:[IBMgraphics](/wiki/IBMgraphics "IBMgraphics")_

Use IBM extended characters. Won't work for all terminals. Boolean option,
defaults to FALSE. Only implemented for the TTY windowport. Can be set in-
game.

Starting with [NetHack 3.6.0](/wiki/NetHack_3.6.0 "NetHack 3.6.0"), this
option is equivalent to [symset](/wiki/Symset "Symset"):IBMgraphics.

##* MacGraphics

Use Mac-specific character set to display map. A boolean, Mac-only, defaults
to on. See also IBMgraphics and DECgraphics.

Starting with [NetHack 3.6.0](/wiki/NetHack_3.6.0 "NetHack 3.6.0"), this
option is equivalent to [symset](/wiki/Symset "Symset"):MACgraphics.

##* page_wait

Show --more-- after a page of messages. A boolean, Macs only, defaults to on.

##* rawio

Force raw (non-cbreak) mode for faster output and more bulletproof input (MS-
DOS sometimes treats `^P' as a printer toggle without it) Default off, OS/2,
PC, and ST NetHack only. Note: DEC Rainbows hang if this is turned on. Cannot
be set in-game.

##* soundcard

Compound option, defaults to on. Only for the PC NetHack. Cannot be set in-
game.

##* subkeyvalue

(Win32 tty NetHack only). May be used to alter the value of keystrokes that
the operating system returns to NetHack to help compensate for international
keyboard issues. `OPTIONS=subkeyvalue:171/92` will return 92 to NetHack, if
171 was originally going to be returned. You can use multiple subkeyvalue
statements in the config file if needed. Cannot be set in-game.

##* video

Set the video mode used. PC NetHack only. Values are `autodetect`, `default`,
or `vga`. Setting `vga` (or `autodetect` with vga hardware present) will cause
the game to display tiles. Cannot be set in-game.

##* videocolors

Set the color palette for PC systems using NO_TERMS (default
`4-2-6-1-5-3-15-12-10-14-9-13-11`, PC NetHack only). The order of colors is
red, green, brown, blue, magenta, cyan, bright.white, bright.red,
bright.green, yellow, bright.blue, bright.magenta, and bright.cyan. Cannot be
set in-game.

Note: If the `#version`-command shows `screen control via foo`, where foo is
one of `mactty`, `BIOS`, `DJGPP fast`, `VGA graphics` or `WIN32 console I/O`,
then your version of NetHack supports setting videocolors.

##* videoshades

Set the intensity level of the three gray scales available (default dark
normal light, PC NetHack only). If the game display is difficult to read, try
adjusting these scales; if this does not correct the problem, try !color.
Cannot be set in-game.



#* NAO (3.4.3)

[Nethack.alt.org](/wiki/Nethack.alt.org "Nethack.alt.org") implements a few
user interface [patches](/wiki/Patch "Patch") that introduce new options. See
also [the default options file](http://alt.org/nethack/default.nh343rc).

##* Options for the [curses interface](/wiki/Curses_interface "Curses
interface")

See [curses
interface#Configuration_Options](/wiki/Curses_interface#Configuration_Options
"Curses interface") for windowtype, IBMgraphics, cursesgraphics,
align_message, align_status, popup_dialog, term_cols, term_rows,
windowborders, splash_screen, petattr, guicolor, mouse_support.

##* apexception_regex

Boolean option, defaults to off. If on, then [Autopickup
exceptions](/wiki/Autopickup_exception "Autopickup exception") use regular
expressions.

##* AUTOCOMPLETE

Which extended commands autocomplete. Prefixing the command with `!` will
prevent it from being autocompleted. For example:



    AUTOCOMPLETE=save,!quit


##* BINDINGS

Key rebinding. Binding a key to `nothing` will remove the binding. For
example:



    BINDINGS=!:inventory,v:untrap


Accepts `x` for regular key x, `mx` or `m-x` for meta-x, `cx` or `c-x` or `^x`
for ctrl-x, `<enter>`, `<space>` or `<esc>`

##* bones

If off, you will never load [bones](/wiki/Bones "Bones") files. You always
have the normal chances of leaving [bones](/wiki/Bones "Bones"). Boolean
option, default is on. Can be set in-game.

##* botl_updates

Boolean option. If off, the status lines will not be updated, and you must use
the `#updatestatus` to update it. Useful for blind players using a screen
reader.

##* DUNGEONCOLOR

Allows settings the colors for dungeon features. Takes 41 numbers (between 0
and 15), separated by spaces. Order is the same as DUNGEON. For example:



    DUNGEONCOLOR= 0  7  7  7  7  7  7  7  7  7 7  7  7  3  3  3  3  6  2  7 0  7  15 15 3  3  7  7  11 7 4  4  6  1  3  3  3  3  6  7 4


See [Colors#NetHack_color_codes](/wiki/Colors#NetHack_color_codes "Colors").

##* DUNGEONSYMBOLS

Change terrain feature symbols to UTF8 characters. Only applies when
UTF8graphics is on. This takes 41 Unicode codepoints, separated by spaces.
Order is the same as DUNGEON.

Accepts the UTF8 characters in either `U+FFFF` or `0xFFFF` format. See also
SYMBOL for a much easier way to change a single character type (e.g., "altar")
by name.

The following should give an identical output to IBMGraphics:



    DUNGEONSYMBOLS = 0x0020 0x2502 0x2500 0x250C 0x2510 0x2514 0x2518 0x253C \
                     0x2534 0x252C 0x2524 0x251C 0x00B7 0x25A0 0x25A0 0x002B \
                     0x002B 0x2261 0x00B1 0x00B7 0x2591 0x2592 0x003C 0x003E \
                     0x003C 0x003E 0x005F 0x007C 0x005C 0x0023 0x2320 0x2248 \
                     0x00B7 0x2248 0x00B7 0x00B7 0x0023 0x0023 0x0020 0x0023 0x2248


This may be useful if your terminal has issues with CP437 emulation (e.g
corruption on the Rogue level) or if you use a terminal that defaults to UTF-8
graphics (such as the Linux console or GNOME Terminal).

##* hilite_hidden_stairs

Boolean option. Hilight items with [stairs](/wiki/Stairs "Stairs") under them
with red background.

##* hilite_obj_piles

Boolean option. Hilight piles of objects with blue background.

##* hitpointbar

The name and rank text in status line is colored according to Statuscolors and
how much HP you have left. Boolean, defaults to off.

Note that this is available in 3.4.3 with patches and in vanilla 3.6.1, but
not in vanilla 3.4.3 or 3.6.0.

##* hp_monitor

Obsolete. NAO used to have the [HPmon](/wiki/HPmon "HPmon")-patch, but uses
now [Statuscolors](/wiki/Statuscolors "Statuscolors").

##* hp_notify

Show HP changes in the message area. Message is defined by `hp_notify_fmt`.
Useful for blind players using a screen reader.

##* hp_notify_fmt

Sets the notification format for `hp_notify`. Compound option (a string),
default value is `![pic](HP%c%a=%h)`.

Accepts following codes:

  * %a = HP adjustment since last notification. No + or - sign
  * %c = HP adjustment sign ('+' or '-')
  * %h = Current HP
  * %m = Max. HP
  * %H = Current HP, or "max" if hp=maxhp.

##* item_use_menu

Allow using items directly from inventory. Boolean option, defaults to false.

##* menu_glyphs

Show item glyphs (colored symbols) in tty menus. Boolean option, defaults to
off.

##* menucolors



_Main article:[Menucolors](/wiki/Menucolors "Menucolors")_

##*  MONSTERCOLOR

Allows changing color for a monster, for example:



    MONSTERCOLOR=[floating eye](/wiki/Floating_eye "Floating eye"):yellow
    MONSTERCOLOR=[master mind flayer](/wiki/Master_mind_flayer "Master mind flayer"):lightmagenta


Available colours: black, red, green, brown, blue, magenta, cyan, gray,
orange, lightgreen, yellow, lightblue, lightmagenta, lightcyan, white.

[Nethack.alt.org](/wiki/Nethack.alt.org "Nethack.alt.org") and
[UnNetHack](/wiki/UnNetHack "UnNetHack") have it applied.

##* MONSTERSYMBOL

Change monster symbol to UTF8 character. Only applies when UTF8graphics is on.
For example:



    MONSTERSYMBOL='[horse](/wiki/Horse "Horse")':U+24FA


Accepts the UTF8 character in either `U+FFFF` or `0xFFFF` format.

##* MSGTYPE



_Main article:[MSGTYPE](/wiki/MSGTYPE "MSGTYPE")_

Can be used to hide obnoxious messages. On NAO, you can set
`OPTIONS=msgtype_regex` to force MSGTYPE accept regular expressions instead of
globbing.

##* msg_wall_hits

Boolean option. If true, mentions in the message area whenever you walk
against a wall. Useful for blind players.

##* OBJECTSYMBOL

Change object symbol to UTF8 character. Only applies when UTF8graphics is on.
For example:



    OBJECTSYMBOL='[apple](/wiki/Apple "Apple")':0x03a9


Accepts the UTF8 character in either `U+FFFF` or `0xFFFF` format.

##* old_C_behavior

With this option set to true, the "C" command will work as it does in vanilla,
asking you to select a monster to name. Otherwise, typing "C" will bring up
the #name menu. Defaults to false.

##* paranoid_hit

If using the vi-keys, be cautious when moving northwest (y)- not (z)ap, around
peaceful creatures. "y" is also the command to say _yes_ to a question such as
"Really attack [Izchak](/wiki/Izchak "Izchak")?", and it's nearly always a
good idea to answer no. Setting the _paranoid_hit_ option (available if your
game was compiled with the 'paranoid' patch) to _true_ will help, as this will
require you to explicitly type "yes" to hit peacefuls. If you're moving with
(z) you end up running into something. This is a boolean option, and can be
set in-game.

##*  paranoid_quit

Requires you to type out 'yes' instead of just 'y' to confirm #quit-ting the
game.

##* paranoid_remove

Always prompt for the letter of a jewelry/accessory item to (R)emove, even if
only one is worn.

##* quiver_fired

Boolean option. If on, you'll quiver items if you fire them.

##* showborn

In dumplogs, displays the number of each type of monster created, rather than
just the number killed.

##* showbuc

Always show BUC status if it is known. By default, "uncursed" is never shown
to [priests](/wiki/Priest "Priest"), or to anybody for most items with known
charges or enchantment.

##* show_obj_sym

Displays the glyph for an object class in menus and allows its use as a hotkey
to select all objects of that class.

A Boolean. Can be set in-game.

##* sortloot



_Main article:[sortloot](/wiki/Sortloot "Sortloot")_

Defines how inventory, floor and container contents are sorted.

##* STATUSCOLORS



_Main article:[Statuscolors](/wiki/Statuscolors "Statuscolors")_

Can be used to color HP, Pw, and other things on the status lines.

##* SYMBOL

Change terrain feature symbol to UTF8 character. Only applies when
UTF8graphics is on. For example:



    SYMBOL='altar':U+0c30


would make all altars show up as the Pi symbol (π).

Accepts the UTF8 character in either `U+FFFF` or `0xFFFF` format. See also
DUNGEONSYMBOLS.

##* TRAPCOLORS

Allows settings the colors for traps. Takes 22 numbers (between 0 and 15),
separated by spaces. Order is the same as TRAPS. For example:



    TRAPCOLORS= 6 6 7 3 6 1 7 12 4 9 0 0 3 3 5 5 13 7 7 12 12 10


##* use_darkgray

Use the dark gray color for black, instead of blue. Might not work for all
terminals. Boolean option, defaults to off.

##* UTF8graphics

Use UTF-8 (characters for monsters, objects, and dungeon features. Boolean
option, defaults to off. Nearly any Unicode character is allowed, however
combining characters and wide characters currently do not work. Note that this
also does not play well with the [Curses interface](/wiki/Curses_interface
"Curses interface").

See also SYMBOL, DUNGEONSYMBOLS, MONSTERSYMBOL, and OBJECTSYMBOL.

##* vt_tiledata



_Main article:[vt_tiledata](/wiki/Vt_tiledata "Vt tiledata")_

Boolean option. Turning it on will output extra information in the datastream
in the form of escape code "ESC [ ... z", meant for graphical frontends. See
also [EbonHack](/wiki/EbonHack "EbonHack").

##* win_edge

Boolean option. If true, all menu windows are aligned to the left side of the
screen. Defaults to false.



#* NetHack 3.6.0-specific options (Obsolete)

#* NetHack 3.4.3-specific options (Obsolete)

##* asksavedisk

NetHack should ask for save file disk for saving game. Only available if
NetHack was compiled with MFLOPPY. Boolean option, defaults to false. Can be
set in-game. Is saved into the savefile.

##* dungeon

Set the character symbols for displaying the dungeon. Compound option, takes a
string of up to 41 characters, with default values of



    " |--------||.-|++##.##<><>_|\\#{}.}..#* #}"
    (quotes not included; the throne symbol is escaped: nethack reads \\ as one \)



This can also be defined by using ASCII values instead of characters; see
[Custom map symbols#DUNGEON](/wiki/Custom_map_symbols#DUNGEON "Custom map
symbols").

The order of the symbols is: solid [rock](/wiki/Rock "Rock"), vertical
[wall](/wiki/Wall "Wall"), horizontal wall, upper left corner, upper right
corner, lower left corner, lower right corner, cross wall, upward T wall,
downward T wall, leftward T wall, rightward T wall, no [door](/wiki/Door
"Door"), vertical open door, horizontal open door, vertical closed door,
horizontal closed door, [iron bars](/wiki/Iron_bars "Iron bars"),
[tree](/wiki/Tree "Tree"), floor of a room, dark [corridor](/wiki/Corridor
"Corridor"), lit corridor, [stairs](/wiki/Stairs "Stairs") up, stairs down,
[ladder](/wiki/Ladder "Ladder") up, ladder down, [altar](/wiki/Altar "Altar"),
[grave](/wiki/Grave "Grave"), [throne](/wiki/Throne "Throne"), kitchen
[sink](/wiki/Sink "Sink"), [fountain](/wiki/Fountain "Fountain"),
[pool](/wiki/Pool "Pool") or [moat](/wiki/Moat "Moat"), [ice](/wiki/Ice
"Ice"), [lava](/wiki/Lava "Lava"), vertical lowered
[drawbridge](/wiki/Drawbridge "Drawbridge"), horizontal lowered drawbridge,
vertical raised drawbridge, horizontal raised drawbridge, [air](/wiki/Air
"Air"), [cloud](/wiki/Cloud "Cloud"), [under water](/wiki/Underwater
"Underwater").

*NetHack 3.6.0* : This option has been superseded by the symset option.

##* effects

Set the character symbols used for displaying various effects. Compound
option, takes a string of up to 29 characters, with defaults values of
`|-\/*!)(0#@*/-\\||\\-//-\\| |\\-/`

Can also be defined by using ASCII values instead of characters; see [Custom
map symbols#EFFECTS](/wiki/Custom_map_symbols#EFFECTS "Custom map symbols").

The order of the symbols is: vertical beam, horizontal beam, left slant, right
slant, digging beam, [camera](/wiki/Camera "Camera") flash beam, left
[boomerang](/wiki/Boomerang "Boomerang"), right boomerang, four glyphs giving
the sequence for magic resistance displays, the eight surrounding glyphs for
swallowed display, nine glyphs for explosions. An explosion consists of three
rows (top, middle, and bottom) of three characters. The explosion is centered
in the center of this 3 by 3 array.

*NetHack 3.6.0* : This option has been superseded by the symset option.

##* graphics

Set the character symbols used for displaying all graphics. Compound option,
takes a string of up to 92 characters

Can also be defined by using ASCII values instead of characters; see [Custom
map symbols#GRAPHICS](/wiki/Custom_map_symbols#GRAPHICS "Custom map symbols").

*NetHack 3.6.0* : This option has been superseded by the symset option.

##* monsters

Set the character symbols for displaying the [monsters](/wiki/Monster
"Monster"). Compound option, takes a string of up to 60 characters, with
default values of
`abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ@ '&;:~]`

Cannot be set in-game.

Can also be defined by using ASCII values instead of characters; see [Custom
map symbols#MONSTERS](/wiki/Custom_map_symbols#MONSTERS "Custom map symbols").

The order of the symbols is [ant](/wiki/A "A") or other insect, [blob](/wiki/B
"B"), [cockatrice](/wiki/C "C"), [dog](/wiki/D "D") or other canine,
[eye](/wiki/E "E") or sphere, [feline](/wiki/F "F"), [gremlin](/wiki/G "G"),
[humanoid](/wiki/H "H"), [imp](/wiki/I "I") or minor demon, [jelly](/wiki/J
"J"), [kobold](/wiki/K "K"), [leprechaun](/wiki/L "L"), [mimic](/wiki/M "M"),
[nymph](/wiki/N "N"), [orc](/wiki/O "O"), [piercer](/wiki/P "P"),
[quadruped](/wiki/Q "Q"), [rodent](/wiki/R "R"), [arachnid](/wiki/S "S") or
centipede, [trapper](/wiki/T "T") or lurker above, horse or [unicorn](/wiki/U
"U"), [vortex](/wiki/V "V"), [worm](/wiki/W "W"), [xan](/wiki/X "X") or other
mythical/fantastic insect, [light](/wiki/Y "Y"), [zruty](/wiki/Z "Z"),
[angelic being](/wiki/Angelic_being "Angelic being"), [bat](/wiki/Bat "Bat")
or bird, [centaur](/wiki/Centaur "Centaur"), [dragon](/wiki/Dragon "Dragon"),
[elemental](/wiki/Elemental "Elemental"), [fungus](/wiki/Fungus "Fungus") or
mold, [gnome](/wiki/Gnome "Gnome"), [giant](/wiki/Giant "Giant") humanoid,
[invisible monster](/wiki/Invisible_monster "Invisible monster"),
[jabberwock](/wiki/Jabberwock "Jabberwock"), [Keystone Kop](/wiki/Keystone_Kop
"Keystone Kop"), [lich](/wiki/Lich "Lich"), [mummy](/wiki/Mummy "Mummy"),
[naga](/wiki/Naga "Naga"), [ogre](/wiki/Ogre "Ogre"), [pudding](/wiki/Pudding
"Pudding") or ooze, [quantum mechanic](/wiki/Quantum_mechanic "Quantum
mechanic"), [rust monster](/wiki/Rust_monster "Rust monster") or
[disenchanter](/wiki/Disenchanter "Disenchanter"), [snake](/wiki/Snake
"Snake"), [troll](/wiki/Troll "Troll"), [umber hulk](/wiki/Umber_hulk "Umber
hulk"), [vampire](/wiki/Vampire "Vampire"), [wraith](/wiki/Wraith "Wraith"),
[xorn](/wiki/Xorn "Xorn"), [apelike creature](/wiki/Apelike_creature "Apelike
creature"), [zombie](/wiki/Zombie "Zombie"), [human](/wiki/Human "Human"),
[ghost](/wiki/Ghost "Ghost"), [golem](/wiki/Golem "Golem"),
[demon](/wiki/Demon "Demon"), [sea monster](/wiki/Sea_monster "Sea monster"),
[lizard](/wiki/Lizard "Lizard"), long worm tail, and [mimic](/wiki/Mimic
"Mimic").

*NetHack 3.6.0* : This option has been superseded by the symset option.

##* objects

Set the character symbols for displaying the [object](/wiki/Object "Object")
classes. Compound option, takes a string of up to 17 characters, with default
values of `])[="(%!?+/$*`0_.`. Cannot be set in-game.

Can also be defined by using ASCII values instead of characters; see [Custom
map symbols#OBJECTS](/wiki/Custom_map_symbols#OBJECTS "Custom map symbols").

The order of the symbols is illegal-object (should never be seen),
[weapon](/wiki/Weapon "Weapon"), [armor](/wiki/Armor "Armor"),
[ring](/wiki/Ring "Ring"), [amulet](/wiki/Amulet "Amulet"), [tool](/wiki/Tool
"Tool"), [comestible](/wiki/Comestible "Comestible"), [potion](/wiki/Potion
"Potion"), [scroll](/wiki/Scroll "Scroll"), [spellbook](/wiki/Spellbook
"Spellbook"), [wand](/wiki/Wand "Wand"), [gold](/wiki/Gold "Gold"),
[gem](/wiki/Gem "Gem") or rock, [boulder](/wiki/Boulder "Boulder") or
[statue](/wiki/Statue "Statue"), [iron ball](/wiki/Iron_ball "Iron ball"),
[chain](/wiki/Chain "Chain"), and [venom](/wiki/Venom "Venom").

See also [Custom map symbols](/wiki/Custom_map_symbols "Custom map symbols")

*NetHack 3.6.0* : This option has been superseded by the symset option.

##* prayconfirm

Prompt for confirmation before praying. A boolean, defaults to TRUE. Can be
set in-game. Is saved into the savefile.

*NetHack 3.6.0* : This option has been superseded by the
paranoid_confirmation option.

##* sound

Enables messages about what your character hears. Quite a handicap if set to
FALSE.

A boolean, defaults to TRUE. Can be set in-game. Is saved into the savefile.
Some in-game actions, such as [fainting](/wiki/Fainting "Fainting") from
hunger or [praying](/wiki/Praying "Praying"), may reset this option to TRUE.
(This is presumably a [bug](/wiki/Bugs_in_NetHack_3.4.3#soundoption "Bugs in
NetHack 3.4.3").)

*NetHack 3.6.0* : This option has been superseded by the acoustics option.

##* traps

Set the character symbols for displaying traps. Compound option, takes a
string of up to 22 characters, with default values of
`^^^^^^^^^^^^^^^^^"^^^^`. Cannot be set in-game.

Can also be defined by using ASCII values instead of characters; see [Custom
map symbols#TRAPS](/wiki/Custom_map_symbols#TRAPS "Custom map symbols").

The order of the symbols is: arrow trap, dart trap, falling rock trap, squeaky
board, bear trap, land mine, rolling boulder trap, sleeping gas trap, rust
trap, fire trap, pit, spiked pit, hole, trap door, teleportation trap, level
teleporter, magic portal, web, statue trap, magic trap, anti-magic field,
polymorph trap.

*NetHack 3.6.0* : This option has been superseded by the symset option.

##* warnings

Set the character symbols for displaying the [warnings](/wiki/Warning
"Warning"). Compound option, takes a string of up to 6 characters, with
default values of `012345`. Cannot be set in-game.

Can also be defined by using ASCII values instead of characters; see [Custom
map symbols#WARNINGS](/wiki/Custom_map_symbols#WARNINGS "Custom map symbols").

#* UnNetHack

##* showdmg

[Wizard mode](/wiki/Wizard_mode "Wizard mode") option in
[UnNetHack](/wiki/UnNetHack "UnNetHack"), enables printing the amount of
damage inflicted during fight.



[![This article has been updated to reflect NetHack 3.6.1. Click here for more
information.](/mediawiki/images/d/d3/Nh361-icon.png)](/wiki/NetHackWiki:Next_version
"This article has been updated to reflect NetHack 3.6.1. Click here for more
information.")

  1. ↑ [esc](/wiki/Esc "Esc") followed by [d](/wiki/D "D") on unix systems also works
  2. ↑ [src/options.c in NetHack 3.6.0, line 54](/wiki/Source:NetHack_3.6.0/src/options.c#line54 "Source:NetHack 3.6.0/src/options.c")

Retrieved from
"[http://nethackwiki.com/mediawiki/index.php?title=Options&oldid=125889](http://nethackwiki.com/mediawiki/index.php?title=Options&oldid=125889)"

[Categories](/wiki/Special:Categories "Special:Categories"):

  * [Pages with unversioned Refsrc templates](/wiki/Category:Pages_with_unversioned_Refsrc_templates "Category:Pages with unversioned Refsrc templates")
  * [Commands](/wiki/Category:Commands "Category:Commands")
  * [Options](/wiki/Category:Options "Category:Options")
  * [Nethack-361 articles](/wiki/Category:Nethack-361_articles "Category:Nethack-361 articles")

#* Navigation menu

##* Personal tools

  * [Create account](/mediawiki/index.php?title=Special:CreateAccount&returnto=Options "You are encouraged to create an account and log in; however, it is not mandatory")
  * [Log in](/mediawiki/index.php?title=Special:UserLogin&returnto=Options "You are encouraged to log in; however, it is not mandatory \![pic](o\)")

##* Namespaces

  * [Page](/wiki/Options "View the content page \![pic](c\)")
  * [Discussion](/wiki/Talk:Options "Discussion about the content page \![pic](t\)")

##*  Variants

##* Views

  * [Read](/wiki/Options)
  * [View source](/mediawiki/index.php?title=Options&action=edit "This page is protected.
You can view its source \![pic](e\)")

  * [View history](/mediawiki/index.php?title=Options&action=history "Past revisions of this page \![pic](h\)")

##* More

##*  Search

[](/wiki/Main_Page "Visit the main page")

##* Navigation

  * [NetHack Wiki](/wiki/Main_Page)
  * [Forum](/wiki/Forum:Watercooler)
  * [Community portal](/wiki/NetHackWiki:Community_Portal "About the project, what you can do, where to find things")
  * [Recent changes](/wiki/Special:RecentChanges "A list of recent changes in the wiki \![pic](r\)")
  * [Random page](/wiki/Special:Random "Load a random page \![pic](x\)")

##* Popular pages

  * [Dungeon features](/wiki/Dungeon_feature)
  * [Monsters](/wiki/Monster#Canonical_list_of_monsters)
  * [In/Extrinsics](/wiki/Property#Intrinsic_properties)
  * [Items](/wiki/Item)
  * [Spells](/wiki/Spellbook#List_of_spellbooks)
  * [Game options](/wiki/Options)
  * [Websites](/wiki/Websites)

##* Contributing

  * [Style guide](/wiki/NetHackWiki:Style_guide)
  * [How to help](/wiki/NetHackWiki:How_to_help "The place to find out")
  * [Current projects](/wiki/NetHackWiki:Current_projects)

##* Tools

  * [What links here](/wiki/Special:WhatLinksHere/Options "A list of all wiki pages that link here \![pic](j\)")
  * [Related changes](/wiki/Special:RecentChangesLinked/Options "Recent changes in pages linked from this page \![pic](k\)")
  * [Special pages](/wiki/Special:SpecialPages "A list of all special pages \![pic](q\)")
  * [Printable version](/mediawiki/index.php?title=Options&printable=yes "Printable version of this page \![pic](p\)")
  * [Permanent link](/mediawiki/index.php?title=Options&oldid=125889 "Permanent link to this revision of the page")
  * [Page information](/mediawiki/index.php?title=Options&action=info "More information about this page")

  * This page was last edited on 16 May 2019, at 14:27.

  * [About NetHackWiki](/wiki/NetHackWiki:About "NetHackWiki:About")
  * [Disclaimers](/wiki/NetHackWiki:General_disclaimer "NetHackWiki:General disclaimer")

  * [![Powered by MediaWiki](/mediawiki/resources/assets/poweredby_mediawiki_88x31.png)](//www.mediawiki.org/)

