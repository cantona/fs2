inherit ROOM;

void create ()
{
  set ("short", "花圃");
  set ("long", @LONG

你顺着花香走到了这里，只见黄花满地，白柳横坡。小桥通若耶之溪，曲
径接天台之路。石中清流滴滴，篱落飘香；树头红叶翩翩，疏林如画。再
往前走去，一树花木皆无，只见许多异草，--或牵藤，或引蔓，或如翠带
飘飘，或如金绳蟠屈，或实若丹砂，或花如金桂。--味香气馥，非凡花可
比。面前一双玉色蝴蝶，大如团扇，一上一下，迎风翩千。一旁有婢女正
拿着扇子向草地下来扑。


LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/gblade/npc/girl" : 1,
  "/open/gblade/npc/butterfly.c" : 2,
]));
  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"g3-2",
  "west" : __DIR__"g3-4",
  "south" : __DIR__"g3-6",
  "east" : __DIR__"g2-4",
]));

  setup();
}
void init()
{
	add_action("do_cover","cover");
}
int do_cover(string str)
{
	object ob;
	if(!present("net",this_player()))
	return 0;
	if(str!="butterfly")
	return notify_fail("你要抓什 ??\n");
	if(!ob=present("butterfly",environment(this_player())))
	return notify_fail("没半只啦 !\n");
	message_vision("$N用手中捕虫网 , 往玉面蝴蝶罩去 \n",this_player());
	if(random(10)>6)
	{
	message_vision("结果唰的一声 , $N登时动弹不得 \n",ob);
	new("/open/gblade/npc/butterfly")->move(this_player());
	destruct(ob);
	message_vision("$N从捕虫网中将玉面蝴蝶拿出 \n",this_player());
	return 1;
	}
	message_vision("结果$N及时发现 , 躲了开去 \n",ob);
return 1;
}
