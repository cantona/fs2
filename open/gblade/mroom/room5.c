inherit ROOM;
void create ()
{
  set ("short", "地下室");
  set ("long", @LONG

这是一个空旷、干净的地下室，屋子中央放置着一个箱子(box)。

LONG);

set("item_desc", ([ /* sizeof() == 1 */
"box" : "箱子外面贴着‘禁止触碰’的封条。
",
]));

set("search_desc", ([ /* sizeof() == 1 */
"box" : "你发现箱子怪怪的，似乎可以移动。
",
]));

  set("exits", ([ /* sizeof() == 1 */
  "out" : __DIR__"room3.c",
]));

  set("light_up", 1);
  setup();
}
void init()
{
        add_action("do_move","move");
        add_action("do_push","push");
}

int do_move(string str)
{
if(!str || str != "box")
return notify_fail("你要移动什么?\n");
if(this_player()->query("family/family_name")=="雪苍派"||this_player()->query("family/family_name")=="魔刀门"||
this_player()->query("family/family_name")=="魔刀莫测") {
if(this_player()->query("combat_exp")>300000) {
if(!query_temp("box_moved")) {
set_temp("box_moved",1);
message_vision("$N移动了箱子，发现箱子下面竟然出现了一个按钮(button)。\n",this_player());
    return 1;
        }
        else {
                delete_temp("box_moved");
                message_vision("$N将箱子移回原位。\n", this_player());
                if(query("exits/down"))
                  delete("exits/down");
    return 1;
        }
        }
message_vision("你的经验值不够移动箱子。\n",this_player());
        return 1;
        }
message_vision("你不是雪苍或本门弟子，所以不能移动箱子。\n",this_player());
        return 1;
}

int do_push(string str)
{
        object ob;
        ob = this_player();
        if(!query_temp("box_moved"))
                return notify_fail("按什么呀！\n");
        else if(!str || str != "button")
                return notify_fail("你在按那里呀？\n");
        else {
                set("exits/down","/open/gblade/room/m-room1");
      message_vision("$N将按钮压下，嘎～嘎～地板打开一个往下的阶梯。\n",ob);
               call_out("do_close",10);
        }
        return 1;
}

void do_close()
{
        if(!query("exits/down"))
                return;
        delete("exits/down");
        tell_room(this_object(),"被人打开的地板又缓缓的自动关了起来。\n");
}
