
inherit ROOM;

void create()
{
  set ("short", "树丛小径");
  set ("long", @LONG
这是一条很不显眼的小径，丛生的杂草，以及蔽天的树木，让你很难分得
清楚方向。你注意到东边隐隐约约有一座塔，你想你可以往那个方向找找。
LONG);

  set("outdoors", 1);
  setup();
}
void init() {
//   add_action("do_east","east");
   add_action("do_search","search");
}
/*
int do_east(string str) {
     if(!str){
        tell_object(this_player(),"你穿过树丛～～\n");
        this_player()->move(__DIR__"road2");
        return 1;}
     else {
        tell_object(this_player(),"这个方向没有出路。\n");
        return 1;}
}
*/

 int valid_leave( object who , string dir ) {
     if(dir == "east") { 
        tell_object(this_player(),"你穿过树丛～～\n");
        this_player()->move(__DIR__"road2");
        return notify_fail("");
	}
     return ::valid_leave( who , dir );
}


int do_search(string str) {
     if(str == "east"){
        tell_object(this_player(),"你穿过树丛～～\n");
        this_player()->move(__DIR__"road2");
        return 1;}
     else {
        tell_object(this_player(),"你似乎可以往东方找找看。\n");
        return 1;}
}


