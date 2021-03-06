// Room: /u/d/devils/school9.c

inherit ROOM;

void create ()
{
  set ("short", "梦居");
  set ("long", @LONG
这是任正晴的寝室，摆设十分简单，只有一张床和一些简单家俱和一只花瓶，
看似单纯，却暗藏玄机，听说任正晴为了怕人趁他睡觉偷袭他，暗藏了许多
机关，没事别乱闯这里，免的死于非命！
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"school8",
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
        if(!str || str != "花瓶")
                return notify_fail("你要移动什么?\n");
        else if(!query_temp("box_moved")) {
                set_temp("box_moved",1);
                message_vision("$N移动了花瓶，此时赫然发现花瓶后面竟然出现了一个暗扣(button)。\n", this_player());
        }
        else {
                delete_temp("box_moved");
                message_vision("$N将花瓶移回原位。\n", this_player());
                if(query("exits/down"))
                        delete("exits/down");
        }
        return 1;
}

int do_push(string str)
{
        object ob;
        ob = this_player();
        if(!query_temp("box_moved"))
                return notify_fail("按什么按！不要乱按好不好！\n");
        else if(!str || str != "button")
                return notify_fail("你在按那里呀?\n");
        else {
                set("exits/down","/open/wu/room/gen1");
                message_vision("$N将暗扣按下，嘎～嘎～地板打开一个往下的阶梯。\n", ob);
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
