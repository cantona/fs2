
inherit ROOM;
void create()
{
  set ("short", "饭厅");
  set ("long","
    这是士兵们聊天吃饭的地方，虽然小了一点，但是该
有的东东还是有，果然是麻雀虽小五脏俱全，你看到旁边
的打饭兵忙的不逸乐乎，一副欠打的样子。

 ");
   set("exits", ([
   "north"   : __DIR__"r1.c",
   "west"    : __DIR__"r3.c",
  ]));      
  set("light_up", 1);
  setup();
} 
