// Room: /u/o/onion/room/bedroom.c

inherit ROOM;

void create()
{
	set("short", "仆人卧室");
	set("long", @LONG
这里是镳局内仆人生活起居的地方,里面的摆设并不算太差,看起来和平民的住家类似,
这里有几个仆人正坐在椅子上聊天,聊的似乎很起劲的样子,说的口沫横飞...

LONG
	);
	set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"room4",
]));
        set("objects", (["/u/o/onion/npc/worker": 1, 
        		 "/u/o/onion/npc/footboy": 1 ]));
                      
	setup();
}
