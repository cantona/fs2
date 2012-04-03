// Room: /open/wu/room/school17
inherit ROOM;

void create ()
{
  set ("short", "青云居");
  set ("long", @LONG
走进这里，你看到有个人正埋首书堆，完全无视你的到来。你看到这房间
到处都堆满了书籍，连一张床也没有，仔细一瞧，你可以在墙角发现一条睡觉
用的被子，被子旁边还有一个咬剩的包子，以及一瓶半满的清水。假如你仔细
注意一下，你会发觉东边书架后有一个不起眼的窗户。
LONG);
  set("item_desc", ([ /* sizeof() == 1 */
  "window" : "    一个木框小窗，你有一点点想跳出去看看外头有些什么！\n",
]));

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"school16",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/trainer2.c" : 1,
]));
  set("light_up", 1);

  setup();
}

void init() {
   add_action("do_jump","jump");
}
int do_jump(string str) {
     if(str != "window"){
        tell_object(this_player(),"你要从哪儿跳出去啊？\n");
        return 1;}
     else {
        tell_object(this_player(),"你往窗外奋力一跳～～。\n");
        this_player()->move(__DIR__"road1");
        return 1;}
}
