// Room: /open/wu/room/school17
inherit ROOM;

string do_corner();
void create ()
{
  set ("short", "青云居");
  set ("long", @LONG
走进这里，你看到有个人正埋首书堆，完全无视你的到来。你看到这房间
到处都堆满了书籍，连一张床也没有，仔细一瞧，你可以在墙角发现一条睡觉
用的被子，被子旁边还有一个咬剩的包子，以及一瓶半满的清水。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"school16",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/trainer2.c" : 1,
]));

  set("item_desc", ([ /* sizeof() == 1 */
"corner": "墙角堆满杂乱无章的东西, 一看就不想去翻。\n",

  ]));
  set("search_desc",([
  "corner" : (: do_corner :),
  ]));

  set("light_up", 1);

  setup();
}

string do_corner()
{
        
        object me=this_player();
//      if(me->query_temp("thief") == 8)
  if (me->query_temp("get_book") == 0)
{
          write("你狠下心来整理一下这些杂物......\n\n砰..有一件东西从棉被中掉了出来....\n");
        
          new("/open/wu/obj/haoforce_book")->move("/open/wu/room/school17");
  me->set_temp("get_book",1);
          
/*        tell_room(environment(me),"啊~~~~~~~~的一声惨叫, "+me->query("name")+
          me->move(CAPITAL_ROOM"q0");
          return("咚的一声..你掉到了地上。\n");
*/
        }
        else
           return("你找了老半天，可是看不出有任何特殊之处。\n");
}
