inherit ROOM;

void create ()
{
  set ("short", "金刀门外");
  set ("long", @LONG

大门上面高高的悬着一块琉璃黄金匾，上头写着‘金刀门’三个斗大的字
阳光照耀下，反射出耀眼的金光，朱红色的大门开着，门上两个门环俱做
狮头状，看起来沈甸甸的，显的气派非凡。门两旁各蹲着一个雕的栩栩如
生的石狮子，狮子旁站着两名侍卫正盯着你瞧。

LONG);

  set("objects", ([ /* sizeof() == 2 */
  "/open/gblade/npc/guard.c" : 1,
  "/open/gblade/npc/guard2" : 1,
]));
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 4 */
	"south" : "/open/port/room/r4-1",
  "enter" : __DIR__"g1-2.c",
]));

  setup();
}
 int valid_leave(object me, string dir)
 {
	if(dir=="enter"&&present("gold-blade guard",environment(me)))
  {
  if(me->query("class")=="poisoner")
	return notify_fail("金刀武士怒喝 : 魔教徒休想进去一步\n");
  if(me->query("class")=="killer")
    return notify_fail("金刀武士说道 : 干什么 , 想进去杀人放火吗 ?\n");
  if(me->query("family/family_name")=="金刀门")
  return 1;
   if(!me->query_temp("allow-enter")&&!me->query("quests/bochen_trouble"))
    return notify_fail("金刀武士拦住你的去路 ,说道 :你以为金刀门是什么地方 ? 任你来去自如 ?\n");
   }
  return 1;
  }
