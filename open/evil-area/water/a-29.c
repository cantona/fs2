inherit "/std/room/shop";

void create ()
{
        set("short","路边摊");
	set("long", @LONG
一个小型的摊贩摆至于一旁，不过，对于这些物品，你似乎都不
太感兴趣...
LONG);
	set("evil_area",1);
	set("no_transmit",1);
	set("exits",([
"west" : __DIR__"a-12",
]));
setup();
}
