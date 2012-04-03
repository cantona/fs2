inherit ITEM;
#include <ansi.h>
void create ()
{
set_name("金属箱",({"box"}));
set_weight(10);
    if(clonep())
        set_default_object(__FILE__);
    else{
        set("long","一个用金属铸造十分密合的箱子，工艺十分精致。");
        set("no_get",1);
        set_max_encumbrance(10000000);
        set("value",1);
        set("unit","盒");
        setup();
}}
int is_container() { return 1; }
void init()
{
add_action("do_open","open");
}
int do_open(string arg)
{
object me,ob;
me=this_player();
if(!arg||(arg!="box"))
return notify_fail("你要打开什么？\n");
if(me->query_temp("openbox")==1)
return notify_fail("你已经打开过这个金属箱了。\n");
if(!me->query_temp("move_stone"))
return notify_fail("你不知道该如何打开这个箱子。\n");
else{
ob=new("/open/killer/island/obj/card");
tell_object(me,HIY"
你打开了盒子，只见其中金光闪闪，装满了各式各样的宝物!!
你在之中发现了一块「令牌”，外貌非常熟悉，原来是一块黑牙联的杀手密令!!
盒子中装着各式各样的宝物，令你不禁想拿走一些!!
\n"NOR);
ob->move(me);
me->set_temp("openbox",1);
return 1;
}
}
