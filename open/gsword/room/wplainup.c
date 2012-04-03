// Room: /open/gsword/room/wplainup.c
inherit ROOM;

void create()
{
  set ("short", "松树上");
  set ("long", @LONG
站在高高的树上，远眺四方，西北方是武林泰斗仙剑派，东南方则是蜀中城
再向远望 ，尽是绵延无尽的山脉，袅袅云烟环绕，似乎又是另外一个世界。

LONG);

  set("objects", ([ /* sizeof() == 1 */
 "/open/gsword/mob/eagle" : 2,
]) );

  set("outdoors", "/open/gsword/room" );

  set("exits", ([ /* sizeof() == 1 */
  "down" : __DIR__"wplain1",
]) );

  setup();
}
