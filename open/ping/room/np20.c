#include <ansi.h>
inherit ROOM;

string do_shelf();
void create ()
{
  set ("short", "秘密书房");
	set( "build", 13 );
  set ("long", @LONG
走进这里，你看到满室的书柜(shelf)及字画(picture), 原来你已走进了
段云的秘密书房, 段云毕生蒐集的经典文集和武学宝典都收藏在此, 你心想如
果只拿走一两本秘笈应该不会有人发现吧.....

LONG);

  set("item_desc", ([ /* sizeof() == 2 */
  "picture" : "天下风云出我辈，一入江湖岁月摧，皇图霸业谈笑中，不胜人生一场醉。
",
  "shelf" : "这上面繙﹞F各种秘笈和文集, 你忍不住想拿几本来翻□search)。",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/boy.c" : 1,
]));
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 2 */
  "out" : __DIR__"p1",
  "pray" : "/open/ping/room/talkroom",
]));
  set("search_desc", ([ /* sizeof() == 1 */
  "shelf" : (: do_shelf :),
]));

  setup();
}

int valid_leave(object me, string dir)
{
if( dir=="pray" && me->query("family/family_name")!="段家" )
return notify_fail("洋葱小丸子"NOR"似笑非笑的对你说: 不给进。\n");
        return ::valid_leave(me, dir);
}
string do_shelf()
{

        object me=this_player();
  if (me->query_temp("get_sbook") == 0)
{
          write("你仔细的观看架上的书籍......\n\n突然有一本书从书架上掉了下来....\n");

          new("/open/ping/obj/sunforce_book")->move(__DIR__"np20");
          me->set_temp("get_sbook",1);

        }
        else
           return("你找了老半天，可是看不出有任何特殊之处。\n");
}

