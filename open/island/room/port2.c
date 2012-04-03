inherit ROOM;

void create()
{  
   
   set("short","东津港偏口");
   set ("long", @LONG
这是一个新建起来的港口，是前次东瀛入侵时所遗
留下来的，现在已不做为军事用途，反而成为中原人士
朝外冒险的起点，泊此的小船是到海外小岛的唯一方法．
                     
LONG);
   set("light_up", 1);
        set_heart_beat(1);
 set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/island/room/port",
]));
  
 setup();
}
 init()
{
        add_action("board_ship","board");
        do_start_ship();

}
void do_start_ship()
{
        object ob1;
        if(!find_object("boat man"))
        {
        ob1=new("/open/island/npc/bman1");
         ob1->move("/open/island/room/boat1");
        destruct(ob1);
        }
} 
int board_ship(string str)
{
object ob;
        if(!str)
        return notify_fail("你要搭什么?\n");
        if(!objectp(ob=present(str,environment(this_player()))))
     return notify_fail("看清楚点 , 有那种船吗 ?\n");
        if(str=="boat") 
        {
        message_vision("$N走到岸边 , 跳上了小船 !\n",this_player());
        this_player()->move("/open/island/room/boat1");
        return 1;
        }

return 0;
}



