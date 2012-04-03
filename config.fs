###############################################################################
#              Customizable runtime config file for MudOS 0.9.20              #
###############################################################################
# NOTE: All paths specified here are relative to the mudlib directory except  #
#       for mudlib directory, and binary directory.                           #
# Lines beginning with a # or a newline are ignored.                          #
###############################################################################

# name of this mud
name : 狂想空间

# port number to accept users on
port number : 4000

# the address server is an external program that lets the mud translate
# internet names to numbers (and vice versa).  select an unused port.
address server ip : localhost
address server port : 1025

# absolute pathname of mudlib
mudlib directory : ./

# absolute pathname of driver/config dir
binary directory : ./

# debug.log and author/domain stats are stored here
log directory : /log

# the directories which are searched by #include <...>
# for multiple dirs, separate each path with a ':'
include directories : /include

# Directory to save binaries in.  (if BINARIES is defined)
save binaries directory : /binaries

# the file which defines the master object
master file : /adm/obj/master

# The global include file is included automatically.
global include file : <globals.h>

# the file where all global simulated efuns are defined.
simulated efun file : /adm/obj/simul_efun

# file to swap out objects; not used if time to swap is 0
swap file : /adm/tmp/swapfile

# alternate debug.log file name (assumed to be in specified 'log directory')
debug log file : debug.log

# if an object is left alone for a certain time, then the
# function clean_up will be called. This function can do anything,
# like destructing the object. If the function isn't defined by the
# object, then nothing will happen.
# This time should be substantially longer than the swapping time.
time to clean up : 1800
# old value : 1800

# How long time until an unused object is swapped out.
# Machine with too many players and too little memory: 900 (15 minutes)
# Machine with few players and lot of memory: 10000
# Machine with infinite memory: 0 (never swap).
time to swap : 1200

# How many seconds until an object is reset again.
time to reset : 300

# Maximum number of bits in a bit field. They are stored in printable
# strings, 6 bits per byte.
maximum bits in a bitfield : 1200

# Max number of local variables in a function.
maximum local variables : 50

# Maximum amount of "eval cost" per thread - execution is halted when
# it is exceeded.
# Because of the heavy load on the Power PC, made it larger to pass the
# bad time. (By Annihilator)
maximum evaluation cost : 1500000

# This is the maximum array size allowed for one single array.
maximum array size : 15000

# This is the maximum allowed size of a variable of type 'buffer'.
maximum buffer size : 400000

# Max size for a mapping
maximum mapping size : 15000

# Max inherit chain size
inherit chain size : 30

# maximum length of a string variable
maximum string length : 200000

# Max size of a file allowed to be read by 'read_file()'.
maximum read file size : 500000

# max number of bytes you allow to be read and written with read_bytes
# and write_bytes
maximum byte transfer : 200000

# Reserve an extra memory area from malloc(), to free when we run out
# of memory; so begins Armageddon.
# If this value is 0, no area will be reserved.
reserved size : 0

# Define the size of the shared  string hash table.  This number should
# a prime, probably between 1000 and 30000; if you set it to about 1/5
# of the number of distinct strings you have, you will get a hit ratio
# (number of comparisons to find a string) very close to 1, as found strings
# are automatically moved to the head of a hash chain.  You will never
# need more, and you will still get good results with a smaller table.
hash table size : 7001
# old : 7001
# Object hash table size.
# Define this like you did with the strings; probably set to about 1/4 of
# the number of objects in a game, as the distribution of accesses to
# objects is somewhat more uniform than that of strings.
object table size : 3000

# default no-matching-action message
default fail message : 什么？

# default message when error() occurs (optional)
default error message : [1;33m你发现事情不大对了，但是又说不上来。[2;37;0m

###############################################################################
#          The following aren't currently used or implemented (yet)           #
###############################################################################

# maximum number of users in the game.
maximum users : 200

# Define the maximum stack size of the stack machine. This stack will also
# contain all local variables and arguments.  (unused currently)
evaluator stack size : 1000

# Define the size of the compiler stack. This defines how complex
# expressions the compiler can parse.  (unused currently)
compiler stack size : 200

# Define the maximum call depth for functions. (unused currently)
maximum call depth : 30

# There is a hash table for living objects, used by find_living().
# (unused currently)
living hash table size : 100

