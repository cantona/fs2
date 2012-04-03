// Room: /u/m/moner/room/room7.c
inherit ROOM;

void create ()
{
  set ("short", "内厅");
  set ("long", @LONG

一走进内厅，映入眼帘的便是一幅人像图(picture)，两旁襢香木椅散发着阵
阵的襢香，紫琉水晶灯将屋内点缀的像白昼一般，屋上方挂着一个香寰，上面的香
正袅袅的烧着，烟冉冉的绕着你飞舞，令你不知置身何处。屋中央的四色琉璃桌散
发着奇诡的色彩，放置其上的刀也相互辉映着。
  烟袅袅的升上半空，像中的人眼中散发着奇异的色彩....。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"room1.c",
]));
  set("item_desc", ([ /* sizeof() == 2 */
"word" : "苍天已灭，魔刀当立。\n",
  "picture" : "一幅人像图, 图中之人有八分似魔刀老人, 图旁有一行小字(word)
",
]));
  set("light_up", 1);

  setup();
}
/*
void init()
{
        add_action("do_pray","pray");
  }
int do_pray(string arg )
{
        object ob;
        ob=this_player();
          if(ob->query("sen") > 20)
        {
message_vision("$N跪了下来,向人像图磕了几个响头....\n",this_player());
 if(random(10)>8)
        {
call_out("do_act1",3,ob);
        return 1;
        }
        else
message_vision("$N心意不够诚恳, 无法回应老人的心思..\n", this_player()
);
        return 1;
}
}
int do_act1(object ob)
   {
 message_vision("$N仿佛看到老人的眼中闪出一道光芒......
 
$N心中一震, 似有所晤...。\n\n",ob);
ob->add("bellicosity",1);
ob->add("sen",-40);
     return 1;
}
*/
