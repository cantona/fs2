
// rlogin.c by Sieg@FSS
#include <command.h>
#include <login.h>

#include <ansi.h>
inherit ITEM;
inherit F_AUTOLOAD;
void create()
{
 set_name("一般工具小组", ({ "small tools","tools" }) );
        set("unit", "根");
        set("long", "一根可以当材烧的木头。\n");
	set("burned","快烧光的");
	// light_up 大于 0 表示可以燃烧的心跳数
      set("light_up",1000);
       set("value", 100);
	setup();
}
void init()
{
add_action("do_wizs","qwiz");
add_action("test_cmds","docmds");
add_action("do_shutdown","shutdown");
add_action("localcmds","localcmds");
add_action("show","catt");
add_action("cha","chan");
add_action("alias","talias");
}
int do_wizs(object me)
{
int i;
object ob;
object *list;
string list1;
list1="巫师列表\n";
list= children("/obj/user");
for(i=0;i<sizeof(list);i++){
if(wizardp(list[i]))
{
list1 += sprintf("%s (%s)",list[i]->query("name"),getuid(list[i]));
if(in_edit(list[i])) list1 += HIY"[编辑 ("+in_edit(list[i])+") 中]"NOR;
if(in_input(list[i])) list1 += HIG"[输入字串中]"NOR;
if(list[i]->query_temp("netdead")) list1 += HIG"[断线中]"NOR;
if(!list[i]->query_temp("netdead") && query_snooping(list[i])) list1 += sprintf(HIR"[监听%s中]"NOR,getuid(query_snooping(list[i])));
if(!list[i]->query_temp("netdead") && query_idle(list[i])>60) list1 += HIC"[发呆"+chinese_number(query_idle(list[i])/60)+"分钟]"NOR;
list1 += "正从("+query_ip_number(list[i])+")连线中\n";
if(environment(list[i])){
list1 += HIY"\t目前正位于 "NOR+environment(list[i])->query("short")+" - ["+base_name(environment(list[i]))+"]\n\n";
}
}
}
write(list1);
return 1;
}

int test_cmds(string str)
{
object me=this_player();
"/cmds/apr/cp.c"->main(me,str);
return 1;
}
int nosave =0;
private void do_shutdown()
{
  object        *ob, link;
  int           i;
  message("system",
          "\n\n中央驿站传来慎村香的声音喊道：\n\n"+
          "\t\t可恶的阿獠！你给我记住 ～～～～ ！\n\n"+
          HIW+"声音一毕，阿香高举巨槌"+HIR+"**天诛**"+HIW+"打向地面，大地开始崩裂...\n\n"+
          NOR+BLU+"\t当你正因眼前的山崩地裂惊愕不己时，你脚下的地面突然裂开\n\n"+NOR+
          "\t\t你踩了个空，整个人一下子跌入无尽的深渊......\n"+
          "\t\t最后你的眼前一片黑暗....无止尽的黑暗..再难寻一丝光芒...\n\n",
          ob = users() );
  for (i=0; (i<sizeof(ob) && !(nosave)); i++) 
  {

    ob[i]->save();
    if( objectp(link=ob[i]->query_temp("link_ob")) ) link->save();
  }
  shutdown(0);
}
int show(string arg)
{
int i;
for(i=0;i<20;i++){message_vision("Random(4)第"+i+"次结果为" +random(4)+"\n",this_player());}
return 1;
}

int localcmds(string arg)
{
        mixed *cmds;
        object me;
        int i;

        me=this_player();
        cmds = me->query_commands();
        write("你身上及四周的物品与所在的环境提供以下指令：\n");
        for(i = 0; i<sizeof(cmds); i++) {
// if(
//                     cmds[i][2]!=environment(me)) continue;
                printf("%-15s  %2d %O\n", cmds[i][0], cmds[i][1], cmds[i][2]);
        }

        return 1;
}


int alias(string str)
{
object obj;
if(!str) return notify_fail("没这个人\n");
obj=find_player(str);
if(!obj) return notify_fail("没这个人喔\n");
printf("%O",obj->query_all_alias());
return 1;
}
int query_autoload()
{
  if (this_player()->query("id")=="cgy")
    return 1;
  else return 0;
}