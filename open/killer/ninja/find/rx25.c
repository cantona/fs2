// open/killer/ninja/find/rx25.c
// 当玩家发生抉择错误，就会受到严重精神伤害，退回最初点
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "心灵探索");
  set ("long", @LONG
  
  你本来就是来探索的，还跟他客气，不然怎么知道分工化影之谜呢？
  所以你蹑手蹑脚的走到北方的墓，想要看看老祖到底再做什么？
  但是居然没有看到老祖在哪里？怎么可能？？？
  正当你怀疑的时候，背后传来一声叹气声：
  ‘唉....想不到连你也无法信任，.........’
  一股强大的魔气在你体内爆发，让你连反击的机会都没有....
   
LONG);
  set("no_transmit",2);
  setup();
}

void init()
{
    object ob=this_player();
    if( interactive(ob))
	    remove_call_out("greeting");
  call_out("greeting",3 , ob);   
}

void greeting(object ob)
{
   if( ob->query_temp("firstpart")== 8)    
   {
     ob->set_temp("firstpart",7);
     ob->set("sen",1);
     ob->set("gin",1);
     tell_object(ob," 你感到精神逐渐涣散....逐渐陷入昏迷状态..... \n");
     ob->move("/open/killer/room/pillrm.c");
    }
    // 基本上是很不合理啦，就当成巫师测试用，一到最初点
    else 
     ob->move(__DIR__"r1.c");
}

