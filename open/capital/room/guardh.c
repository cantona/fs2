// Room: /obj/guardh
//#define SOL1 "/open/capital/npc/Wsoldier"
//#define SOL2 "/open/capital/npc/Wsoldier"
//#define SOL3 "/open/capital/npc/Wsoldier"
//#define SOL4 "/open/capital/npc/Wsoldier"

inherit ROOM;
//string *order = ({"SOL1","SOL2","SOL3","SOL4"});
//object soldier;
  
void create ()
{
  set ("short", "小广场");
  set ("long", @LONG
地板上铺满了石砖，似乎是集合用的。前方有栋两层的屋子，屋子
旁立了两只石狮子，门上还有个牌匾写着禁卫军部，京城的禁卫军就是
由这地方统一指挥的。旁边有个马房，是用来和大内联络用的，皇帝的
命令第一时间传到这里再由禁军总指挥下达命令，丝毫延误不得。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : "/open/capital/room/r47",
]));

  set("light_up", 1);
//  set("gopath", "east");

//  call_out("new_soldier",1);
  
  setup();

}
/*
void new_soldier()
{  
  soldier=new(order[random(4)]);
  if(soldier->is_fighting()==0)
  {   
    tell_room(environment(soldier),"禁卫军好像接到命令的样子, 忽然匆匆忙忙的跑回禁卫军部了\n");
    destruct(soldier);
  }
  soldier->move(this_object());
  tell_room(this_object(),"禁卫军部的大门呀的一声打开, 一位禁卫军匆匆的里面走出来\n");
  call_out("around",30+random(30));
}

int around()
{
        string dir;
        dir = environment(soldier)->query("gopath");
        if(soldier->is_fighting()==0)
        {
          command("go "+dir);
          soldier->add("times");
        }
        call_out("around",random(30)+30);
        if( soldier->query("time") >= 150 )
        destruct(soldier);
}
*/