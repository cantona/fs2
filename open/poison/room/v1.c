// Room: /u/r/ranko/vil1.c
inherit ROOM;

void create ()
{
  set ("short", "隔世村村口");
  set ("long", @LONG
这里是隔世村的村口，此村由于地处偏僻，且村民大多自给自
足，不需外来的物资供给，因此此地鲜有外人造访，村民们过着与
世隔绝的生活，这也是此村村名的命名来由。
 
LONG);

  set("light_up", 1);
  set("outdoors", "/u/r/ranko");
  set("exits", ([ /* sizeof() == 2 */
  "northeast" : __DIR__"road9.c",
  "west" : __DIR__"v2-1.c",
]));

  setup();
}
