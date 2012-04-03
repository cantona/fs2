// Room: /open/tendo/room/door.c

inherit ROOM;

void create()
{
        set("short", "圣龙口");
        set("long", @LONG
来到此地你发现这儿的景物与昆仑山上的圣龙口没有两样，但眼
前却出现了一座道观。道观似乎是漂浮在空中一般，有座桥从道观连
接出来，但距离你还有段距离想跳上去似乎是不可能的，但是你的好
奇心还是驱使你去试试......

LONG
        );
        set("exits", ([ /* sizeof() == 2 */
        "out":"/open/main/room/M13",
]));
  set("outdoors",1);
        setup();
}
void init()
{
        add_action("do_jumpup","jump");
}

int do_jumpup(string str)
{
        object who;
        who = this_player();
        if(str!="up"){return 0;}
        tell_object(who,"你奋力一跳，脚底踏上了桥的边缘。\n");
        who->move("/open/tendo/room/l1.1");
        tell_room(this_object(),"你看到"+who->query("name")+"奋力一跳，身形往"+
                                "上窜升，等你抬头看时他却已经不见了。\n");
        if(who->query("class") != "taoist"
        || !who->query("class") );
        who->move("/open/center/room/inn");
        return 1;
}
int do_search()
{
object me;
 me = this_player();
 tell_object(me,HIW"前方好像有一块凸地,你应该可以跳上去(jump up)。\n"NOR);
 return 1;
}
