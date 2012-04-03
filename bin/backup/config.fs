###############################################################################
#              Customizable runtime config file for MudOS v21                 #
###############################################################################
# NOTE: All paths specified here are relative to the mudlib directory except  #
#       for mudlib directory, and binary directory.                           #
# Lines beginning with a # or a newline are ignored.                          #
###############################################################################

# name of this mud
name : 狂想空间

# port number to accept users on
port number : 5000

# the address server is an external program that lets the mud translate
# internet names to numbers (and vice versa).  select an unused port.
address server ip : localhost
address server port : 3990

# absolute pathname of mudlib
mudlib directory : /home/mud/fs

# absolute pathname of driver/config dir
binary directory : /home/mud/fs/bin

# debug.log and author/domain stats are stored here
log directory : /log

# the directories which are searched by #include <...>
# for multiple dirs, separate each path with a ':'
include directories : /include

# Directory to save binaries in.  (if BINARIES is defined)
save binaries directory : /binaries

# the file which defines the master object
master file : /adm/obj/master

# the file where all global simulated efuns are defined.
simulated efun file : /adm/obj/simul_efun

# file to swap out objects; not used if time to swap is 0
swap file : /adm/swapfile

# alternate debug.log file name (assumed to be in specified 'log directory')
debug log file : debug.log

# This is an include file which is automatically #include'd in all objects
global include file : <globals.h>

# if an object is left alone for a certain time, then the
# function clean_up will be called. This function can do anything,
# like destructing the object. If the function isn't defined by the
# object, then nothing will happen.
# This time should be substantially longer than the swapping time.
time to clean up : 3600

# How long time until an unused object is swapped out.
# Machine with too many players and too little memory: 900 (15 minutes)
# Machine with few players and lot of memory: 10000
# Machine with infinite memory: 0 (never swap).
time to swap : 3500

# How many seconds until an object is reset again.
time to reset : 300

# Maximum number of bits in a bit field. They are stored in printable
# strings, 6 bits per byte.
maximum bits in a bitfield : 2000

# Max number of local variables in a function.
maximum local variables : 30

# Maximum amount of "eval cost" per thread - execution is halted when
# it is exceeded.
maximum evaluation cost : 1000000

# This is the maximum array size allowed for one single array.
maximum array size : 40000

# This is the maximum allowed size of a variable of type 'buffer'.
maximum buffer size : 400000

# Max size for a mapping
maximum mapping size : 15000

# Max inherit chain size
inherit chain size : 30

# maximum length of a string variable
maximum string length : 200000

# Max size of a file allowed to be read by 'read_file()'.
maximum read file size : 200000

# max number of bytes you allow to be read and written with read_bytes
# and write_bytes
maximum byte transfer : 10000

# Reserve an extra memory area from malloc(), to free when we run out
# of memory and allow the mudlib to shutdown.
# If this value is 0, no area will be reserved.
reserved size : 0

# Define the size of the shared string hash table.  This number should
# a prime, probably between 1000 and 30000; if you set it to about 1/5
# of the number of distinct strings you have, you will get a hit ratio
# (number of comparisons to find a string) very close to 1, as found strings
# are automatically moved to the head of a hash chain.  You will never
# need more, and you will still get good results with a smaller table.
hash table size : 10000

# Object hash table size.
# Define this like you did with the strings; probably set to about 1/4 of
# the number of objects in a game, as the distribution of accesses to
# objects is somewhat more uniform than that of strings.
object table size : 10000

# default no-matching-action message
default fail message : 你是不是想美眉想疯了啊? 再试一次吧 ..

# default message when error() occurs (optional)
default error message : 似乎好像发生了一点怪事了, 快去找巫师解决吧~

###############################################################################
#          The following aren't currently used or implemented (yet)           #
###############################################################################

# maximum number of users in the game (unused currently)
maximum users : 200

# Max number of local variables in a function.
maximum local variables : 200

# Define the maximum stack size of the stack machine. This stack will also
# contain all local variables and arguments.  (unused currently)
evaluator stack size : 2000

# Define the size of the compiler stack. This defines how complex
# expressions the compiler can parse.  (unused currently)
compiler stack size : 200

# Define the maximum call depth for functions. (unused currently)
maximum call depth : 30

# There is a hash table for living objects, used by find_living().
# (unused currently)
living hash table size : 100
