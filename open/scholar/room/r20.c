// /u/j/judd/room/r20.c
inherit ROOM;
string search();

void create ()
{
  set ("short", "中堂");
  set ("long", @LONG
这里是儒门的中堂大厅，两旁挂满了各式各样的笔，墙上则有几
幅山水画，闪烁的烛光，更衬托出儒门的气氛，但也因此看不出两旁
通往何处，只知道前方就是圣贤书的住处。
LONG);

  set("exits", ([ /* sizeof() == 4 */
  "south" : __DIR__"in.c",
  "north" : __DIR__"r17.c",
  "west" : __DIR__"w1.c",
  "east" : __DIR__"e1.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/start/obj/bamboo_pen" : 2,
]));
  set("light_up", 1);

 set("search_desc", ([ /* sizeof() == 1 */
  "山水画" : (: search :),
]));
 setup();
}
string search()
{
if (this_player()->query_temp("shaswordtime")==1)
{
   message_vision("$N在山水画中找来找去 , 摸出了一颗木法珠并收进口带中 \n",this_player() );
   this_player()->set_temp("quests/findball4",1);
   new("/open/gsword/obj1/woodball")->move(this_player());
   return "";
  }
        message_vision("$N在这翻来覆去 , 结果什么也没发现 \n",this_player());
        return "";
}
