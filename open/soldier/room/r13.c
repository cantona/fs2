
inherit ROOM;
void create()
{
  set ("short", "工地");
  set ("long","
    这里插着一块板子:

                 ┌───┐
                 │施工中│  请绕路....
                 └───┘

 ");
   set("exits", ([
   "northwest"   : __DIR__"r11.c",     
  ]));      
  set("light_up", 1);
  setup();
} 

