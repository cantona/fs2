 
//      File    :  /cmds/xtra/_grep.c
//      Creator :  Watcher@TMI-2  (04/26/93)
//
//      This is a new and improved grep command that will even
//      accept directories, piping, and argument flags.
 
inherit F_CLEAN_UP;
 
static int grep_file(string pattern, string file, int count, int lnnum,
                     int nomat, int exact);
 
#define SYNTAX  "Syntax: grep [-cnvx] [pattern] [file | directory]\n" + \
                "        grep [-cnvx] [pattern] [file | directory] > [file]\n"
 
static mixed *hold;
static int matches, busy;
 
int main(object me ,string str) {
   string *files, pattern, pipe, where, flag, tmp1, tmp2;
   int count, lnnum, nomat, exact, loop;

   notify_fail( SYNTAX );
 
   if(!str || str == "")  return 0;
 
   //   Check for piping to a file.

   if(sscanf(str, "%s > %s", str, pipe) == 2)
        pipe = resolve_path(me->query("cwd"), pipe);
 
   //   Check for argument flags (c,n,v,x)
 
   if(sscanf(str, "-%s %s", flag, str) == 2) {
 
        if(sscanf(" " + flag + " ", "%sc%s", tmp1, tmp2) == 2)  count = 1;
        if(sscanf(" " + flag + " ", "%sn%s", tmp1, tmp2) == 2)  lnnum = 1;
        if(sscanf(" " + flag + " ", "%sv%s", tmp1, tmp2) == 2)  nomat = 1;
        if(sscanf(" " + flag + " ", "%sx%s", tmp1, tmp2) == 2)  exact = 1;

   }
 
   if(sscanf(str, "\"%s\" %s", pattern, where) != 2)
     if(sscanf(str, "'%s' %s", pattern, where) != 2)
       if(sscanf(str, "%s %s", pattern, where) != 2)  return 0;
 
   if(busy) {
   write("The grep command is presently busy. Please try again shortly.\n");
   return 1; }
 
   if(nomat && exact) {
   write("Grep: Cannot specify both the v and x options.\n");
   return 1; }
 
   seteuid(getuid(this_player()));
 
   //   Reset grep status variables.

   hold = ({ });  matches = 0;

 
   //   Complete the path of the location request.
 
   where = resolve_path(me->query("cwd"), where);

 
   //   Get array of all possible location matches.
 
//   files = (string *)this_player()->wild_card(where);
   files = get_dir(where);
 
   if(!files || !sizeof(files)) {
     notify_fail("Grep: No such file pattern found.\n");
   return 0; }
 
 
   //   Check to see if the request is a directory.
 
   if(sizeof(files) == 1 && file_size(files[0])==-2) {
 
        //files = (string *)this_player()->wild_card(files[0] + "/*");
        files = get_dir(files[0]);
 
        if(!files || !sizeof(files)) {
        notify_fail("Grep: Directory is empty.\n");
        return 0; }

   }
 
  //    Activate busy flag to prevent data overwriting.
 
  busy = 1;
 
   //   Loop through and grep each selected file.
 
   for(loop=0; loop<sizeof(files); loop++) 
   {
        tmp1 = resolve_path(me->query("cwd"),files[loop]);
    // if(catch(grep_file(pattern, files[loop], count, lnnum, nomat, exact))) 
     if(catch(grep_file(pattern, tmp1, count, lnnum, nomat, exact))) 
     write("Grep: An evaluation error has occurred. Grep is incomplete.\n");
   }
 
   //   Give the resulting output ...

   if(!hold || !sizeof(hold) || hold == ({}))
   write("Grep: No pattern matches found.\n");
 
   else if(count) 
   write("Grep: " + matches + " line" + (matches == 1 ? " has " : "s have ") +
         "pattern matches.\n");
 
   else if(pipe) {

		if(!master()->valid_write(pipe, me, "grep" ))
        write("Grep: Access denied in " + pipe + ".\n");

        else {
        if(!write_file(pipe, implode(hold, "\n")))
        write("Grep: Failed to pipe pattern matches to " + pipe + ".\n");
        else write("Grep: Pattern matches piped to " + pipe + ".\n");
        }

   }
 
   else  me->start_more( implode(hold ,"\n") );

 
   //   All done with the grep ... remove busy flag.
 
   busy = 0;
 
return 1; }
 
static int grep_file(string pattern, string file, int count, int lnnum,
                     int nomat, int exact) {
   string *lines, *tmp, dump;
   int loop;
 
   dump = read_file( file );

   if(!dump) {
     notify_fail("Grep: " + file + " not found.\n");
   return 0; }
 
   lines = explode(dump, "\n");

   for(loop=0; loop<sizeof(lines); loop++) {
 
        if(exact) {
 
          if(lines[loop] == pattern) {  
          if(!tmp)  tmp = ({ "[" + file + "]" });
          tmp += ({ (lnnum ? (loop+1) + ":" : "") + lines[loop] });
          matches++; }
 
        continue; }
 
        if(sizeof(regexp( ({ lines[loop] }), pattern))) {
        if(nomat) continue;
        if(!tmp)  tmp = ({ "[" + file + "]" });
        tmp += ({ (lnnum ? (loop+1) + ":" : "") + lines[loop] });
        matches++; }
 
        else if(nomat) {
        if(!tmp)  tmp = ({ "[" + file + "]" });
        tmp += ({ (lnnum ? (loop+1) + ":" : "") + lines[loop] });
        matches++; }
 
   }
 
   if(tmp)  hold += tmp + ({ "" });
 
return 1; }
 
int help() {

   write( SYNTAX + "\n" +
    "The grep command allows you to produce a list of all lines within a\n" +
    "named file or directory of files that matches the given pattern. It\n" +
    "supports the regular expression patterns used by the regexp() efun, and\n"+
    "allows the use of the unix c, n, v, and x flags. If the c flag is used\n"+
    "only a count of matching lines found will be displayed. The n flag\n" +
    "causes all matching lines to be prepened with that line's corresponding\n"+
    "line number. The v flag results in an output of all those lines that\n" +
    "do not match the requested pattern, and the x flag results in an output\n"+
    "of only those lines that exactly match the requested pattern. You may\n"+
    "also pipe the output into a file with the \" > [file]\" ending.\n"+
    "已改良 grep, 如果要搜寻的字串有空白，可以用双(单)引号括起来。\n"+
    "by wade@Fantasy.Space 11/14/1999\n");
 
return 1; }
 
 
