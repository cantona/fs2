inherit ROOM;

void create ()
{
  set ("short", "青石板路");
  set ("long", @LONG

从大门延伸过来通往正厅的青石板路，路的两旁种满青松，绿柳等，风一
吹来，青松拂檐，绿柳周垂，路旁立有一石。

LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "stone" : "
石头上印有一个手印，也不知道是谁竟然有如此的掌力，能在坚硬的石头
上，留下这样一个手印，手印旁边留有几个字。
          
	金刀门主宰赵无忌 , 女主宰无名到此一游

",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/gblade/npc/s-guardian" : 2,
]));
  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"g1-3.c",
  "north" : __DIR__"gblade.c",
]));

  setup();
}
void init()
{
	add_action("do_move","move");
	add_action("do_enter","enter");
}
int do_enter(string str)
{
	if(!str || str != "hole")
	return notify_fail("你想钻什?\n");
	if(!query("stone_moved"))
	return notify_fail("看清楚 , 这里有洞吗 ?\n");
	message_vision("$N从小洞里钻了进去 !\n",this_player() );
	this_player()->move("/open/gblade/room/c1-1");
	message_vision(" 碰 的一声 , $N掉到了地下!\n",this_player());
return 1;
}
int do_move(string str)
{
	if(!str || str != "stone")
	return notify_fail("你要移动什么 ?\n");
	if(this_player()->query("str")+this_player()->query("max_force")/10 < 150 )
	return notify_fail("你的力量不够!\n");
	if(query("stone_moved") )
	return notify_fail("石头已经被推开啦 !\n");
	message_vision("$N走到石头旁 , 运功将石头推开 !\n",this_player() );
	message_vision("石头被推开后 , 露出了一个小洞 !\n",this_player() );
	set("stone_moved",1);
	set("long", @LONG

从大门延伸过来通往正厅的青石板路，路的两旁种满青松，绿柳等，风一
吹来，青松拂檐，绿柳周垂，地上有个小洞 .

LONG);
set("item_desc", ([
"hole": "
一个天然形成的小洞 , 也许你能钻的进去 !
",
]));
return 1;
}
