
inherit ROOM;
void create()
{
  set ("short", "茅厕");
  set ("long","
    这里四面暗闷闷的，两旁各有两条水沟，这里乌七八
黑的空气中充满了浓浓的怪味道，难道是所有士兵们拉拉
拉拉机的地方，真是壮观啊。

 ");
   set("exits", ([
   "east"   : __DIR__"r3.c",
   
  ]));      
  set("light_up", 1);
  setup();
} 
