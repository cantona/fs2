// Room: /open/main/room/M15.c

inherit ROOM;

void create ()
{
  set ("short", "少林寺山门");
  set ("long", @LONG
	爬到这石阶的顶端，可以看到有一座山门，
	门上题着两个字「少林”，字迹入木三分，
	似乎并不是用器具刻上去的。


LONG);

  set("exits", ([ /* sizeof() == 3 */
  "southdown" : "/open/main/room/M19",
"enter":"/open/bonze/room/r5",
  "eastdown" : "/open/main/room/M16",
]));

  setup();
}
