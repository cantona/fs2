
inherit ROOM;
void create()
{
  set ("short", "小通铺");
  set ("long","
    这一个通铺比之前的还小，但是还算整洁啦，这里可
能就是将领们所睡的地方，在这还有人守卫着，莫非这里
有啥秘密吗..在你面前还有个大大的圆桌(table),上面摆\
\了\一些杂七杂八的东西。

 ");
   set("exits", ([
   "east"   : __DIR__"r26.c",
   
  ]));
  set("item_desc", ([ /* sizeof() == 2 */
  "table" : "一面巨大圆桌，在上面中有一座神像(god)看看吧。。。\n",
  "god"   : "神像说道:看谁像谁,谁看谁,谁都得像谁～\n",
  ]));
  set("light_up", 1);
  setup();
} 

