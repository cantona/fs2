// Room: /open/wu/room/luroom23.c
// 泷山武馆的禁地
inherit ROOM;
void create ()
{
  set ("short", "禁地");
  set ("long", @LONG
这里是泷山武馆内的禁地门口,往下话是通往泷山派所严令禁止的禁地
禁地的看守者是泷山派第六代弟子中绝顶的弟子---任严天、李定延---
从他们身上所散发的气味就可以知道他们绝对是一流的高手,有他们来看
守泷山的禁地,绝对是万无一失。北边则是通往泷山武馆的内院。
LONG);
  set("exits", ([ /* sizeof() == 5 */
  "north" : "/open/wu/room/luroom20",
  "down" : "/open/wu/room/gen1",
  ]));
  set("light_up", 1);
  set("objects", ([ /* sizeof() == 1 */
        "/open/wu/npc/sky_yan_jen" : 1,
      "/open/wu/npc/yan_din_lee" : 1,
]));
  setup();
}
int valid_leave(object me, string dir)
{
 if( dir == "down")
{
if(me->query("title")=="泷山奥义传人")
return 1;
if((me->query("family/family_name") == "泷山派") && (me->query("title") != "泷山绝学传人"))
      return notify_fail("只有泷山绝学传人才能进禁地!!\n");
else
if(!me->query("go_ya"))
      return notify_fail("只有对泷山派有恩的人才能通行无阻!!\n");
return ::valid_leave(me,dir);
}
   return ::valid_leave(me,dir);
}
