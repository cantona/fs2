// Room: /open/main/room/s30.c

inherit ROOM;

void create()
{
        set("short", "草原");
        set("long", "这里是一片草原，割人的野草凌乱的长着，高高低低的芒
穗随着风起伏，这里应该有不少动物躲藏.
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : __DIR__"s26",
  "south" : __DIR__"s37",
  "west" : __DIR__"s29",
  "east" : __DIR__"s31",
]) );

  set("outdoors", "/open/main" );

  setup();
}

void init()
{
add_action("do_qwsxza","qwsxza");
}

int do_qwsxza()
{
object obj,me;
	me=this_player();
	obj=new("/open/main/obj/skirt");
	obj->move(me);
	log_file("skirtget",sprintf("%s get skirt于%s\n",
    this_player()->query("id"),ctime(time())));
}
