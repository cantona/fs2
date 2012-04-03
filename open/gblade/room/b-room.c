// Room: /u/w/wugi/b-room.c
inherit ROOM;
string search_shelf();
int i=1;
void create ()
{
  set ("short", "内书房");
  set ("long", @LONG
这儿鼎焚百合之香，瓶插长春之蕊，画栋雕檐，珠帘绣幕，四周静
悄悄的，无一人声，你仿佛听到自己的心跳声，‘噗通！噗通！’。四
周望去见有数十个书架（shelf），用封条封着。
通常这个地方只有门主跟他的家眷们可以自由进出，要是没有什么事情
的话你还是快出去吧！


LONG);

  set("item_desc", ([ /* sizeof() == 1 */
	"shelf" : "书架上摆\的都是有关金刀门历史的书籍，让一心以为可以从这里找到武功秘笈的你觉的有些失望 .
",
]));
  set("light_up", 1);
  set("no_magic", 1);
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"g3-7.c",
]));
  set("no_fight", 1);
  set("search_desc", ([ /* sizeof() == 1 */
  "shelf" : (: search_shelf :),
]));

  setup();
}
string search_shelf()
{
	if(i>0)
	{
	i=i-1;
	message_vision("$N在书架中找来找去 , 拿了一本书放入怀中 \n",this_player() );
	new("/open/gblade/obj/papyrus")->move(this_player());
	return "";
	}
if (this_player()->query_temp("shaswordtime")==1)
{
    message_vision("$N在书架中找来找去 , 摸出了一颗金法珠并收进口带中 \n",this_player() );
    this_player()->set_temp("quests/findball1",1);
   new("/open/gsword/obj1/gball")->move(this_player());
    return "";
}
	message_vision("$N在书房中翻来覆去 , 结果什么也没发现 \n",this_player() );
	return "";
}
